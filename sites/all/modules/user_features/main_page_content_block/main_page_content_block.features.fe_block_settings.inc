<?php
/**
 * @file
 * main_page_content_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function main_page_content_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => -93,
      ),
      'lantra_main' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -58,
      ),
      'professional_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'professional_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
