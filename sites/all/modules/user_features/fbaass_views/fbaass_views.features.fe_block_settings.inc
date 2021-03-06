<?php
/**
 * @file
 * fbaass_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fbaass_views_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-ab1f39195bdc5b8b6987f100c15b5908'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ab1f39195bdc5b8b6987f100c15b5908',
    'module' => 'views',
    'node_types' => array(
      0 => 'fbaass',
    ),
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
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -94,
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

  return $export;
}
