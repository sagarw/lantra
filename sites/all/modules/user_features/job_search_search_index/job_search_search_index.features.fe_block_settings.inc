<?php
/**
 * @file
 * job_search_search_index.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function job_search_search_index_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-Jg13NWLGTlIxuoPsJzxNm8GZ196vYfH1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Jg13NWLGTlIxuoPsJzxNm8GZ196vYfH1',
    'module' => 'facetapi',
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
        'region' => 'right',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 0,
      ),
      'lantra_main' => array(
        'region' => '',
        'status' => 0,
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
    'title' => 'Filter by industry',
    'visibility' => 0,
  );

  return $export;
}
