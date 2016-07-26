<?php
/**
 * @file
 * filter_by_language.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function filter_by_language_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-eqlwmGIoLqm7QUFmBTCCAHtf7vulFeib'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'eqlwmGIoLqm7QUFmBTCCAHtf7vulFeib',
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
        'weight' => -83,
      ),
      'lantra_main' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 13,
      ),
      'professional_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'professional_theme',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by language',
    'visibility' => 0,
  );

  return $export;
}
