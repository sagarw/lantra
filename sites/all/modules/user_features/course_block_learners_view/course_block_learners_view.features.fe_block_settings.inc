<?php
/**
 * @file
 * course_block_learners_view.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function course_block_learners_view_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-support_views-block_5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'support_views-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'learnersview
learnersview/*',
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
        'weight' => 8,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -76,
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
