<?php
/**
 * @file
 * la_course_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function la_course_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function la_course_content_type_node_info() {
  $items = array(
    'la_course' => array(
      'name' => t('LA Course'),
      'base' => 'node_content',
      'description' => t('LA Course'),
      'has_title' => '1',
      'title_label' => t('Product name / title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
