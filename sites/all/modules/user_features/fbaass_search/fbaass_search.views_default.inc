<?php
/**
 * @file
 * fbaass_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fbaass_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fbaass_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_fbaass_search_index';
  $view->human_name = 'FBAASS Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FBAASS Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_title' => 'field_title',
    'field_forenames' => 'field_forenames',
    'field_surname' => 'field_surname',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Indexed Node: Title / Salutation */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Forenames */
  $handler->display->display_options['fields']['field_forenames']['id'] = 'field_forenames';
  $handler->display->display_options['fields']['field_forenames']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_forenames']['field'] = 'field_forenames';
  $handler->display->display_options['fields']['field_forenames']['label'] = '';
  $handler->display->display_options['fields']['field_forenames']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_forenames']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['field_forenames']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_forenames']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Surname */
  $handler->display->display_options['fields']['field_surname']['id'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_surname']['field'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['label'] = '';
  $handler->display->display_options['fields']['field_surname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_surname']['alter']['text'] = '[field_title] [field_forenames] [field_surname]';
  $handler->display->display_options['fields']['field_surname']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['text'] = '<h2>[field_title] [field_forenames] [field_surname]</h2>';
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['type'] = 'addressfield_linear';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Node: Postcode */
  $handler->display->display_options['fields']['field_postcode']['id'] = 'field_postcode';
  $handler->display->display_options['fields']['field_postcode']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_postcode']['field'] = 'field_postcode';
  $handler->display->display_options['fields']['field_postcode']['label'] = '';
  $handler->display->display_options['fields']['field_postcode']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: FBAASS Geo Locator */
  $handler->display->display_options['fields']['field_geo_locator']['id'] = 'field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_geo_locator']['field'] = 'field_geo_locator';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    13 => '13',
    14 => '14',
    15 => '15',
    16 => '16',
  );

  /* Display: FBAASS Search List */
  $handler = $view->new_display('page', 'FBAASS Search List', 'fbaass_search');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title / Salutation */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Forenames */
  $handler->display->display_options['fields']['field_forenames']['id'] = 'field_forenames';
  $handler->display->display_options['fields']['field_forenames']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_forenames']['field'] = 'field_forenames';
  $handler->display->display_options['fields']['field_forenames']['label'] = '';
  $handler->display->display_options['fields']['field_forenames']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_forenames']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['field_forenames']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_forenames']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Surname */
  $handler->display->display_options['fields']['field_surname']['id'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_surname']['field'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['label'] = '';
  $handler->display->display_options['fields']['field_surname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_surname']['alter']['text'] = '[field_title] [field_forenames] [field_surname]';
  $handler->display->display_options['fields']['field_surname']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['text'] = '<h2>[field_title] [field_forenames] [field_surname]</h2>';
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['type'] = 'addressfield_linear';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Node: Postcode */
  $handler->display->display_options['fields']['field_postcode']['id'] = 'field_postcode';
  $handler->display->display_options['fields']['field_postcode']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_postcode']['field'] = 'field_postcode';
  $handler->display->display_options['fields']['field_postcode']['label'] = '';
  $handler->display->display_options['fields']['field_postcode']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: FBAASS Geo Locator */
  $handler->display->display_options['fields']['field_geo_locator']['id'] = 'field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_geo_locator']['field'] = 'field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['label'] = '';
  $handler->display->display_options['fields']['field_geo_locator']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_geo_locator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo_locator']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_locator']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'fbaass-search';

  /* Display: FBAASS Search Map */
  $handler = $view->new_display('page', 'FBAASS Search Map', 'fbaass_search_map');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo_locator';
  $handler->display->display_options['style_options']['popup_source'] = 'nothing';
  $handler->display->display_options['style_options']['geofield_map_min_zoom'] = '0';
  $handler->display->display_options['style_options']['geofield_map_max_zoom'] = '0';
  $handler->display->display_options['style_options']['geofield_map_center'] = array(
    'lat' => '',
    'lon' => '',
    'geocode' => 'Find my location',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title / Salutation */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Forenames */
  $handler->display->display_options['fields']['field_forenames']['id'] = 'field_forenames';
  $handler->display->display_options['fields']['field_forenames']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_forenames']['field'] = 'field_forenames';
  $handler->display->display_options['fields']['field_forenames']['label'] = '';
  $handler->display->display_options['fields']['field_forenames']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_forenames']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['field_forenames']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_forenames']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Surname */
  $handler->display->display_options['fields']['field_surname']['id'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_surname']['field'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['label'] = '';
  $handler->display->display_options['fields']['field_surname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_surname']['alter']['text'] = '[field_title] [field_forenames] [field_surname]';
  $handler->display->display_options['fields']['field_surname']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['text'] = '<h2>[field_title] [field_forenames] [field_surname]</h2>';
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['type'] = 'addressfield_linear';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Node: Postcode */
  $handler->display->display_options['fields']['field_postcode']['id'] = 'field_postcode';
  $handler->display->display_options['fields']['field_postcode']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_postcode']['field'] = 'field_postcode';
  $handler->display->display_options['fields']['field_postcode']['label'] = '';
  $handler->display->display_options['fields']['field_postcode']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: FBAASS Geo Locator */
  $handler->display->display_options['fields']['field_geo_locator']['id'] = 'field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['table'] = 'search_api_index_fbaass_search_index';
  $handler->display->display_options['fields']['field_geo_locator']['field'] = 'field_geo_locator';
  $handler->display->display_options['fields']['field_geo_locator']['label'] = '';
  $handler->display->display_options['fields']['field_geo_locator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo_locator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_geo_locator']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_locator']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Custom Text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom Text';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="business-map-address">
    [view_node_1]</br>
    <p>[field_postcode]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'fbaass-search-map';

  /* Display: FBAASS Search List Tabs */
  $handler = $view->new_display('block', 'FBAASS Search List Tabs', 'fbaass_search_list_tabs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_title' => 'field_title',
    'field_forenames' => 'field_forenames',
    'field_surname' => 'field_surname',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="provider-tab active"><a href="/fbaass-search">List</a></div>
<div class="provider-tab"><a href="/fbaass-search-map">Map</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['qtip_instance'] = '';

  /* Display: FBAASS Search Map Tabs */
  $handler = $view->new_display('block', 'FBAASS Search Map Tabs', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_title' => 'field_title',
    'field_forenames' => 'field_forenames',
    'field_surname' => 'field_surname',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="provider-tab"><a href="/fbaass-search">List</a></div>
<div class="provider-tab active"><a href="/fbaass-search-map">Map</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['qtip_instance'] = '';
  $translatables['fbaass_search'] = array(
    t('Master'),
    t('FBAASS Search'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Displaying @start - @end of @total'),
    t('[field_title] [field_forenames] [field_surname]'),
    t('<h2>[field_title] [field_forenames] [field_surname]</h2>'),
    t('FBAASS Geo Locator'),
    t('FBAASS Search List'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('FBAASS Search Map'),
    t('<div class="business-map-address">
    [view_node_1]</br>
    <p>[field_postcode]</p>
</div>'),
    t('FBAASS Search List Tabs'),
    t('<div class="provider-tab active"><a href="/fbaass-search">List</a></div>
<div class="provider-tab"><a href="/fbaass-search-map">Map</a></div>'),
    t('FBAASS Search Map Tabs'),
    t('<div class="provider-tab"><a href="/fbaass-search">List</a></div>
<div class="provider-tab active"><a href="/fbaass-search-map">Map</a></div>'),
  );
  $export['fbaass_search'] = $view;

  return $export;
}
