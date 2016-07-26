<?php
/**
 * @file
 * discover_lantra_home_page_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function discover_lantra_home_page_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home page block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'discover_lantra_wards';
  $fe_block_boxes->body = '<ul><li>Nationally recognised, locally delivered</li><li>Network of trainers throughout the UK &amp; Ireland</li><li>Study at a time and location that suits you</li><li>Over 600 courses and qualifications to choose from</li><li>High quality courses ensuring safe working practices</li><li>Backed by industry experts</li><li>Dedicated to raising skills in the land-based and environmental sector​</li></ul><p><br><strong><a href="/coursesearch">Search</a>&nbsp;our range of industry-leading courses and qualifications today!</strong></p><p>&nbsp;</p>';

  $export['discover_lantra_wards'] = $fe_block_boxes;

  return $export;
}
