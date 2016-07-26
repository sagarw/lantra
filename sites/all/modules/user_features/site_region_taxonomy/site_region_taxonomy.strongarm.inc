<?php
/**
 * @file
 * site_region_taxonomy.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function site_region_taxonomy_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_site_region_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_site_region_pattern'] = $strongarm;

  return $export;
}
