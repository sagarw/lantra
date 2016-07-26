<?php
/**
 * @file
 * fbaass_form_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fbaass_form_content_type_taxonomy_default_vocabularies() {
  return array(
    'fbaass_agricultural_cropping' => array(
      'name' => 'FBAASS Agricultural Cropping',
      'machine_name' => 'fbaass_agricultural_cropping',
      'description' => 'FBAASS Agricultural Cropping',
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
    'fbaass_agriculture' => array(
      'name' => 'FBAASS Agriculture',
      'machine_name' => 'fbaass_agriculture',
      'description' => 'FBAASS Agriculture',
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
    'fbaass_areas_of_expertise' => array(
      'name' => 'FBAASS Areas of Expertise',
      'machine_name' => 'fbaass_areas_of_expertise',
      'description' => 'FBAASS Area of Expertise',
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
    'fbaass_business_management' => array(
      'name' => 'FBAASS Business Management',
      'machine_name' => 'fbaass_business_management',
      'description' => 'Business management terms for the FBAASS form',
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
    'fbaass_diversification' => array(
      'name' => 'FBAASS Diversification',
      'machine_name' => 'fbaass_diversification',
      'description' => 'FBAASS Diversification',
      'hierarchy' => 1,
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
    'fbaass_environmental_management_' => array(
      'name' => 'FBAASS Environmental Management',
      'machine_name' => 'fbaass_environmental_management_',
      'description' => 'FBAASS Environmental Management ',
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
    'fbaass_forestry_and_arboriculture' => array(
      'name' => 'FBAASS Forestry and Arboriculture',
      'machine_name' => 'fbaass_forestry_and_arboriculture',
      'description' => 'FBAASS Forestry and Arboriculture',
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
    'fbaass_game_management' => array(
      'name' => 'FBAASS Game Management',
      'machine_name' => 'fbaass_game_management',
      'description' => 'FBAASS Game Management',
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
    'fbaass_highlands_islands_enterprise_area' => array(
      'name' => 'FBAASS Highlands & Islands  Enterprise Area',
      'machine_name' => 'fbaass_highlands_islands_enterprise_area',
      'description' => 'FBAASS Highlands & Islands  Enterprise Area',
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
    'fbaass_land_management' => array(
      'name' => 'FBAASS Land Management',
      'machine_name' => 'fbaass_land_management',
      'description' => 'FBAASS Land Management',
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
    'fbaass_scottish_enterprise_area' => array(
      'name' => 'FBAASS Scottish Enterprise Area',
      'machine_name' => 'fbaass_scottish_enterprise_area',
      'description' => 'FBAASS Scottish Enterprise Area',
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
