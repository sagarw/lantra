<?php
/**
 * @file
 * fbaass_form_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fbaass_form_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_areas_of_expertise|node|fbaass|default';
  $field_group->group_name = 'group_areas_of_expertise';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 6: Areas of Expertise',
    'weight' => '47',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_areas_of_expertise|node|fbaass|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_areas_of_expertise|node|fbaass|form';
  $field_group->group_name = 'group_areas_of_expertise';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 6: Areas of Expertise',
    'weight' => '6',
    'children' => array(
      0 => 'field_agricultural_cropping',
      1 => 'field_agriculture',
      2 => 'field_business_management',
      3 => 'field_diversification',
      4 => 'field_environmental_management',
      5 => 'field_forestry_and_arboriculture',
      6 => 'field_game_management',
      7 => 'field_land_management',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section 6: Areas of Expertise',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-areas-of-expertise field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_areas_of_expertise|node|fbaass|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|fbaass|default';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 1: Contact Details',
    'weight' => '42',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_contact_details|node|fbaass|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|fbaass|form';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 1: Contact Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_business_name',
      1 => 'field_email',
      2 => 'field_fax_number',
      3 => 'field_fbasss_mobile',
      4 => 'field_forenames',
      5 => 'field_indemnity_insurance',
      6 => 'field_insurance_expiry_date',
      7 => 'field_postcode',
      8 => 'field_primary_contact_address',
      9 => 'field_surname',
      10 => 'field_telephone',
      11 => 'field_title',
      12 => 'field_fbaass_county',
      13 => 'field_address',
      14 => 'field_geo_locator',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section 1: Contact Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact_details|node|fbaass|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_current_job|node|fbaass|default';
  $field_group->group_name = 'group_current_job';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 3: Current job role',
    'weight' => '44',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_current_job|node|fbaass|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_current_job|node|fbaass|form';
  $field_group->group_name = 'group_current_job';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 3: Current job role',
    'weight' => '3',
    'children' => array(
      0 => 'field_responsibilitiess',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section 3: Current job role',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-current-job field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_current_job|node|fbaass|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_declaration|node|fbaass|default';
  $field_group->group_name = 'group_declaration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 10: Declaration',
    'weight' => '51',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_declaration|node|fbaass|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_declaration|node|fbaass|form';
  $field_group->group_name = 'group_declaration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 10: Declaration',
    'weight' => '10',
    'children' => array(
      0 => 'field_date',
      1 => 'field_print_name',
      2 => 'field_signature',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section 10: Declaration',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-declaration field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_declaration|node|fbaass|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invoicing|node|fbaass|default';
  $field_group->group_name = 'group_invoicing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 9: Invoicing',
    'weight' => '50',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_invoicing|node|fbaass|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invoicing|node|fbaass|form';
  $field_group->group_name = 'group_invoicing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 9: Invoicing',
    'weight' => '9',
    'children' => array(
      0 => 'field_invoicing_details',
      1 => 'field_requisition_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section 9: Invoicing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-invoicing field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_invoicing|node|fbaass|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_enterprise|node|fbaass|default';
  $field_group->group_name = 'group_local_enterprise';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 7: Local Enterprise Company Areas',
    'weight' => '48',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_local_enterprise|node|fbaass|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_enterprise|node|fbaass|form';
  $field_group->group_name = 'group_local_enterprise';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 7: Local Enterprise Company Areas',
    'weight' => '7',
    'children' => array(
      0 => 'field_highlands_islands',
      1 => 'field_scottish_enterprise_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section 7: Local Enterprise Company Areas',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-local-enterprise field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_local_enterprise|node|fbaass|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional_biography|node|fbaass|default';
  $field_group->group_name = 'group_professional_biography';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 5: Professional Biography',
    'weight' => '46',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_professional_biography|node|fbaass|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional_biography|node|fbaass|form';
  $field_group->group_name = 'group_professional_biography';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 5: Professional Biography',
    'weight' => '5',
    'children' => array(
      0 => 'field_biography',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section 5: Professional Biography',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-professional-biography field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_professional_biography|node|fbaass|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qualifications|node|fbaass|default';
  $field_group->group_name = 'group_qualifications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 2: Qualifications / Professional Membership',
    'weight' => '43',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_qualifications|node|fbaass|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qualifications|node|fbaass|form';
  $field_group->group_name = 'group_qualifications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 2: Qualifications / Professional Membership',
    'weight' => '2',
    'children' => array(
      0 => 'field_fbaass_memberships',
      1 => 'field_fbaass_qualifications',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section 2: Qualifications / Professional Membership',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-qualifications field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_qualifications|node|fbaass|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_referees|node|fbaass|default';
  $field_group->group_name = 'group_referees';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 8: Referees',
    'weight' => '49',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_referees|node|fbaass|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_referees|node|fbaass|form';
  $field_group->group_name = 'group_referees';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 8: Referees',
    'weight' => '8',
    'children' => array(
      0 => 'field_referees',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section 8: Referees',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-referees field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_referees|node|fbaass|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relevant_experience|node|fbaass|default';
  $field_group->group_name = 'group_relevant_experience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 4: Relevant Experience',
    'weight' => '45',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_relevant_experience|node|fbaass|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relevant_experience|node|fbaass|form';
  $field_group->group_name = 'group_relevant_experience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 4: Relevant Experience',
    'weight' => '4',
    'children' => array(
      0 => 'field_agricultural_experience',
      1 => 'field_agricultural_sector',
      2 => 'field_business_advice',
      3 => 'field_business_advisory',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section 4: Relevant Experience',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-relevant-experience field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_relevant_experience|node|fbaass|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supplemental|node|fbaass|default';
  $field_group->group_name = 'group_supplemental';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 11: Supplemental',
    'weight' => '52',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_supplemental|node|fbaass|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supplemental|node|fbaass|form';
  $field_group->group_name = 'group_supplemental';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fbaass';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section 11: Supplemental',
    'weight' => '12',
    'children' => array(
      0 => 'field_area_of_expertise',
      1 => 'field_region',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section 11: Supplemental',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-supplemental field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_supplemental|node|fbaass|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section 10: Declaration');
  t('Section 11: Supplemental');
  t('Section 1: Contact Details');
  t('Section 2: Qualifications / Professional Membership');
  t('Section 3: Current job role');
  t('Section 4: Relevant Experience');
  t('Section 5: Professional Biography');
  t('Section 6: Areas of Expertise');
  t('Section 7: Local Enterprise Company Areas');
  t('Section 8: Referees');
  t('Section 9: Invoicing');

  return $field_groups;
}
