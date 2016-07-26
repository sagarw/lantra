<?php
/**
 * @file
 * provider_context.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function provider_context_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-provider-context'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-provider-context',
    'module' => 'menu',
    'node_types' => array(
      0 => 'lantra_awards_course',
      1 => 'la_course',
    ),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'LA Provider' => 12,
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
        'weight' => 10,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -74,
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
    'title' => 'Provider links',
    'visibility' => 0,
  );

  return $export;
}
