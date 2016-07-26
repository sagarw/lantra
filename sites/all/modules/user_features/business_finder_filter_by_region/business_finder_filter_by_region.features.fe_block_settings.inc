<?php
/**
 * @file
 * business_finder_filter_by_region.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function business_finder_filter_by_region_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-PrRkkPcSQeNZNRi52G1e5TFoVa1ITCtJ'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'PrRkkPcSQeNZNRi52G1e5TFoVa1ITCtJ',
    'module' => 'facetapi',
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
        'weight' => -23,
      ),
      'lantra_main' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lantra_main',
        'weight' => -23,
      ),
      'professional_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'professional_theme',
        'weight' => -11,
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

  return $export;
}
