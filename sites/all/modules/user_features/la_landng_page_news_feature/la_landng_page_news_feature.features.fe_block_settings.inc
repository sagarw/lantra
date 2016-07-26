<?php
/**
 * @file
 * la_landng_page_news_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function la_landng_page_news_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-4f9358fd4f5539849cb02327cf37a57e'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '4f9358fd4f5539849cb02327cf37a57e',
    'module' => 'views',
    'node_types' => array(
      0 => 'la_landing_page',
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
        'weight' => -95,
      ),
      'lantra_main' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -61,
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
