<?php
/**
 * @file
 * learner_context.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function learner_context_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-provider-search'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-provider-search',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'learnersview/*
learnersview',
    'roles' => array(
      'administrator' => 3,
      'LA Provider' => 12,
    ),
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
        'weight' => 11,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -73,
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
    'title' => 'Provider links',
    'visibility' => 1,
  );

  return $export;
}
