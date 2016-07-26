<?php
/**
 * @file
 * scottish_qualification_level.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function scottish_qualification_level_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-OaiWq8TnIEXbHydG41pHFaFS876n0paL'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'OaiWq8TnIEXbHydG41pHFaFS876n0paL',
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
        'weight' => -84,
      ),
      'lantra_main' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 12,
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
    'title' => 'Scottish qualification',
    'visibility' => 0,
  );

  return $export;
}
