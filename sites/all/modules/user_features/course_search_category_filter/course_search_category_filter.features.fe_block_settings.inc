<?php
/**
 * @file
 * course_search_category_filter.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function course_search_category_filter_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-W6Y01TnXzLiqUKc7f9pIbDZKgyVZ0i1g'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'W6Y01TnXzLiqUKc7f9pIbDZKgyVZ0i1g',
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
        'weight' => -88,
      ),
      'lantra_main' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 8,
      ),
      'professional_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'professional_theme',
        'weight' => -6,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by category',
    'visibility' => 0,
  );

  return $export;
}
