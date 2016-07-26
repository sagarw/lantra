<?php
/**
 * @file
 * course_variation_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function course_variation_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'course_variation' => array(
      'name' => 'Course Variation',
      'machine_name' => 'course_variation',
      'description' => 'Course Variation',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}