<?php
/**
 * @file
 * fbaass_form_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function fbaass_form_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|fbaass|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'fbaass';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_forenames' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'fbaass-name',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'fbaass-name',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|fbaass|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function fbaass_form_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|fbaass|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'fbaass';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title',
        1 => 'field_forenames',
        2 => 'field_surname',
        3 => 'field_business_name',
        4 => 'field_primary_contact_address',
        5 => 'field_postcode',
        6 => 'field_telephone',
        7 => 'field_fbasss_mobile',
        8 => 'field_fax_number',
        9 => 'field_email',
        10 => 'field_indemnity_insurance',
        11 => 'field_insurance_expiry_date',
        12 => 'field_fbaass_qualifications',
        13 => 'field_fbaass_memberships',
        14 => 'field_responsibilitiess',
        15 => 'field_business_advice',
        16 => 'field_agricultural_sector',
        17 => 'field_business_advisory',
        18 => 'field_agricultural_experience',
        19 => 'field_biography',
        20 => 'field_business_management',
        21 => 'field_diversification',
        22 => 'field_agriculture',
        23 => 'field_agricultural_cropping',
        24 => 'field_land_management',
        25 => 'field_game_management',
        26 => 'field_forestry_and_arboriculture',
        27 => 'field_scottish_enterprise_area',
        28 => 'field_highlands_islands',
        29 => 'field_referees',
        30 => 'field_invoicing_details',
        31 => 'field_requisition_number',
        32 => 'field_signature',
        33 => 'field_date',
        34 => 'field_print_name',
        35 => 'field_environmental_management',
        36 => 'field_region',
        37 => 'field_area_of_expertise',
      ),
    ),
    'fields' => array(
      'field_title' => 'ds_content',
      'field_forenames' => 'ds_content',
      'field_surname' => 'ds_content',
      'field_business_name' => 'ds_content',
      'field_primary_contact_address' => 'ds_content',
      'field_postcode' => 'ds_content',
      'field_telephone' => 'ds_content',
      'field_fbasss_mobile' => 'ds_content',
      'field_fax_number' => 'ds_content',
      'field_email' => 'ds_content',
      'field_indemnity_insurance' => 'ds_content',
      'field_insurance_expiry_date' => 'ds_content',
      'field_fbaass_qualifications' => 'ds_content',
      'field_fbaass_memberships' => 'ds_content',
      'field_responsibilitiess' => 'ds_content',
      'field_business_advice' => 'ds_content',
      'field_agricultural_sector' => 'ds_content',
      'field_business_advisory' => 'ds_content',
      'field_agricultural_experience' => 'ds_content',
      'field_biography' => 'ds_content',
      'field_business_management' => 'ds_content',
      'field_diversification' => 'ds_content',
      'field_agriculture' => 'ds_content',
      'field_agricultural_cropping' => 'ds_content',
      'field_land_management' => 'ds_content',
      'field_game_management' => 'ds_content',
      'field_forestry_and_arboriculture' => 'ds_content',
      'field_scottish_enterprise_area' => 'ds_content',
      'field_highlands_islands' => 'ds_content',
      'field_referees' => 'ds_content',
      'field_invoicing_details' => 'ds_content',
      'field_requisition_number' => 'ds_content',
      'field_signature' => 'ds_content',
      'field_date' => 'ds_content',
      'field_print_name' => 'ds_content',
      'field_environmental_management' => 'ds_content',
      'field_region' => 'ds_content',
      'field_area_of_expertise' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|fbaass|default'] = $ds_layout;

  return $export;
}
