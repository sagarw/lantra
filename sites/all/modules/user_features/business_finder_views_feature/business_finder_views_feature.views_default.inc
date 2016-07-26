<?php
/**
 * @file
 * business_finder_views_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function business_finder_views_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'business_finder';
  $view->description = '';
  $view->tag = 'Business Finder';
  $view->base_table = 'search_api_index_business_profiles';
  $view->human_name = 'Business Finder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Business Finder';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo_locator';
  $handler->display->display_options['style_options']['popup_source'] = 'nothing';
  $handler->display->display_options['style_options']['geofield_map_height'] = '500px';
  $handler->display->display_options['style_options']['geofield_map_zoom'] = '10';
  $handler->display->display_options['style_options']['geofield_map_min_zoom'] = '0';
  $handler->display->display_options['style_options']['geofield_map_max_zoom'] = '0';
  $handler->display->display_options['style_options']['geofield_map_scrollwheel'] = 1;
  $handler->display->display_options['style_options']['geofield_map_draggable'] = 1;
  $handler->display->display_options['style_options']['geofield_map_center'] = array(
    'lat' => '',
    'lon' => '',
    'geocode' => 'Find my location',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found matching this criteria, try broadening your search.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Indexed Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['link_to_entity'] = 1;
  /* Field: Indexed Profile: Business name */
  $handler->display->display_options['fields']['field_business_name']['id'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_business_name']['field'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['label'] = '';
  $handler->display->display_options['fields']['field_business_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_business_name']['alter']['path'] = 'business-details/[pid]';
  $handler->display->display_options['fields']['field_business_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_business_name']['element_class'] = 'business-name';
  $handler->display->display_options['fields']['field_business_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_business_name']['element_default_classes'] = FALSE;
  /* Field: Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Address: Postal code (indexed) */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_postal_code']['link_to_entity'] = 0;
  /* Field: Indexed Profile: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Indexed Profile: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  /* Field: Indexed Profile: Business Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  /* Field: Indexed Profile: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Profile: Summary / introduction */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['alter']['max_length'] = '255';
  $handler->display->display_options['fields']['field_summary']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['field_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_summary']['element_class'] = 'business-summary';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['settings'] = array(
    'trim_length' => '255',
  );
  /* Field: Indexed Profile: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_logo']['element_class'] = 'business-logo';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Indexed Profile: Business Geo Locator */
  $handler->display->display_options['fields']['field_geo_locator']['id'] = 'field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_geo_locator']['field'] = 'field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_locator']['settings'] = array(
    'data' => 'full',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for businesses...';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_geo_locator_geom']['id'] = 'field_geo_locator_geom';
  $handler->display->display_options['filters']['field_geo_locator_geom']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['filters']['field_geo_locator_geom']['field'] = 'field_geo_locator_geom';
  $handler->display->display_options['filters']['field_geo_locator_geom']['operator'] = '>=';
  $handler->display->display_options['filters']['field_geo_locator_geom']['value'] = '0';

  /* Display: Business finder list */
  $handler = $view->new_display('page', 'Business finder list', 'business_finder');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 30, 40, 50';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'results-row business-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['regions'] = array(
    'uid' => 'left',
    'pid' => 'left',
    'field_business_name' => 'left',
    'field_address_thoroughfare' => 'left',
    'field_address_locality' => 'left',
    'field_address_administrative_area' => 'left',
    'field_address_postal_code' => 'left',
    'field_email' => 'left',
    'field_telephone' => 'left',
    'field_website' => 'left',
    'field_address' => 'left',
    'field_summary' => 'right',
    'field_dev_premium_switch' => 'left',
    'field_logo' => 'right',
    'views_conditional' => 'right',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Profile: User */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'entity_user';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'user';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_entity'] = 1;
  /* Field: Indexed Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['link_to_entity'] = 1;
  /* Field: User: Premium account */
  $handler->display->display_options['fields']['field_premium_account']['id'] = 'field_premium_account';
  $handler->display->display_options['fields']['field_premium_account']['table'] = 'entity_user';
  $handler->display->display_options['fields']['field_premium_account']['field'] = 'field_premium_account';
  $handler->display->display_options['fields']['field_premium_account']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_premium_account']['exclude'] = TRUE;
  /* Field: Indexed Profile: Business name */
  $handler->display->display_options['fields']['field_business_name']['id'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_business_name']['field'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['label'] = '';
  $handler->display->display_options['fields']['field_business_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_business_name']['alter']['path'] = 'business-details/[pid]';
  $handler->display->display_options['fields']['field_business_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_business_name']['element_class'] = 'business-name';
  $handler->display->display_options['fields']['field_business_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_business_name']['element_default_classes'] = FALSE;
  /* Field: Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_locality']['link_to_entity'] = 0;
  /* Field: Address: Administrative area (i.e. State / Province) (indexed) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['link_to_entity'] = 0;
  /* Field: Address: Postal code (indexed) */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_postal_code']['link_to_entity'] = 0;
  /* Field: Indexed Profile: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Indexed Profile: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  /* Field: Indexed Profile: Business Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  /* Field: Indexed Profile: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Profile: Summary / introduction */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['alter']['max_length'] = '255';
  $handler->display->display_options['fields']['field_summary']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['field_summary']['alter']['more_link_path'] = 'business-details/[pid]';
  $handler->display->display_options['fields']['field_summary']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_summary']['element_class'] = 'business-summary';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['settings'] = array(
    'trim_length' => '255',
  );
  /* Field: Indexed Profile: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_logo']['element_class'] = 'business-logo';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_type'] = 'div';
  $handler->display->display_options['fields']['views_conditional']['element_class'] = 'business-logo';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['views_conditional']['element_wrapper_class'] = 'views-field-field-logo';
  $handler->display->display_options['fields']['views_conditional']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_premium_account';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_logo]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for businesses...';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Indexed Profile: Whether the entity is flagged with flag business_moderation */
  $handler->display->display_options['filters']['flag_business_moderation']['id'] = 'flag_business_moderation';
  $handler->display->display_options['filters']['flag_business_moderation']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['filters']['flag_business_moderation']['field'] = 'flag_business_moderation';
  $handler->display->display_options['filters']['flag_business_moderation']['value'] = '1';
  $handler->display->display_options['mefibs'] = array(
    'blocks' => NULL,
    'extras' => array(
      'sort' => -1,
      'items_per_page' => -1,
    ),
    'page' => array(
      'secondary_form_block' => array(
        0 => 'default',
      ),
    ),
    'business_finder' => array(
      'secondary_form_block' => array(),
    ),
  );
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'business-finder';

  /* Display: Business finder map */
  $handler = $view->new_display('page', 'Business finder map', 'business_finder_map');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['link_to_entity'] = 1;
  /* Field: Indexed Profile: Business name */
  $handler->display->display_options['fields']['field_business_name']['id'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_business_name']['field'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['label'] = '';
  $handler->display->display_options['fields']['field_business_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_business_name']['alter']['path'] = 'business-details/[pid]';
  $handler->display->display_options['fields']['field_business_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_business_name']['element_class'] = 'business-name';
  $handler->display->display_options['fields']['field_business_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_business_name']['element_default_classes'] = FALSE;
  /* Field: Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_locality']['link_to_entity'] = 0;
  /* Field: Address: Administrative area (i.e. State / Province) (indexed) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['link_to_entity'] = 0;
  /* Field: Address: Postal code (indexed) */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_postal_code']['link_to_entity'] = 0;
  /* Field: Indexed Profile: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Indexed Profile: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  /* Field: Indexed Profile: Business Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  /* Field: Indexed Profile: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Profile: Summary / introduction */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['max_length'] = '255';
  $handler->display->display_options['fields']['field_summary']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['field_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_summary']['element_class'] = 'business-summary';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['settings'] = array(
    'trim_length' => '255',
  );
  /* Field: Indexed Profile: Business Geo Locator */
  $handler->display->display_options['fields']['field_geo_locator']['id'] = 'field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['field_geo_locator']['field'] = 'field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['label'] = '';
  $handler->display->display_options['fields']['field_geo_locator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo_locator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_geo_locator']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_locator']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="business-map-address">
[field_business_name]</br>
<p>[field_address_thoroughfare]</p>
<p>[field_address_locality]</p>
<p>[field_address_administrative_area]</p>
<p>[field_address_postal_code]</p>
</div>';
  $handler->display->display_options['mefibs'] = array(
    'blocks' => NULL,
    'extras' => array(
      'sort' => -1,
      'items_per_page' => -1,
    ),
    'page' => array(
      'secondary_form_block' => array(
        0 => 'default',
      ),
    ),
  );
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'business-finder-map';

  /* Display: Business finder tabs */
  $handler = $view->new_display('block', 'Business finder tabs', 'business_finder_tabs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Business Finder tabs';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['link_to_entity'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="provider-tab active"><a href="/business-finder">List</a></div>
<div class="provider-tab"><a href="/business-finder-map">Map</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['qtip_instance'] = '';

  /* Display: Business finder map tabs */
  $handler = $view->new_display('block', 'Business finder map tabs', 'business_finder_map_tabs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Business finder map tabs';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'search_api_index_business_profiles';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['link_to_entity'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="provider-tab"><a href="/business-finder">List</a></div>
<div class="provider-tab active"><a href="/business-finder-map">Map</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['qtip_instance'] = '';
  $translatables['business_finder'] = array(
    t('Master'),
    t('Business Finder'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No results found matching this criteria, try broadening your search.'),
    t('Profile ID'),
    t('.'),
    t(','),
    t('Address'),
    t('Business Geo Locator'),
    t('Search for businesses...'),
    t('Business finder list'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('User'),
    t('User ID'),
    t('Premium account'),
    t('Business finder map'),
    t('Custom text'),
    t('<div class="business-map-address">
[field_business_name]</br>
<p>[field_address_thoroughfare]</p>
<p>[field_address_locality]</p>
<p>[field_address_administrative_area]</p>
<p>[field_address_postal_code]</p>
</div>'),
    t('Business finder tabs'),
    t('Business Finder tabs'),
    t('<div class="provider-tab active"><a href="/business-finder">List</a></div>
<div class="provider-tab"><a href="/business-finder-map">Map</a></div>'),
    t('Business finder map tabs'),
    t('<div class="provider-tab"><a href="/business-finder">List</a></div>
<div class="provider-tab active"><a href="/business-finder-map">Map</a></div>'),
  );
  $export['business_finder'] = $view;

  return $export;
}
