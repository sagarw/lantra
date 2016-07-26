<?php
/**
 * @file
 * search_sorts_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function search_sorts_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['search_api_sorts-search-sorts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'search-sorts',
    'module' => 'search_api_sorts',
    'node_types' => array(),
    'pages' => 'business-finder
business-finder/*
business-finder-map
business-finder-map/*
job-finder
job-finder/*
fbaass-search
fbaass-search/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 4,
      ),
      'lantra_awards' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -92,
      ),
      'lantra_main' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 4,
      ),
      'professional_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'professional_theme',
        'weight' => 4,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 4,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
