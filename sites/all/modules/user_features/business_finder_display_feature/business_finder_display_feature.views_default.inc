<?php
/**
 * @file
 * business_finder_display_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function business_finder_display_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'business_finder_business_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Business Finder Business Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '[field_business_name]';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'business-row';
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['layout'] = 'twocol_stacked';
  $handler->display->display_options['row_options']['regions'] = array(
    'field_dev_premium_switch' => 'top',
    'user' => 'top',
    'pid' => 'top',
    'field_business_name' => 'top',
    'field_summary' => 'top',
    'field_description' => 'top',
    'field_business_classification' => 'left',
    'field_geo_locator' => 'left',
    'view' => 'left',
    'view_1' => 'left',
    'field_no_of_employees' => 'left',
    'views_conditional' => 'left',
    'field_logo' => 'left',
    'field_contact_name' => 'left',
    'field_job_title' => 'left',
    'field_address' => 'left',
    'field_website' => 'left',
    'field_email' => 'left',
    'field_telephone' => 'left',
    'field_facebook' => 'left',
    'field_twitter' => 'left',
    'field_linkedin' => 'left',
    'nothing' => 'right',
  );
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Field: User: Premium account */
  $handler->display->display_options['fields']['field_premium_account']['id'] = 'field_premium_account';
  $handler->display->display_options['fields']['field_premium_account']['table'] = 'field_data_field_premium_account';
  $handler->display->display_options['fields']['field_premium_account']['field'] = 'field_premium_account';
  $handler->display->display_options['fields']['field_premium_account']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_premium_account']['label'] = '';
  $handler->display->display_options['fields']['field_premium_account']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_premium_account']['element_label_colon'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Field: Business name */
  $handler->display->display_options['fields']['field_business_name']['id'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['table'] = 'field_data_field_business_name';
  $handler->display->display_options['fields']['field_business_name']['field'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['exclude'] = TRUE;
  /* Field: Field: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Field: Business Classification */
  $handler->display->display_options['fields']['field_business_classification']['id'] = 'field_business_classification';
  $handler->display->display_options['fields']['field_business_classification']['table'] = 'field_data_field_business_classification';
  $handler->display->display_options['fields']['field_business_classification']['field'] = 'field_business_classification';
  $handler->display->display_options['fields']['field_business_classification']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_business_classification']['delta_offset'] = '0';
  /* Field: Field: Geo Locator */
  $handler->display->display_options['fields']['field_geo_locator']['id'] = 'field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['table'] = 'field_data_field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['field'] = 'field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['label'] = '';
  $handler->display->display_options['fields']['field_geo_locator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo_locator']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_locator']['type'] = 'geolocation_googlemaps_dynamic';
  $handler->display->display_options['fields']['field_geo_locator']['settings'] = array(
    'map_width' => '300px',
    'map_height' => '300px',
    'marker_icon' => '',
    'map_scrollwheel' => 0,
    'map_maptype' => 'roadmap',
    'map_zoomlevel' => '7',
  );
  /* Field: Field: No. of Employees */
  $handler->display->display_options['fields']['field_no_of_employees']['id'] = 'field_no_of_employees';
  $handler->display->display_options['fields']['field_no_of_employees']['table'] = 'field_data_field_no_of_employees';
  $handler->display->display_options['fields']['field_no_of_employees']['field'] = 'field_no_of_employees';
  $handler->display->display_options['fields']['field_no_of_employees']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_no_of_employees']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_no_of_employees']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_no_of_employees']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_no_of_employees']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Content';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'business_finder_subviews';
  $handler->display->display_options['fields']['view']['display'] = 'owners_content';
  $handler->display->display_options['fields']['view']['arguments'] = '[!user]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Courses';
  $handler->display->display_options['fields']['view_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_1']['view'] = 'business_finder_subviews';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_1';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!user]';
  /* Field: Left side premium fields */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Left side premium fields';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_premium_account';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional']['then'] = '<label>No. of Employees:</label> [field_no_of_employees]
[view]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Field: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Conditional logo view */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['ui_name'] = 'Conditional logo view';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_premium_account';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = '[field_logo]';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Field: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['exclude'] = TRUE;
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['exclude'] = TRUE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Business Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = 'Website';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_premium_account';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = '[field_website]';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_email']['element_class'] = 'business-email';
  /* Field: Field: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['exclude'] = TRUE;
  /* Field: Field: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['exclude'] = TRUE;
  /* Field: Field: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['exclude'] = TRUE;
  /* Field: Field: LinkedIn */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['exclude'] = TRUE;
  /* Field: Social media links */
  $handler->display->display_options['fields']['views_conditional_3']['id'] = 'views_conditional_3';
  $handler->display->display_options['fields']['views_conditional_3']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['ui_name'] = 'Social media links';
  $handler->display->display_options['fields']['views_conditional_3']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['if'] = 'field_premium_account';
  $handler->display->display_options['fields']['views_conditional_3']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_3']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional_3']['then'] = '<div class="prem-business-field">[field_facebook]</div>
<div class="prem-business-field">[field_twitter]</div>
<div class="prem-business-field">[field_linkedin]</div>';
  $handler->display->display_options['fields']['views_conditional_3']['strip_tags'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="business-prem-box">
<div class="prem-business-field">[views_conditional_1]</div>
<div class="prem-business-field">[field_contact_name]</div>
<div class="prem-business-field">[field_job_title]</div>
<div class="prem-business-field">[field_address]</div>
<div class="prem-business-field">[views_conditional_2]</div>
<div class="prem-business-field business-email">[field_email]</div>
<div class="prem-business-field">[field_telephone]</div>
[views_conditional_3]
</div>
';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'prem-box-section';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Contextual filter: Profile: Profile ID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_profile' => 'business_profile',
  );

  /* Display: Business Details */
  $handler = $view->new_display('page', 'Business Details', 'business_details');
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'business-details/%';
  $translatables['business_finder_business_details'] = array(
    t('Master'),
    t('[field_business_name]'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('User'),
    t('User uid'),
    t('.'),
    t(','),
    t('Profile ID'),
    t('Business name'),
    t('Business Classification'),
    t('No. of Employees'),
    t('Content'),
    t('Courses'),
    t('Logo'),
    t('Contact Name'),
    t('Job Title'),
    t('Address'),
    t('Website'),
    t('Email'),
    t('Telephone'),
    t('Facebook'),
    t('Twitter'),
    t('LinkedIn'),
    t('<div class="business-prem-box">
<div class="prem-business-field">[views_conditional_1]</div>
<div class="prem-business-field">[field_contact_name]</div>
<div class="prem-business-field">[field_job_title]</div>
<div class="prem-business-field">[field_address]</div>
<div class="prem-business-field">[views_conditional_2]</div>
<div class="prem-business-field business-email">[field_email]</div>
<div class="prem-business-field">[field_telephone]</div>
[views_conditional_3]
</div>
'),
    t('All'),
    t('Business Details'),
  );
  $export['business_finder_business_details'] = $view;

  return $export;
}
