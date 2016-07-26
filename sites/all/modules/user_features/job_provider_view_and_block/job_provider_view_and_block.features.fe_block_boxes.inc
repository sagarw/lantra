<?php
/**
 * @file
 * job_provider_view_and_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function job_provider_view_and_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Job Finder Help';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'job_finder_help';
  $fe_block_boxes->body = '<p>Search by keyword(s) separated by a comma. Click on the job title for more information about the role in question.</p><p>You can sort results by both relevance and job title using the drop down options below.</p><p>Results can be filtered by salary, industry or job type - simply select the respective filter to display / hide it and select a filter.</p><p>A filter can be reset by selecting the (-) link.</p>';

  $export['job_finder_help'] = $fe_block_boxes;

  return $export;
}
