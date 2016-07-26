<?php
/**
 * @file
 * fbaass_form_content_type.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function fbaass_form_content_type_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Timber production',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0024b28c-4347-4ef2-b606-4522dba2ba5d',
    'vocabulary_machine_name' => 'fbaass_forestry_and_arboriculture',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '005fab81-ada0-44a5-8ba6-8f9a5e173407',
    'vocabulary_machine_name' => 'fbaass_agricultural_cropping',
  );
  $terms[] = array(
    'name' => 'Sheep',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '048b4f96-fcf4-4f7e-95eb-316dda89ce14',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
      1 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
    ),
  );
  $terms[] = array(
    'name' => 'Deer management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0501b3f8-6320-446f-b2f1-fbe0fa98e2a4',
    'vocabulary_machine_name' => 'fbaass_game_management',
  );
  $terms[] = array(
    'name' => 'Lothian & Edinburgh Enterprise Ltd',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '06d3b14f-f910-49ff-887b-e7093a3bc5ba',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Shetland Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '08212502-8295-41a8-bc0b-5c57313f4c3d',
    'vocabulary_machine_name' => 'fbaass_highlands_islands_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0930301d-f560-40a8-96c9-bb6cc663744b',
    'vocabulary_machine_name' => 'fbaass_land_management',
  );
  $terms[] = array(
    'name' => 'Processing and Retailing of Forest Products',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0964675f-9594-4ee0-a6d9-f5a4082554a5',
    'vocabulary_machine_name' => 'fbaass_diversification',
  );
  $terms[] = array(
    'name' => 'Taxation, Succession Planning & Retirement',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0a798cbc-0910-4de4-9ff4-aaada566e97b',
    'vocabulary_machine_name' => 'fbaass_business_management',
  );
  $terms[] = array(
    'name' => 'Finance',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0ae78d81-0f13-4ae1-bd24-51530643067f',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
      1 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
    ),
  );
  $terms[] = array(
    'name' => 'Root Crops',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0cb0671a-19ea-49f9-93d2-320de837206e',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
      1 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
    ),
  );
  $terms[] = array(
    'name' => 'Health And Safety',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0d52b0de-d432-4f35-8eb3-ba9960c13337',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
      1 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
    ),
  );
  $terms[] = array(
    'name' => 'Moray, Badenoch & Strathspey',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0ed3d049-8dfc-4cfd-8d01-0d0d3b5b7585',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '110a9098-ad9a-44c6-94de-765d9ba38a7b',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '13898145-c1c0-4903-ac9a-11b5433d3fdf',
      1 => '13898145-c1c0-4903-ac9a-11b5433d3fdf',
    ),
  );
  $terms[] = array(
    'name' => 'Argyll & the Islands Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '113b405e-e272-44ae-a123-73989702b8d5',
    'vocabulary_machine_name' => 'fbaass_highlands_islands_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Forestry and Arboriculture',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '13898145-c1c0-4903-ac9a-11b5433d3fdf',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
  );
  $terms[] = array(
    'name' => 'Beef',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1a0c00be-7fc1-44c7-8e15-378ada77baf7',
    'vocabulary_machine_name' => 'fbaass_agriculture',
  );
  $terms[] = array(
    'name' => 'Scottish Land Tenure',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1a28cd2a-4fc0-402d-b021-12da46cdc2ca',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
      1 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1a951fa9-c07a-4ebb-8cac-a5d8dfb604c9',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '4a085f6e-c953-4790-ba84-7406875bc5d9',
      1 => '4a085f6e-c953-4790-ba84-7406875bc5d9',
    ),
  );
  $terms[] = array(
    'name' => 'Alternative Crops',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1cfaf2a5-82de-4485-b46b-8bf989205ca9',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
      1 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
    ),
  );
  $terms[] = array(
    'name' => 'Alternative Agricultural Production',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1ea957e6-9560-4b40-9f65-b81fd16ff0df',
    'vocabulary_machine_name' => 'fbaass_diversification',
  );
  $terms[] = array(
    'name' => 'Processing and retailing of forest products',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1f89ae68-c515-4a47-aba1-9174d79b93af',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
      1 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
    ),
  );
  $terms[] = array(
    'name' => 'Health and safety',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '217f82ab-3223-4c6a-a4f5-72c9610f9533',
    'vocabulary_machine_name' => 'fbaass_business_management',
  );
  $terms[] = array(
    'name' => 'Nitrate vulnerable zones',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '21920770-0cad-4b56-8e7a-a1e12d117096',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '4a085f6e-c953-4790-ba84-7406875bc5d9',
      1 => '4a085f6e-c953-4790-ba84-7406875bc5d9',
    ),
  );
  $terms[] = array(
    'name' => 'Grampian Enterprise Ltd',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '21f3eb65-475a-4fcd-8f53-f037bba54745',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Caithness & Sutherland Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '226970c1-7c24-4e46-b5c3-5a84eef957a4',
    'vocabulary_machine_name' => 'fbaass_highlands_islands_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Lochaber Limited',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '22dc7383-87ee-462a-a673-274c85cd3baa',
    'vocabulary_machine_name' => 'fbaass_highlands_islands_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Diversification',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
  );
  $terms[] = array(
    'name' => 'Waste Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '28940797-4875-4023-aec3-684371b2a446',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '4a085f6e-c953-4790-ba84-7406875bc5d9',
      1 => '4a085f6e-c953-4790-ba84-7406875bc5d9',
    ),
  );
  $terms[] = array(
    'name' => 'Computer',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2ae0ab48-ac54-4112-847e-c961df5d17c5',
    'vocabulary_machine_name' => 'fbaass_business_management',
  );
  $terms[] = array(
    'name' => 'Residential letting and tourist accommodation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2f125712-8b85-4b99-b8e0-e14db78e63a2',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
      1 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
    ),
  );
  $terms[] = array(
    'name' => 'Western Isles Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '310aa084-5cd4-437d-9fab-ce2b22ce2bb0',
    'vocabulary_machine_name' => 'fbaass_highlands_islands_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Sheep',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '32062aa5-5656-4751-a963-e03285bd0fed',
    'vocabulary_machine_name' => 'fbaass_agriculture',
  );
  $terms[] = array(
    'name' => 'Chemical Applications',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '33c15c95-d7b1-4a3b-b40c-ee6fc7c3587b',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '4a085f6e-c953-4790-ba84-7406875bc5d9',
      1 => '4a085f6e-c953-4790-ba84-7406875bc5d9',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '341a83e8-0165-438e-a678-445fd88b27a0',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
      1 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
    ),
  );
  $terms[] = array(
    'name' => 'Computers',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '38e5de7a-39a0-4f43-9985-3d896cca5a41',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
      1 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
    ),
  );
  $terms[] = array(
    'name' => 'Combinable Crops',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3d26af4a-be73-490e-921f-22e95ac3eea6',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
      1 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
    ),
  );
  $terms[] = array(
    'name' => 'Environmental Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '40ff4f83-6abe-4f52-8d1d-a256f5ffbbac',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
  );
  $terms[] = array(
    'name' => 'Advisory Skills',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '413a2473-3b22-4a77-8604-0af140eb44fe',
    'vocabulary_machine_name' => 'fbaass_business_management',
  );
  $terms[] = array(
    'name' => 'Staff development',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '417501a5-e598-45bf-9ef6-7bb9deae70ef',
    'vocabulary_machine_name' => 'fbaass_business_management',
  );
  $terms[] = array(
    'name' => 'Skye & Lochalsh Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '41f133f1-22fb-435a-b697-fa3d9deeb2de',
    'vocabulary_machine_name' => 'fbaass_highlands_islands_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Shooting',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '43fe4f94-c6d3-4bcf-8f1b-33040e85a852',
    'vocabulary_machine_name' => 'fbaass_game_management',
  );
  $terms[] = array(
    'name' => 'Production Horticulture',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '455ea5a0-bb92-46e0-b969-d86e55caf768',
    'vocabulary_machine_name' => 'fbaass_agricultural_cropping',
  );
  $terms[] = array(
    'name' => 'Dairy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4651d08e-bb19-4511-8bde-78068f9578ef',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
      1 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '476811d7-b5a4-4e76-ac8e-937d952b542d',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
  );
  $terms[] = array(
    'name' => 'Land Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4a085f6e-c953-4790-ba84-7406875bc5d9',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
  );
  $terms[] = array(
    'name' => 'Enterprise Company Ltd Lanarkshire Development Agency',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4b2418e8-036b-48e3-a4c5-540eaba45e32',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Pigs',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4e337a71-4cfa-42b7-972e-3b6d4d0e77b6',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
      1 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
    ),
  );
  $terms[] = array(
    'name' => 'Finance',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4f9653cf-0005-4021-93a2-001f9f59d78a',
    'vocabulary_machine_name' => 'fbaass_business_management',
  );
  $terms[] = array(
    'name' => 'Scottish Enterprise Tayside',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '54a907c4-f0f2-409c-bcad-1a14435f651f',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Habitat Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '57975124-a81a-44db-af37-b6b4d2eb6674',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '40ff4f83-6abe-4f52-8d1d-a256f5ffbbac',
      1 => '40ff4f83-6abe-4f52-8d1d-a256f5ffbbac',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5832fae3-b945-4552-a551-f54973f9b012',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '40ff4f83-6abe-4f52-8d1d-a256f5ffbbac',
      1 => '40ff4f83-6abe-4f52-8d1d-a256f5ffbbac',
    ),
  );
  $terms[] = array(
    'name' => 'Scottish Land tenure',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '58a49a78-30ca-4785-972b-b812786f099b',
    'vocabulary_machine_name' => 'fbaass_business_management',
  );
  $terms[] = array(
    'name' => 'Beef',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '63a6734a-e369-4e99-9ab1-27495f3b1ef4',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
      1 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
    ),
  );
  $terms[] = array(
    'name' => 'Grass and forage crops',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '64072d9b-46da-4764-a949-8974434d386b',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
      1 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
    ),
  );
  $terms[] = array(
    'name' => 'Waste management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '652a748f-11c5-49f1-b9d4-d67edd3f7cae',
    'vocabulary_machine_name' => 'fbaass_land_management',
  );
  $terms[] = array(
    'name' => 'Fishing',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '67e8ee2d-6bad-4fde-a672-0a4481be30da',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'bfb59beb-67fd-416f-812b-75c0ffeaed74',
      1 => 'bfb59beb-67fd-416f-812b-75c0ffeaed74',
    ),
  );
  $terms[] = array(
    'name' => 'Managing water bodies',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '737cf6f5-22bc-4ede-b2f2-92ffc186ee4f',
    'vocabulary_machine_name' => 'fbaass_environmental_management_',
  );
  $terms[] = array(
    'name' => 'Business Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
  );
  $terms[] = array(
    'name' => 'Retailing of processed agricultural produce',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7f1eb8ed-a29a-49d0-9872-10b988e99cce',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
      1 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
    ),
  );
  $terms[] = array(
    'name' => 'Lanarkshire Development Agency',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '83d9afb5-8143-41c6-810e-2f69a019e31e',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Taxation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '86540288-5309-4244-ae66-48bf09816f76',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
      1 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
    ),
  );
  $terms[] = array(
    'name' => 'Alternative agricultural production',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8659e5b6-51b1-415d-8db3-2e0d3468acd3',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
      1 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '87688b3a-fd44-40c1-8be2-761a78efc507',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
      1 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
    ),
  );
  $terms[] = array(
    'name' => 'Marketing',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '877e83ac-b2b0-490e-ab5d-0d41040d699c',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
      1 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
    ),
  );
  $terms[] = array(
    'name' => 'Orkney Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8a409dd8-cb13-4488-837f-f1ee478119fb',
    'vocabulary_machine_name' => 'fbaass_highlands_islands_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Managing Water Bodies',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8c501996-d9c6-49aa-9d08-c809ed983b57',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '40ff4f83-6abe-4f52-8d1d-a256f5ffbbac',
      1 => '40ff4f83-6abe-4f52-8d1d-a256f5ffbbac',
    ),
  );
  $terms[] = array(
    'name' => 'Combinable Crops',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8f3126ec-a044-4887-a6f3-58b9348bd02b',
    'vocabulary_machine_name' => 'fbaass_agricultural_cropping',
  );
  $terms[] = array(
    'name' => 'Staff Development',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '915c132e-f452-41e4-ae6d-7d0b947db9a1',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
      1 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
    ),
  );
  $terms[] = array(
    'name' => 'Shooting',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '91b7db0a-e0df-4a68-b898-ba77c41e18bc',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'bfb59beb-67fd-416f-812b-75c0ffeaed74',
      1 => 'bfb59beb-67fd-416f-812b-75c0ffeaed74',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '93a048a8-b074-40c4-9c89-ddff8358fa62',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
      1 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
    ),
  );
  $terms[] = array(
    'name' => 'Inverness & Nairn Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '954422f8-b2d1-4e3b-9c79-41494ae708e7',
    'vocabulary_machine_name' => 'fbaass_highlands_islands_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Forth Valley Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '95b0aa54-975b-4688-9744-657188660a3f',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Woodland Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '97a866f0-1646-41dd-90b4-3927816558f5',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '13898145-c1c0-4903-ac9a-11b5433d3fdf',
      1 => '13898145-c1c0-4903-ac9a-11b5433d3fdf',
    ),
  );
  $terms[] = array(
    'name' => 'Habitat management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '98505466-0bb5-4e42-a35a-fc5a22ab8248',
    'vocabulary_machine_name' => 'fbaass_environmental_management_',
  );
  $terms[] = array(
    'name' => 'Tourist Facilities',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '99384205-9b7a-4cd2-97e8-dfda5cdec04d',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
      1 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
    ),
  );
  $terms[] = array(
    'name' => 'Rural Services',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '99580071-230c-4b08-8bbc-6df22d14f517',
    'vocabulary_machine_name' => 'fbaass_diversification',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9a49a61c-6eb8-4079-aaed-34073e168dd5',
    'vocabulary_machine_name' => 'fbaass_forestry_and_arboriculture',
  );
  $terms[] = array(
    'name' => 'Renfrewshire Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9ab7d785-8c75-4176-a55d-11d444a7946b',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Environmental Impact Assessments',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9aba1764-02dc-457a-b206-419cb8c11196',
    'vocabulary_machine_name' => 'fbaass_environmental_management_',
  );
  $terms[] = array(
    'name' => 'Poultry',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9adcd091-c428-47f8-8072-01a7d44a969b',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
      1 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
    ),
  );
  $terms[] = array(
    'name' => 'Alternative crops',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a0c9c970-43ca-4a4b-b76c-5764108b3313',
    'vocabulary_machine_name' => 'fbaass_agricultural_cropping',
  );
  $terms[] = array(
    'name' => 'Nutrition',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a361beb2-fc2f-4c90-b104-06c46df986f3',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
      1 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a394ef3d-d703-4f28-99de-eca5b224d03a',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'bfb59beb-67fd-416f-812b-75c0ffeaed74',
      1 => 'bfb59beb-67fd-416f-812b-75c0ffeaed74',
    ),
  );
  $terms[] = array(
    'name' => 'Nutrition',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a3f2beca-ab78-4778-bfd4-fba7ae966483',
    'vocabulary_machine_name' => 'fbaass_agriculture',
  );
  $terms[] = array(
    'name' => 'Ross & Cromarty Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a43daeb5-db8b-46ce-a96d-aae9e6fbbd0e',
    'vocabulary_machine_name' => 'fbaass_highlands_islands_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Root crops',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a6381ae7-6cc3-4929-a2b2-e3caf1ace076',
    'vocabulary_machine_name' => 'fbaass_agricultural_cropping',
  );
  $terms[] = array(
    'name' => 'Dunbartonshire Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a88a6fd5-ffe7-4877-9527-00c7eb15ce1d',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Environmental Impact Assessments',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'aa861e2e-2a59-4040-846b-e8d3727c7661',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '40ff4f83-6abe-4f52-8d1d-a256f5ffbbac',
      1 => '40ff4f83-6abe-4f52-8d1d-a256f5ffbbac',
    ),
  );
  $terms[] = array(
    'name' => 'Grouse Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ab9dc5e9-0dbc-4ca3-bb9e-b15d76aeb1d4',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'bfb59beb-67fd-416f-812b-75c0ffeaed74',
      1 => 'bfb59beb-67fd-416f-812b-75c0ffeaed74',
    ),
  );
  $terms[] = array(
    'name' => 'Dairy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ae691c7d-d9ac-43a4-a8a6-a0b749a10597',
    'vocabulary_machine_name' => 'fbaass_agriculture',
  );
  $terms[] = array(
    'name' => 'Nitrate Vulnerable Zones',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'aed84620-c31d-406b-90b0-a9d0dba81f12',
    'vocabulary_machine_name' => 'fbaass_land_management',
  );
  $terms[] = array(
    'name' => 'Timber Production',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b0cd4321-dca4-4db5-87aa-14a16c288077',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '13898145-c1c0-4903-ac9a-11b5433d3fdf',
      1 => '13898145-c1c0-4903-ac9a-11b5433d3fdf',
    ),
  );
  $terms[] = array(
    'name' => 'Fruit',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b179ceb3-ffbc-4d9d-8b2e-9888fc7069af',
    'vocabulary_machine_name' => 'fbaass_agricultural_cropping',
  );
  $terms[] = array(
    'name' => 'Fruit',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b1bf7c80-c4cf-44cc-a91a-9690957a9093',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
      1 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b3a33a1f-46f8-48c0-bdeb-978fe6ca0963',
    'vocabulary_machine_name' => 'fbaass_diversification',
  );
  $terms[] = array(
    'name' => 'Glasgow Development Agency',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b3ac4daa-c1c0-4429-b7e8-b9c581c5b876',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Moray, Badenoch & Strathspey Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b8a4c6e3-b459-453c-8454-2905db583c05',
    'vocabulary_machine_name' => 'fbaass_highlands_islands_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Agricultural Cropping',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
  );
  $terms[] = array(
    'name' => 'Organic Farming',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bc2eaedc-77cc-4eb6-a403-fd491344ca2a',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
      1 => '476811d7-b5a4-4e76-ac8e-937d952b542d',
    ),
  );
  $terms[] = array(
    'name' => 'Game Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bfb59beb-67fd-416f-812b-75c0ffeaed74',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c56c70a5-1007-44b7-9cf4-39ff9b37162e',
    'vocabulary_machine_name' => 'fbaass_game_management',
  );
  $terms[] = array(
    'name' => 'Organic Farming',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ca87f046-78fc-427b-ac6c-c472b59c6fe5',
    'vocabulary_machine_name' => 'fbaass_agriculture',
  );
  $terms[] = array(
    'name' => 'Poultry',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd479557d-f437-4d1b-b368-a908343fc28f',
    'vocabulary_machine_name' => 'fbaass_agriculture',
  );
  $terms[] = array(
    'name' => 'Production horticulture',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd6bf00c9-74bc-4372-95ba-e4f8e5cddbcb',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
      1 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
    ),
  );
  $terms[] = array(
    'name' => 'Scottish Borders Enterprise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd8528756-0921-4abd-b45f-9d66b886789c',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Fishing',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'df1151db-3951-4fdf-b3dd-6e3b39a268a7',
    'vocabulary_machine_name' => 'fbaass_game_management',
  );
  $terms[] = array(
    'name' => 'Enterprise Ayrshire',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e1499d1c-8908-40be-8866-6e0004e81495',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Retailing of Processed Agricultural Produce',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e309507b-83ab-4d29-a747-1745980c446d',
    'vocabulary_machine_name' => 'fbaass_diversification',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e31264ee-48e1-4f3b-a0cd-dfea85cd0dcc',
    'vocabulary_machine_name' => 'fbaass_environmental_management_',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e7274431-770e-4b63-bef2-d153923b87f9',
    'vocabulary_machine_name' => 'fbaass_agriculture',
  );
  $terms[] = array(
    'name' => 'Chemical applications',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e8d524be-0203-4486-a8c6-b0cba442baca',
    'vocabulary_machine_name' => 'fbaass_land_management',
  );
  $terms[] = array(
    'name' => 'Rural Services',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'eb7f54fd-b169-4c78-94c9-d85255ae6a81',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
      1 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
    ),
  );
  $terms[] = array(
    'name' => 'Marketing',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ec1ce04a-7858-4dcd-861b-a7de513f3e0e',
    'vocabulary_machine_name' => 'fbaass_business_management',
  );
  $terms[] = array(
    'name' => 'Deer Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ee9bef70-f5ec-4c2f-b8d3-300d676dd549',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'bfb59beb-67fd-416f-812b-75c0ffeaed74',
      1 => 'bfb59beb-67fd-416f-812b-75c0ffeaed74',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ef0fe5fa-57e3-4f93-abad-76042310208c',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
      1 => 'ba7206ec-d6dc-4013-a5bc-9e5e2e0168fa',
    ),
  );
  $terms[] = array(
    'name' => 'Advisory Skills',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f107ffe9-7ac8-44e4-8ffb-0b7af75de207',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
      1 => '7ee88999-9e2d-4344-af5c-bb4def1a03db',
    ),
  );
  $terms[] = array(
    'name' => 'Leisure, Recreation and Sporting Facilities',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f2b88fa9-e39e-4e60-b723-e4743cefc66c',
    'vocabulary_machine_name' => 'fbaass_diversification',
  );
  $terms[] = array(
    'name' => 'Grass and forage Crops',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f382af95-4357-4b2b-a7da-41a2cf4d0d30',
    'vocabulary_machine_name' => 'fbaass_agricultural_cropping',
  );
  $terms[] = array(
    'name' => 'Woodland management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f3a41809-18bd-436e-84d1-23ae79e1389c',
    'vocabulary_machine_name' => 'fbaass_forestry_and_arboriculture',
  );
  $terms[] = array(
    'name' => 'Tourist Facilities',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f463eaff-108a-4e6c-bfa2-28db17d81b44',
    'vocabulary_machine_name' => 'fbaass_diversification',
  );
  $terms[] = array(
    'name' => 'Dumfries & Galloway Enterprise Company',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f4fba8ad-627f-429c-9a10-277f64502529',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Fife Enterprise Ltd',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f5d6b07b-39c2-46bc-ba8e-8f47ca2dafa4',
    'vocabulary_machine_name' => 'fbaass_scottish_enterprise_area',
  );
  $terms[] = array(
    'name' => 'Grouse management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f86f17c2-662a-47b5-8482-15ec9738ae94',
    'vocabulary_machine_name' => 'fbaass_game_management',
  );
  $terms[] = array(
    'name' => 'Residential letting/Tourist Accommodation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f909088b-3a2c-4cf4-948f-9981743cdc8f',
    'vocabulary_machine_name' => 'fbaass_diversification',
  );
  $terms[] = array(
    'name' => 'Leisure, recreation and sporting facilities',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f9eb86a1-3fcb-4dcc-ba1c-bd7aa443241e',
    'vocabulary_machine_name' => 'fbaass_areas_of_expertise',
    'parent' => array(
      0 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
      1 => '22e9e730-e461-46e3-b700-4ac5fcf81a05',
    ),
  );
  $terms[] = array(
    'name' => 'Pigs',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fd7ce335-9ba8-41ba-b2d5-01657bf72bf5',
    'vocabulary_machine_name' => 'fbaass_agriculture',
  );
  return $terms;
}
