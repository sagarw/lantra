<?php
/**
 * @file
 * qualification_level_sort_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function qualification_level_sort_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-Lq6X0zM6E1GgqNWZHq3bLbT64FwJtyl1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Lq6X0zM6E1GgqNWZHq3bLbT64FwJtyl1',
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
        'weight' => -85,
      ),
      'lantra_main' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 11,
      ),
      'professional_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'professional_theme',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'English qualification',
    'visibility' => 0,
  );

  return $export;
}
