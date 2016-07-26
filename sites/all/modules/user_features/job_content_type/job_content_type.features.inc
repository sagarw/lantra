<?php
/**
 * @file
 * job_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function job_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function job_content_type_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('Job content type for premium users'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
