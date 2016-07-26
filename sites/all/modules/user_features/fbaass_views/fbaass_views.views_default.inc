<?php
/**
 * @file
 * fbaass_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fbaass_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fbaass_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FBAASS Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FBAASS Views';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title / Salutation */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = 'Title';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Content: Forenames */
  $handler->display->display_options['fields']['field_forenames']['id'] = 'field_forenames';
  $handler->display->display_options['fields']['field_forenames']['table'] = 'field_data_field_forenames';
  $handler->display->display_options['fields']['field_forenames']['field'] = 'field_forenames';
  $handler->display->display_options['fields']['field_forenames']['element_label_colon'] = FALSE;
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_surname']['id'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['table'] = 'field_data_field_surname';
  $handler->display->display_options['fields']['field_surname']['field'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['element_label_colon'] = FALSE;
  /* Field: Field: Business name */
  $handler->display->display_options['fields']['field_business_name']['id'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['table'] = 'field_data_field_business_name';
  $handler->display->display_options['fields']['field_business_name']['field'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['element_label_colon'] = FALSE;
  /* Field: Content: Primary contact address */
  $handler->display->display_options['fields']['field_primary_contact_address']['id'] = 'field_primary_contact_address';
  $handler->display->display_options['fields']['field_primary_contact_address']['table'] = 'field_data_field_primary_contact_address';
  $handler->display->display_options['fields']['field_primary_contact_address']['field'] = 'field_primary_contact_address';
  $handler->display->display_options['fields']['field_primary_contact_address']['label'] = '';
  $handler->display->display_options['fields']['field_primary_contact_address']['element_label_colon'] = FALSE;
  /* Field: Field: Postcode */
  $handler->display->display_options['fields']['field_postcode']['id'] = 'field_postcode';
  $handler->display->display_options['fields']['field_postcode']['table'] = 'field_data_field_postcode';
  $handler->display->display_options['fields']['field_postcode']['field'] = 'field_postcode';
  $handler->display->display_options['fields']['field_postcode']['element_label_colon'] = FALSE;
  /* Field: Field: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  /* Field: Content: Mobile */
  $handler->display->display_options['fields']['field_fbasss_mobile']['id'] = 'field_fbasss_mobile';
  $handler->display->display_options['fields']['field_fbasss_mobile']['table'] = 'field_data_field_fbasss_mobile';
  $handler->display->display_options['fields']['field_fbasss_mobile']['field'] = 'field_fbasss_mobile';
  $handler->display->display_options['fields']['field_fbasss_mobile']['element_label_colon'] = FALSE;
  /* Field: Field: Fax number */
  $handler->display->display_options['fields']['field_fax_number']['id'] = 'field_fax_number';
  $handler->display->display_options['fields']['field_fax_number']['table'] = 'field_data_field_fax_number';
  $handler->display->display_options['fields']['field_fax_number']['field'] = 'field_fax_number';
  $handler->display->display_options['fields']['field_fax_number']['label'] = 'Fax';
  $handler->display->display_options['fields']['field_fax_number']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Advisor Contact Details */
  $handler = $view->new_display('block', 'Advisor Contact Details', 'advisor_contact_details');
  $translatables['fbaass_views'] = array(
    t('Master'),
    t('FBAASS Views'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Forenames'),
    t('Surname'),
    t('Business name'),
    t('Postcode'),
    t('Telephone'),
    t('Mobile'),
    t('Fax'),
    t('All'),
    t('Advisor Contact Details'),
  );
  $export['fbaass_views'] = $view;

  return $export;
}
