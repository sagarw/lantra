<?php
/**
 * @file
 * providers_provider_page_location_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function providers_provider_page_location_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-providers-provider_page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-providers-provider_page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'provider-search
provider-search/*',
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
        'weight' => -90,
      ),
      'lantra_main' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 6,
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
