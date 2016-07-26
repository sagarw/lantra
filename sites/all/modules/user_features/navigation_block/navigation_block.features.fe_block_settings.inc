<?php
/**
 * @file
 * navigation_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function navigation_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-admin-dev-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-admin-dev-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'provider-search/*
provider-search
course-report
course-report/*
intranethome
home
home/*
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
        'weight' => -64,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -64,
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

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => 'workflow
user/*
user
provider-search/*
provider-search
myprofile/mylistings
profile-business_profile/*/edit
profile-business_profile/*
profile-business_profile
node/add/business',
    'roles' => array(
      'administrator' => 3,
      'LA Assessor' => 17,
      'LA EQA' => 16,
      'LA Instructor' => 13,
      'LA Provider' => 12,
      'Learner' => 8,
      'Premium Plus Training Provider' => 11,
      'Premium Training Provider' => 10,
      'Training Provider' => 9,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 13,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -71,
      ),
      'professional_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'professional_theme',
        'weight' => -23,
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
