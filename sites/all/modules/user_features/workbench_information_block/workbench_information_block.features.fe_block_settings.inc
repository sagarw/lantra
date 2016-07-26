<?php
/**
 * @file
 * workbench_information_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function workbench_information_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['workbench-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'block',
    'module' => 'workbench',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -99,
      ),
      'lantra_awards' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -96,
      ),
      'lantra_main' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -60,
      ),
      'professional_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'professional_theme',
        'weight' => -99,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -99,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
