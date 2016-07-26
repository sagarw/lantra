<?php
/**
 * @file
 * business_profile_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function business_profile_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_business_classification_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_business_classification_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_industry_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_industry_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_no_of_employees_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_no_of_employees_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_region_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_region_pattern'] = $strongarm;

  return $export;
}
