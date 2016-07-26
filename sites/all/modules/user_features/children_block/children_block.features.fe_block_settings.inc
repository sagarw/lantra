<?php
/**
 * @file
 * children_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function children_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-related_content_views-children'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_content_views-children',
    'module' => 'views',
    'node_types' => array(
      0 => 'landing_page',
    ),
    'pages' => 'home/news-and-events
home/why-choose-us
home/frequently-asked-questions
awards/why-choose-us
scotland/fbaass',
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
        'weight' => 3,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -81,
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
    'visibility' => 0,
  );

  return $export;
}
