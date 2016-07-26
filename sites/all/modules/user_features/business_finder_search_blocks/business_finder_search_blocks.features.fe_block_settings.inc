<?php
/**
 * @file
 * business_finder_search_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function business_finder_search_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-93ea9dd23dd3d8c797ad8988abd2eef9'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '93ea9dd23dd3d8c797ad8988abd2eef9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'business-finder',
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
        'weight' => -80,
      ),
      'lantra_main' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -80,
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

  $export['views-cf5fe5980f7d6c0502e44b02bde7a396'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'cf5fe5980f7d6c0502e44b02bde7a396',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'business-finder-map',
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
        'weight' => -79,
      ),
      'lantra_main' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -79,
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
