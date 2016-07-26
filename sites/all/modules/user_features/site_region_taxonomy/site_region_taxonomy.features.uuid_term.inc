<?php
/**
 * @file
 * site_region_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function site_region_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Scotland',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1bf6d8b9-10ff-4b25-a111-836d5d2a7303',
    'vocabulary_machine_name' => 'site_region',
  );
  $terms[] = array(
    'name' => 'Careers',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2cdb24da-4848-4567-9d1f-b60d0b215e6d',
    'vocabulary_machine_name' => 'site_region',
  );
  $terms[] = array(
    'name' => 'England',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '81456604-bcc1-4cc5-8fff-aa09f156c1e1',
    'vocabulary_machine_name' => 'site_region',
  );
  $terms[] = array(
    'name' => 'Wales',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b3ed0cc6-5491-4030-a254-453601ce00f9',
    'vocabulary_machine_name' => 'site_region',
  );
  $terms[] = array(
    'name' => 'R. Ireland',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b5dfb38d-8977-4bce-b970-888e373e5cb7',
    'vocabulary_machine_name' => 'site_region',
  );
  $terms[] = array(
    'name' => 'Business',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd868ddfb-bf22-4d08-8165-0903a09cd3be',
    'vocabulary_machine_name' => 'site_region',
  );
  return $terms;
}
