<?php
/**
 * @file
 * business_profile_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function business_profile_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function business_profile_content_type_default_profile2_type() {
  $items = array();
  $items['business_profile'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "business_profile",
    "label" : "Business profile",
    "weight" : "0",
    "data" : { "registration" : 0, "moderation" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
