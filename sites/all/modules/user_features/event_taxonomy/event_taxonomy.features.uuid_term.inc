<?php
/**
 * @file
 * event_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function event_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Lantra Event',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '272e59c2-9051-4673-8baa-4eafb2f79519',
    'vocabulary_machine_name' => 'event_type',
  );
  $terms[] = array(
    'name' => 'Training Course',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '44a32b30-435e-402d-8f8c-58021b6d33ff',
    'vocabulary_machine_name' => 'event_type',
  );
  $terms[] = array(
    'name' => 'Trade Event',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a77d6771-803a-4d99-bd62-09f10b68a867',
    'vocabulary_machine_name' => 'event_type',
  );
  return $terms;
}
