<?php
/**
 * @file
 * landing_page_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function landing_page_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-landing_page-field_parent_page'.
  $field_instances['node-landing_page-field_parent_page'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_parent_page',
    'label' => 'Parent Page',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'autofill' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_sidebar_content'.
  $field_instances['node-landing_page-field_sidebar_content'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If required, select some content here which will be displayed in the sidebar beside the content.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_sidebar_content',
    'label' => 'Sidebar content',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'autofill' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('If required, select some content here which will be displayed in the sidebar beside the content.');
  t('Parent Page');
  t('Sidebar content');

  return $field_instances;
}
