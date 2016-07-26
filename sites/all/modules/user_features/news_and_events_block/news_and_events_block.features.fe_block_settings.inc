<?php
/**
 * @file
 * news_and_events_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function news_and_events_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-news-and-events'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-news-and-events',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'awards/news-and-events
awards/events
newssearch
news/*',
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
        'weight' => 4,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -80,
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
    'title' => 'Helpful Information',
    'visibility' => 1,
  );

  return $export;
}
