<?php
/**
 * @file
 * sidebar_block_helpful_information.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sidebar_block_helpful_information_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-9b4c0ccdd18aba5f0938710007b988cf'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '9b4c0ccdd18aba5f0938710007b988cf',
    'module' => 'views',
    'node_types' => array(
      0 => 'landing_page',
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
        'weight' => 5,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -79,
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
    'title' => 'Helpful Information',
    'visibility' => 0,
  );

  return $export;
}
