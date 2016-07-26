<?php
/**
 * @file
 * url_alias.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function url_alias_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
