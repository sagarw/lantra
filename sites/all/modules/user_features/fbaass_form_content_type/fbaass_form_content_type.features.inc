<?php
/**
 * @file
 * fbaass_form_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fbaass_form_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function fbaass_form_content_type_node_info() {
  $items = array(
    'fbaass' => array(
      'name' => t('FBAASS'),
      'base' => 'node_content',
      'description' => t('Lantra Awards FBAASS content type'),
      'has_title' => '1',
      'title_label' => t('Form name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
