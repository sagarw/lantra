<?php
/**
 * @file
 * course_search_course_type_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function course_search_course_type_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-jEgUf9D49sMgu1DovH017pkOnefKKdiT'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'jEgUf9D49sMgu1DovH017pkOnefKKdiT',
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
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -87,
      ),
      'lantra_main' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 9,
      ),
      'professional_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'professional_theme',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by type',
    'visibility' => 0,
  );

  return $export;
}
