<?php
/**
 * @file
 * lantra_awards_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lantra_awards_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-lantra-awards'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-lantra-awards',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'myprofile
myprofile/*
user
user/*',
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
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 14,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -70,
      ),
      'professional_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'professional_theme',
        'weight' => -22,
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
