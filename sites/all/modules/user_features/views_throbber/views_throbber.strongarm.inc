<?php
/**
 * @file
 * views_throbber.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function views_throbber_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_sexy_throbber_append_important';
  $strongarm->value = 0;
  $export['views_sexy_throbber_append_important'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_sexy_throbber_background';
  $strongarm->value = '0,0,0';
  $export['views_sexy_throbber_background'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_sexy_throbber_image';
  $strongarm->value = 'sites/all/modules/views_sexy_throbber/images/default.gif';
  $export['views_sexy_throbber_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_sexy_throbber_image_background';
  $strongarm->value = 1;
  $export['views_sexy_throbber_image_background'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_sexy_throbber_image_background_border_radius';
  $strongarm->value = '16';
  $export['views_sexy_throbber_image_background_border_radius'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_sexy_throbber_image_background_use_border_radius';
  $strongarm->value = 1;
  $export['views_sexy_throbber_image_background_use_border_radius'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_sexy_throbber_opacity';
  $strongarm->value = '0.8';
  $export['views_sexy_throbber_opacity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_sexy_throbber_use_in_other_modules';
  $strongarm->value = 0;
  $export['views_sexy_throbber_use_in_other_modules'] = $strongarm;

  return $export;
}
