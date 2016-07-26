<?php
/**
 * @file
 * my_downloads_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function my_downloads_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function my_downloads_content_type_node_info() {
  $items = array(
    'file' => array(
      'name' => t('File'),
      'base' => 'node_content',
      'description' => t('File content type, use for the upload and control of binary files.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
