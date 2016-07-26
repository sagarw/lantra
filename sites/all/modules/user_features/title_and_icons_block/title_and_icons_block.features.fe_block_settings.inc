<?php
/**
 * @file
 * title_and_icons_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function title_and_icons_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-support_views-title_and_icons'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'support_views-title_and_icons',
    'module' => 'views',
    'node_types' => array(
      0 => 'course',
      1 => 'lantra_awards_course',
      2 => 'la_course',
      3 => 'page',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -94,
      ),
      'lantra_main' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -59,
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
