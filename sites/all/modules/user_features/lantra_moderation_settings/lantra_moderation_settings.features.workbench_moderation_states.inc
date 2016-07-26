<?php
/**
 * @file
 * lantra_moderation_settings.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function lantra_moderation_settings_workbench_moderation_export_states() {
  $items = array(
    'draft' => array(
      'name' => 'draft',
      'label' => 'Draft',
      'description' => 'Save as \'Draft\'',
      'weight' => -10,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'Needs Review',
      'description' => 'Save as \'Needs Review\'',
      'weight' => 0,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Publish',
      'weight' => -10,
    ),
  );
  return $items;
}
