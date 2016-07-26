<?php
/**
 * @file
 * editorial_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function editorial_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-editorial-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-editorial-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'workflow
workflow/*
content-summary
filter/tips',
    'roles' => array(
      'administrator' => 3,
      'Editor' => 6,
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
        'weight' => 12,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -72,
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
