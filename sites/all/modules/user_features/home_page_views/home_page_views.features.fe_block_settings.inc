<?php
/**
 * @file
 * home_page_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function home_page_views_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-6af53b706de8be0b6f9703e597170958'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '6af53b706de8be0b6f9703e597170958',
    'module' => 'views',
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
        'region' => '',
        'status' => 0,
        'theme' => 'lantra_awards',
        'weight' => 12,
      ),
      'lantra_main' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lantra_main',
        'weight' => 12,
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

  $export['views-home_page_views-recent_jobs'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'home_page_views-recent_jobs',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'homeleft',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 10,
      ),
      'lantra_main' => array(
        'region' => 'homeleft',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 10,
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

  $export['views-home_page_views-recent_news'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'home_page_views-recent_news',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'homemiddle',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 9,
      ),
      'lantra_main' => array(
        'region' => 'homemiddle',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 9,
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

  $export['views-home_page_views-top_cat'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'home_page_views-top_cat',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'homeright',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 11,
      ),
      'lantra_main' => array(
        'region' => 'homeright',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 11,
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
