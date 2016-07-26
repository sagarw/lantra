<?php
/**
 * @file
 * view_providers_tab_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function view_providers_tab_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-428a1307dec994d91e071cf8880f24ef'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '428a1307dec994d91e071cf8880f24ef',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'provider-search-nationwide/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -83,
      ),
      'lantra_main' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -83,
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
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-providers-tab_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'providers-tab_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'provider-search
provider-search-map
provider-search-nationwide',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -88,
      ),
      'lantra_main' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -88,
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
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-providers-tab_block_list_view'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'providers-tab_block_list_view',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'provider-search/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -85,
      ),
      'lantra_main' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -85,
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
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-providers-tab_block_map_view'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'providers-tab_block_map_view',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'provider-search-map/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -84,
      ),
      'lantra_main' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -84,
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
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
