<?php
/**
 * @file
 * provider_page_map_filter_by_location.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function provider_page_map_filter_by_location_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-52566e6fa47c76257e1ba307535c1e03'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '52566e6fa47c76257e1ba307535c1e03',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'provider-search-map
provider-search-map/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -89,
      ),
      'lantra_main' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 7,
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
    'title' => 'Filter by location',
    'visibility' => 1,
  );

  return $export;
}
