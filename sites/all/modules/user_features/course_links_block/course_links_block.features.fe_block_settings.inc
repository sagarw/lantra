<?php
/**
 * @file
 * course_links_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function course_links_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-support_views-provider_link'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'support_views-provider_link',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'awards/product
awards/product/*',
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
        'weight' => 7,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -77,
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
    'title' => 'Course Links',
    'visibility' => 1,
  );

  return $export;
}
