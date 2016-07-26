<?php
/**
 * @file
 * fbaass_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fbaass_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-9a2ac8ebdc34aa92c4981ff9c15863d0'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '9a2ac8ebdc34aa92c4981ff9c15863d0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'fbaass-search',
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
        'weight' => 0,
      ),
      'lantra_main' => array(
        'region' => 'search',
        'status' => 1,
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
    'visibility' => 1,
  );

  return $export;
}
