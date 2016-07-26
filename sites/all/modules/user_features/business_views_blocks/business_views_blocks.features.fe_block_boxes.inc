<?php
/**
 * @file
 * business_views_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function business_views_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Business Finder Help';
  $fe_block_boxes->format = 'popup_tags';
  $fe_block_boxes->machine_name = 'business_finder_help';
  $fe_block_boxes->body = 'Help place holder';

  $export['business_finder_help'] = $fe_block_boxes;

  return $export;
}
