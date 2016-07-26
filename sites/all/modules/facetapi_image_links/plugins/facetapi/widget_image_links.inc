<?php
class FacetapiImageLinksWidget extends FacetapiWidgetLinks {

  /**
   * Overrides FacetapiWidgetLinks::init().
   *
   * Adds additional JavaScript settings and CSS.
   */
  public function init() {
    parent::init();
    //$this->jsSettings['makeCheckboxes'] = 1;
    //drupal_add_css(drupal_get_path('module', 'facetapi') . '/facetapi.css');
  }

  //TODO: this is a bit of a hack, prefered way of doing this?
  public function entity_info() {
    //TODO: how notify to Facet API if not supported for current field?
    $facet = facetapi_facet_load($this->settings->facet, $this->settings->searcher);
    //Provide api for this, alter?
    //TODO: entity reference etc
    //Utilize entity api?
    switch($facet['field type']) {
      case 'taxonomy_term':
        $field = field_info_field($facet['field api name']);
        $vocabulary = $field['settings']['allowed_values'][0]['vocabulary'];
        return array('taxonomy_term', $vocabulary);
      default:
        //TODO: handle this!
        return FALSE;
    }
  }

  public function image_fields() {
    list($entity_type, $bundle_name) = $this->entity_info();
    $instances = field_info_instances($entity_type, $bundle_name);
    $image_fields = array();
    foreach($instances as $field_name => $instance) {
      $field_info = field_info_field($field_name);
      if($field_info['type'] === 'image') {
        $image_fields[$field_name] = $instance;
      }
    }
    return $image_fields;
  }
  public function image_field_options() {
    $options = array();
    foreach($this->image_fields() as $field_name => $instance) {
      $options[$field_name] = t('!label (!field_name)', array('!field_name' => $field_name, '!label' => $instance['label']));
    }
    return $options;
  }

  /**
   * Overrides FacetapiWidget::settingsForm().
   */
  function settingsForm(&$form, &$form_state) {
    parent::settingsForm($form, $form_state);
    $form['widget']['widget_settings']['image_links'][$this->id]['image_style'] = array(
      '#type' => 'select',
      '#title' => t('Image style'),
      '#default_value' => $this->settings->settings['image_style'],
      '#options' => image_style_options(),
      '#description' => t('The image style to use.'),
      '#states' => array(
        'visible' => array(
          'select[name="widget"]' => array('value' => $this->id),
        ),
      ),
    );

    $form['widget']['widget_settings']['image_links'][$this->id]['image_field_name'] = array(
      '#type' => 'select',
      '#title' => t('Image field'),
      '#default_value' => $this->settings->settings['image_field_name'],
      '#options' => $this->image_field_options(),
      '#description' => t('The image field to use.'),
      '#states' => array(
        'visible' => array(
          'select[name="widget"]' => array('value' => $this->id),
        ),
      ),
    );

  }

  /**
   * Overrides FacetapiWidget::getDefaultSettings().
   */
  function getDefaultSettings() {
    return parent::getDefaultSettings() + array(
      'image_style' => '',
      'image_field_name' => '',
    );
  }

  /**
   * Overrides FacetapiWidgetLinks::getItemClasses().
   *
   * Sets the base class for checkbox facet items.
   */
  /*
  public function getItemClasses() {
    return array('facetapi-checkbox');
  }
   */

  protected function setThemeHooks(array &$build) {
    foreach ($build as $value => &$item) {
      $item['#theme'] = ($item['#active']) ? 'facetapi_image_links_link_active' : 'facetapi_image_links_link_inactive';
      if (!empty($item['#item_children'])) {
        $this->setThemeHooks($item['#item_children']);
      }
    }
    return $this;
  }

  function buildListItems($build) {

    $settings = $this->settings->settings;

    list($entity_type, $bundle_name) = $this->entity_info();

    // Initializes links attributes, adds rel="nofollow" if configured.
    $attributes = ($settings['nofollow']) ? array('rel' => 'nofollow') : array();
    $attributes += array('class' => $this->getItemClasses());

    // This is probably not very safe
    $entity_ids = array_keys($build);
    $entities = entity_load($entity_type, $entity_ids);

    // Builds rows.
    $items = array();
    foreach ($build as $value => $item) {

      $row = array('class' => array());

      /*
      //TODO: view mode and field_view_field instead? 
      */

      $field_items = field_get_items($entity_type, $entities[$value], $settings['image_field_name']);
      $field_item = current($field_items);

      $image = theme('image_style', array(
        'style_name' => $settings['image_style'], //TODO: fix
        'path' => $field_item['uri'],
        'alt' => $item['#markup'], //TODO: FIX
        'title' => $item['#markup'],
        'attributes' => array('class' => array('facetapi-image-links-image')),
      ));

      // Initializes variables passed to theme hook.
      $variables = array(
        'text' => $item['#markup'],
        'image' => $image,
        'path' => $item['#path'],
        'count' => $item['#count'],
        'options' => array(
          'attributes' => $attributes,
          'html' => $item['#html'], //TODO: where is this set?
          'query' => $item['#query'],
        ),
      );

      // Adds the facetapi-zero-results class to items that have no results.
      if (!$item['#count']) {
        $variables['options']['attributes']['class'][] = 'facetapi-zero-results';
      }

      // Add an ID to identify this link.
      $variables['options']['attributes']['id'] = drupal_html_id('facetapi-link');

      // If the item has no children, it is a leaf.
      if (empty($item['#item_children'])) {
        $row['class'][] = 'leaf';
      }
      else {
        // If the item is active or the "show_expanded" setting is selected,
        // show this item as expanded so we see its children.
        if ($item['#active'] || !empty($settings['show_expanded'])) {
          $row['class'][] = 'expanded';
          $row['children'] = $this->buildListItems($item['#item_children']);
        }
        else {
          $row['class'][] = 'collapsed';
        }
      }

      // Gets theme hook, adds last minute classes.
      $class = ($item['#active']) ? 'facetapi-active' : 'facetapi-inactive';
      $variables['options']['attributes']['class'][] = $class;
      
      // TODO: where is this set?
      //$item['#theme'] = '';
      // Themes the link, adds row to items.
      $row['data'] = theme($item['#theme'], $variables);
      $items[] = $row;
    }

    return $items;
  }
   
}
