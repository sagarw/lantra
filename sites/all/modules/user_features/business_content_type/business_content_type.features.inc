<?php
/**
 * @file
 * business_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function business_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function business_content_type_node_info() {
  $items = array(
    'business' => array(
      'name' => t('Business Listing'),
      'base' => 'node_content',
      'description' => t('Business content type, contains details about a clients specific business.'),
      'has_title' => '1',
      'title_label' => t('Business Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
