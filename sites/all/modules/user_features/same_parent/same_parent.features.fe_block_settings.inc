<?php
/**
 * @file
 * same_parent.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function same_parent_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-79151fb09e58262dd406efef0b027977'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '79151fb09e58262dd406efef0b027977',
    'module' => 'views',
    'node_types' => array(
      0 => 'article',
      1 => 'basic_page_no_hero_image',
      2 => 'page',
    ),
    'pages' => 'awards/events
scotland/fbaass
scotland/accredited-advisors
scotland/becoming-advisor
scotland/whole-farm-review-scheme',
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
        'weight' => 2,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -82,
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
    'title' => 'In this section',
    'visibility' => 0,
  );

  return $export;
}
