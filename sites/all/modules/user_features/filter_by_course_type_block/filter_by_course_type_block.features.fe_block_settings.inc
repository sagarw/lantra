<?php
/**
 * @file
 * filter_by_course_type_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function filter_by_course_type_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-We01R9paeXkYQX044zT0DxfGcZXMiyGB'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'We01R9paeXkYQX044zT0DxfGcZXMiyGB',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
    ),
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
        'weight' => -86,
      ),
      'lantra_main' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lantra_main',
        'weight' => 10,
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
    'title' => 'Filter by type (token)',
    'visibility' => 0,
  );

  return $export;
}
