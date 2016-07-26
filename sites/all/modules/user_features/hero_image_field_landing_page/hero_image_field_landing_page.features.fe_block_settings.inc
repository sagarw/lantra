<?php
/**
 * @file
 * hero_image_field_landing_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function hero_image_field_landing_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['fieldblock-68b80d33eb5d6d6fd597744807989f6b'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '68b80d33eb5d6d6fd597744807989f6b',
    'module' => 'fieldblock',
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
        'region' => 'hero_image_region',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 0,
      ),
      'lantra_main' => array(
        'region' => 'hero_image_region',
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
    'visibility' => 0,
  );

  return $export;
}
