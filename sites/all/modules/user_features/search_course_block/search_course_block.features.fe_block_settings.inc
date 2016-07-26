<?php
/**
 * @file
 * search_course_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function search_course_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-search-course_search'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-search-course_search',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'coursesearch
coursesearch/*
coursesearchtest
coursesearchtest/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -87,
      ),
      'lantra_main' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -87,
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
    'visibility' => 1,
  );

  return $export;
}
