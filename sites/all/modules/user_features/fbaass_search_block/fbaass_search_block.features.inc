<?php
/**
 * @file
 * fbaass_search_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fbaass_search_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}
