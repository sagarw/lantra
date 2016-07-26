<?php
/**
 * @file
 * business_views_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function business_views_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-business_finder_help'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'business_finder_help',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'business-finder
business-finder/*
business-finder-map
business-finder-map/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -96,
      ),
      'lantra_main' => array(
        'region' => 'right',
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
    'title' => 'Help',
    'visibility' => 1,
  );

  $export['facetapi-ZTEhjcMkIts11ezxtocZTrCiX8LOelzi'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ZTEhjcMkIts11ezxtocZTrCiX8LOelzi',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'business-finder
business-finder/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 0,
      ),
      'lantra_main' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 15,
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

  $export['facetapi-nwy1OPKRYyVOVfwGKeWGIxen1BC5JZab'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nwy1OPKRYyVOVfwGKeWGIxen1BC5JZab',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'business-finder
business-finder/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 0,
      ),
      'lantra_main' => array(
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => 14,
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
