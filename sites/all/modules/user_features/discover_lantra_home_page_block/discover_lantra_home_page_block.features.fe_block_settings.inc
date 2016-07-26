<?php
/**
 * @file
 * discover_lantra_home_page_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function discover_lantra_home_page_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-discover_lantra_wards'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'discover_lantra_wards',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'homeright',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 0,
      ),
      'lantra_main' => array(
        'region' => 'homeright',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 0,
      ),
      'professional_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'professional_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Discover Lantra Awards',
    'visibility' => 1,
  );

  return $export;
}
