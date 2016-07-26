<?php
/**
 * @file
 * twitter_api_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function twitter_api_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
