<?php
/**
 * @file
 * lantra_regional_menu_block_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lantra_regional_menu_block_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-regional-links-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-regional-links-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'home
home/*
user
user/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'regional_menu',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 0,
      ),
      'lantra_main' => array(
        'region' => 'regional_menu',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
