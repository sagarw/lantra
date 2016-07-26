<?php
/**
 * @file
 * job_content_type.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function job_content_type_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Part Time',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0e20c018-ce7c-4cb4-8203-a46c5a6e9fd7',
    'vocabulary_machine_name' => 'work_hours',
  );
  $terms[] = array(
    'name' => 'Apprenticeship',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '305429d7-3fa4-4fbd-add3-cd2089fa777f',
    'vocabulary_machine_name' => 'job_type',
  );
  $terms[] = array(
    'name' => 'Volunteering',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3a02f115-c009-464c-9078-dc9c17ef6e86',
    'vocabulary_machine_name' => 'job_type',
  );
  $terms[] = array(
    'name' => 'Full Time',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3a151048-08c2-4bf7-9edf-a38397d49c76',
    'vocabulary_machine_name' => 'work_hours',
  );
  $terms[] = array(
    'name' => 'Temporary',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4beca8f3-cab1-4337-b7b6-c8c02fe1b421',
    'vocabulary_machine_name' => 'job_type',
  );
  $terms[] = array(
    'name' => 'Contract',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '78088d48-8db1-4451-88e2-2b99c9c9d81a',
    'vocabulary_machine_name' => 'job_type',
  );
  $terms[] = array(
    'name' => 'Permanent',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8e2061c6-c441-45df-8a6e-a791a1ae89ff',
    'vocabulary_machine_name' => 'job_type',
  );
  return $terms;
}
