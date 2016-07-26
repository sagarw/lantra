<?php


// this goes in template.php
// check if node type page and then add to $vars array
// declaring $vars['foo'] gives you a $foo variable to use in page.tpl.php
/*
 function lantra_awards_preprocess_page(&$vars, $hook) {
   if (isset($vars['node'])) :
      if($vars['node']->type == 'landing_page'):        
          $node = node_load($vars['node']->nid);
           $output = field_view_field('node', $node, 'field_hero_image', array('label' => 'hidden'));        
           $vars['hero_image'] = $output;                
        endif;
   endif;
}
*/


//function lantra_awards_preprocess_page(&$vars) {
// drupal_add_js('jQuery.extend(Drupal.settings, { "pathToTheme": "/' . path_to_theme() . '" });', 'inline');
// $title = drupal_get_title();    
  /*
   * add the theme_path to the vars accessible in the page template
   */
// $vars['theme_path'] = $vars['base_path'] . path_to_theme();
// return $vars;
//}






//function lantra_awards_preprocess_page(&$vars, $hook) {
 // if (isset($vars['node'])) {
  // If the node type is "blog" the template suggestion will be "page--blog.tpl.php".
  // $vars['theme_hook_suggestions'][] = 'page__'. str_replace('_', '--', $vars['node']->type);
 // }
//}


function lantra_awards_preprocess_page(&$vars, $hook) {
  if (isset($vars['node']->type)) {
    // If the content type's machine name is "my_machine_name" the file
    // name will be "page--my-machine-name.tpl.php".
    $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
  }

}




/**
 *
 * @param array $vars
 * @return type
 */
function lantra_awards_preprocess_block(&$vars) {
  $vars['theme_path'] = base_path() . path_to_theme();
}

/**
 *
 * @param array $vars
 * @return type
 */
function lantra_awards_preprocess_region(&$vars) {
  $vars['theme_path'] = base_path() . path_to_theme();
}

  
    

function _menu_wrapper_output($tree, $class = NULL) {
  $output = '<ul ' . (!is_null($class) ? "class='{$class}'" : '') . '>';
  $output .= $tree;
  $output .= '</ul>';

  return $output;
}
  

/*
 * theme_menu_link__MENU_ID
 */
function lantra_awards_menu_link__main_menu($variables) {
  $element = $variables['element'];
  $current = '';
  $options = array('html' => TRUE);

  //Get system file path
  $files_path = variable_get('file_' . file_default_scheme() . '_path', conf_path() . '/files');

  //Check if menu link is a file path.
  $is_file = strpos($element['#original_link']['link_path'], $files_path) !== FALSE;

  //Check if menu link is an external link
  $is_external_link = strpos($element['#original_link']['link_path'], 'http://') !== FALSE;

  //If a file or externale link open in new window.
  if ($is_file || $is_external_link) {
    $element['#localized_options']['attributes']['target'] = "_blank";
  }

  //If on the menu links path disable it.
  if (request_uri() == url($element['#original_link']['href'])) {
    $options_current = array(
      'fragment' => '',
      'external' => true,
      'attributes' => array(
        'class' => array(
          'current'
        )
      )
    );
    $element['#href'] = 'javascript:void(0)';

    //Combine options together
    $options = array_merge($options, $options_current);
  }

  //Check if the menu link is a part of the current path
  if (strpos(request_uri(), url($element['#original_link']['href'])) !== FALSE) {
    $current = 'active';
  }

  //Build link tag for menu item.
  $output = l($element['#title'], $element['#href'], $options);

  //Check if the link has children.
  if ($element['#below']) {
    $options['attributes']['class'][] = 'dropdown-toggle';
    $options['attributes']['data-toggle'] = 'dropdown';
    $element['#title'] .= '<b class="caret"></b>';

    //Rebuild link
    $output = l($element['#title'], $element['#href'], $options);


    $output .= '<ul class="dropdown-menu">';

    //Loop through children building sub menu.
    foreach ($element['#below'] as $key => $child) {
      if (is_numeric($key) && is_array($child))
        $output .= '<li>' . l($child['#title'], $child['#href']) . "</li>";
    }
    $output .= '</ul>';
    $current .= ' dropdown';
  }

  return '<li class="' . $current . '">' . $output . "</li>";
  ;
}

/*
 * theme_menu_tree__MENU_ID
 */
function lantra_awards_menu_tree__main_menu($variables) {
  return _menu_wrapper_output($variables['tree'], 'nav navbar-nav');
}




/*function lantra_awards_theme() {
  $items = array();
  // create custom user-login.tpl.php
  $items['user_login'] = array(
  'render element' => 'form',
  'path' => drupal_get_path('theme', 'lantra_awards') . '/templates',
  'template' => 'page--user--login',
  'preprocess functions' => array(
  'lantra_awards_preprocess_user_login'
  ),
 );
return $items;
}*/








// remove description from user login form text fields
function lantra_awards_form_user_login_alter(&$form, &$form_state) {
  $form['name']['#description'] = t('');
  $form['pass'] = array('#type'  => 'password',
                        '#title' => t('Password'),
                        '#description' => t(''),
                        '#required' => TRUE,
                       );
}




function lantra_awards_preprocess_views_view_providers(&$variables) {
    $variables['template_files'][] = "provider-search-view.page.tpl.php";
}



// theme_select
function lantra_awards_select($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'size'));
  _form_set_class($element, array('form-select'));
  return '<select' . drupal_attributes($element['#attributes']) . '>' . lantra_awards_form_select_options($element) . '</select>';
}

/**
 *
 * @param type $element
 * @param type $choices
 * @return string 
 */
function lantra_awards_form_select_options($element, $choices = NULL) {
  if (!isset($choices)) {
    $choices = $element['#options'];
  }
  // array_key_exists() accommodates the rare event where $element['#value'] is NULL.
  // isset() fails in this situation.
  $value_valid = isset($element['#value']) || array_key_exists('#value', $element);
  $value_is_array = $value_valid && is_array($element['#value']);
  $options = '';
  foreach ($choices as $key => $choice) {
    if (is_array($choice)) {
      $options .= '<optgroup label="' . $key . '">';
      $options .= lantra_awards_form_select_options($element, $choice);
      $options .= '</optgroup>';
    }
    elseif (is_object($choice)) {
      $options .= lantra_awards_form_select_options($element, $choice->option);
    }
    else {
      $key = (string) $key;
      if ($value_valid && (!$value_is_array && (string) $element['#value'] === $key || ($value_is_array && in_array($key, $element['#value'])))) {
        $selected = 'selected="selected".class="provider-header-tab"';
      }
      else {
        $selected = '';
      }
      $options .= '<option class="' . drupal_clean_css_identifier($key) .'"  value="' . check_plain($key) . '"' . $selected . '>' . check_plain($choice) . '</option>';
    }
  }
  return $options;
}

//Replace 'none' with text
function lantra_awards_options_none($variables) {
  return t('- Please select -');
}

/**
 * Implements hook_form_alter().
 */
function lantra_awards_form_alter(&$form, &$form_state, $form_id) {
  if($form_id == "views_exposed_form"){
//   dpm($form); // print $form array on the top of the page
    if (isset($form['full_text_search'])) {
            $form['full_text_search']['#attributes'] = array('placeholder' => array(t('e.g. chainsaws')));
    }
  }

}

