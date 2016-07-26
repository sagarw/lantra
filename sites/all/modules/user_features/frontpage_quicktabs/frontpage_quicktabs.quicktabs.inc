<?php
/**
 * @file
 * frontpage_quicktabs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function frontpage_quicktabs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'frontpage_search_block';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Frontpage Search Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_-exp-search-course_search',
      'hide_title' => 1,
      'title' => 'Training & Qualifications',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_93ea9dd23dd3d8c797ad8988abd2eef9',
      'hide_title' => 1,
      'title' => 'Business solutions',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_-exp-job_search-job_finder',
      'hide_title' => 1,
      'title' => 'Careers',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Business solutions');
  t('Careers');
  t('Frontpage Search Tabs');
  t('Training & Qualifications');

  $export['frontpage_search_block'] = $quicktabs;

  return $export;
}
