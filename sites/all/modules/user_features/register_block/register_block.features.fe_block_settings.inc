<?php
/**
 * @file
 * register_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function register_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  return $export;
}
