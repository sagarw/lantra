<?php
/**
 * @file
 * fbaass_search_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fbaass_search_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-4cfec151c9593261b90ea74d6565844c'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '4cfec151c9593261b90ea74d6565844c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'fbaass-search',
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
        'weight' => 0,
      ),
      'lantra_main' => array(
        'region' => 'search',
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
    'title' => '',
    'visibility' => 1,
  );

  $export['views-aae6f62ad1ed3a11eca01aa8dafafd22'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'aae6f62ad1ed3a11eca01aa8dafafd22',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lantra_awards',
        'weight' => 0,
      ),
      'lantra_main' => array(
        'region' => '',
        'status' => 0,
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-fbaass_search-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'fbaass_search-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'fbaass-search-map',
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
        'weight' => 0,
      ),
      'lantra_main' => array(
        'region' => 'search',
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
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
