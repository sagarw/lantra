<?php
/**
 * @file
 * fbaass_search_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function fbaass_search_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'FBAASS Search Help';
  $fe_block_boxes->format = 'popup_tags';
  $fe_block_boxes->machine_name = 'fbaass_search_help';
  $fe_block_boxes->body = 'You can search by advisor name or company in the main box. You can find advisers by region in the box below.';

  $export['fbaass_search_help'] = $fe_block_boxes;

  return $export;
}
