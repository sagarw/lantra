<?php
/**
 * @file
 * lantra_dev_menus.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lantra_dev_menus_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-dev-testing'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-dev-testing',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'provider-search/*
provider-search
course-report
course-report/*
intranethome
home
home/*
la-course-approval
<front>
admin/*
node/add/business',
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
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 22,
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
