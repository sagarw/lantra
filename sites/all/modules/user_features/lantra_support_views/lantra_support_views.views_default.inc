<?php
/**
 * @file
 * lantra_support_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lantra_support_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'entity_references';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entity References';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course providers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Product code */
  $handler->display->display_options['fields']['field_product_code']['id'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['table'] = 'field_data_field_product_code';
  $handler->display->display_options['fields']['field_product_code']['field'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['label'] = 'Product';
  $handler->display->display_options['fields']['field_product_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_code']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'entity-references';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'course_entity_reference');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_product_code' => 'field_product_code',
    'title' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Lantra Course Details */
  $handler = $view->new_display('block', 'Lantra Course Details', 'lantra_course_details');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'field_product_reference_target_id';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_product_reference_target_id']['id'] = 'field_product_reference_target_id';
  $handler->display->display_options['relationships']['field_product_reference_target_id']['table'] = 'field_data_field_product_reference';
  $handler->display->display_options['relationships']['field_product_reference_target_id']['field'] = 'field_product_reference_target_id';

  /* Display: Providers */
  $handler = $view->new_display('block', 'Providers', 'providers_block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_company_node']['id'] = 'reverse_field_company_node';
  $handler->display->display_options['relationships']['reverse_field_company_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_company_node']['field'] = 'reverse_field_company_node';
  $handler->display->display_options['relationships']['reverse_field_company_node']['ui_name'] = 'Company field';
  /* Relationship: Product reference */
  $handler->display->display_options['relationships']['reverse_field_product_reference_node']['id'] = 'reverse_field_product_reference_node';
  $handler->display->display_options['relationships']['reverse_field_product_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_product_reference_node']['field'] = 'reverse_field_product_reference_node';
  $handler->display->display_options['relationships']['reverse_field_product_reference_node']['ui_name'] = 'Product reference';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Referencing title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_product_reference_node';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Referencing title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Referencing postcode */
  $handler->display->display_options['fields']['field_postcode']['id'] = 'field_postcode';
  $handler->display->display_options['fields']['field_postcode']['table'] = 'field_data_field_postcode';
  $handler->display->display_options['fields']['field_postcode']['field'] = 'field_postcode';
  $handler->display->display_options['fields']['field_postcode']['relationship'] = 'reverse_field_product_reference_node';
  $handler->display->display_options['fields']['field_postcode']['ui_name'] = 'Referencing postcode';
  $handler->display->display_options['fields']['field_postcode']['label'] = '';
  $handler->display->display_options['fields']['field_postcode']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Product Code Reference */
  $handler = $view->new_display('entityreference', 'Product Code Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_product_code' => 'field_product_code',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_product_code' => 'field_product_code',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Product code (field_product_code) */
  $handler->display->display_options['sorts']['field_product_code_value']['id'] = 'field_product_code_value';
  $handler->display->display_options['sorts']['field_product_code_value']['table'] = 'field_data_field_product_code';
  $handler->display->display_options['sorts']['field_product_code_value']['field'] = 'field_product_code_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
  );
  /* Filter criterion: Content: Variation (field_variation_term) */
  $handler->display->display_options['filters']['field_variation_term_tid']['id'] = 'field_variation_term_tid';
  $handler->display->display_options['filters']['field_variation_term_tid']['table'] = 'field_data_field_variation_term';
  $handler->display->display_options['filters']['field_variation_term_tid']['field'] = 'field_variation_term_tid';
  $handler->display->display_options['filters']['field_variation_term_tid']['value'] = array(
    4201 => '4201',
  );
  $handler->display->display_options['filters']['field_variation_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_variation_term_tid']['vocabulary'] = 'course_variation';
  $handler->display->display_options['qtip_instance'] = '';

  /* Display: Node References */
  $handler = $view->new_display('entityreference', 'Node References', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_product_code' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_page_no_hero_image' => 'basic_page_no_hero_image',
    'page' => 'page',
    'landing_page' => 'landing_page',
  );
  $handler->display->display_options['qtip_instance'] = '';

  /* Display: Landing Page Reference */
  $handler = $view->new_display('entityreference', 'Landing Page Reference', 'entityreference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'path' => 'path',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_page_no_hero_image' => 'basic_page_no_hero_image',
    'page' => 'page',
    'landing_page' => 'landing_page',
  );
  $handler->display->display_options['qtip_instance'] = '';

  /* Display: Parent Page Reference */
  $handler = $view->new_display('entityreference', 'Parent Page Reference', 'parent_page_reference');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'path' => 'path',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_page_no_hero_image' => 'basic_page_no_hero_image',
    'page' => 'page',
    'landing_page' => 'landing_page',
  );
  $handler->display->display_options['qtip_instance'] = '';

  /* Display: My Courses */
  $handler = $view->new_display('entityreference', 'My Courses', 'my_courses');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_product_code' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: locally */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Locally Flagged';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'locally';
  /* Relationship: Flags: nationwide */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Nationwide flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'nationwide';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged_1']['id'] = 'flagged_1';
  $handler->display->display_options['filters']['flagged_1']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged_1']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['filters']['flagged_1']['value'] = '1';
  $handler->display->display_options['filters']['flagged_1']['group'] = 2;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['group'] = 2;
  $handler->display->display_options['qtip_instance'] = '';
  $translatables['entity_references'] = array(
    t('Master'),
    t('Course providers'),
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
    t('Product'),
    t('Page'),
    t('Entity Reference'),
    t('Lantra Course Details'),
    t('Content entity referenced from field_product_reference'),
    t('Providers'),
    t('reverse_field_company_node'),
    t('Content referencing Content from field_product_reference'),
    t('All'),
    t('Product Code Reference'),
    t('Node References'),
    t('Landing Page Reference'),
    t('Parent Page Reference'),
    t('My Courses'),
    t('Locally Flagged'),
    t('Nationwide flag'),
  );
  $export['entity_references'] = $view;

  $view = new view();
  $view->name = 'file_and_download_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'File and Download Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'File and Download Views';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'uri' => 'uri',
    'title' => 'title',
    'filename' => 'filename',
    'extension' => 'extension',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_appears_on_node']['id'] = 'reverse_field_appears_on_node';
  $handler->display->display_options['relationships']['reverse_field_appears_on_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_appears_on_node']['field'] = 'reverse_field_appears_on_node';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['relationship'] = 'reverse_field_appears_on_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_appears_on_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_appears_on_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'file' => 'file',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'file-and-download-views';

  /* Display: Related Downloads */
  $handler = $view->new_display('block', 'Related Downloads', 'related_downloads');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Downloads';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_appears_on_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[uri]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uri']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['uri']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uri']['alter']['path'] = '[uri]';
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['link_to_file'] = TRUE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  /* Field: File: Extension */
  $handler->display->display_options['fields']['extension']['id'] = 'extension';
  $handler->display->display_options['fields']['extension']['table'] = 'file_managed';
  $handler->display->display_options['fields']['extension']['field'] = 'extension';
  $handler->display->display_options['fields']['extension']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['extension']['label'] = '';
  $handler->display->display_options['fields']['extension']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'reverse_field_appears_on_node';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Related Downloads';
  $translatables['file_and_download_views'] = array(
    t('Master'),
    t('File and Download Views'),
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
    t('Content referencing Content from field_appears_on'),
    t('File'),
    t('Path'),
    t('All'),
    t('Page'),
    t('Related Downloads'),
    t('[title]'),
  );
  $export['file_and_download_views'] = $view;

  $view = new view();
  $view->name = 'la_course_approval';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LA Course Approval';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'LA Course Approval';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'ops_1' => 'ops_1',
    'ops' => 'ops',
    'field_product_code' => 'field_product_code',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No courses are approved. Move along, nothing to see here.';
  $handler->display->display_options['empty']['area']['format'] = 'popup_tags';
  /* Relationship: Flags: la_course_pending_approval */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['ui_name'] = 'Pending Approval';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Pending Approval';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'la_course_pending_approval';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flagging User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid']['ui_name'] = 'Flagging User';
  $handler->display->display_options['relationships']['uid']['label'] = 'Flagging User';
  /* Relationship: User requesting approval */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid_1']['ui_name'] = 'User requesting approval';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'User requesting approval';
  /* Relationship: Flags: la_course_local_approved */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['ui_name'] = 'Approved Flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Approved Flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'la_course_local_approved';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'uid_1';
  /* Field: Content: Product code */
  $handler->display->display_options['fields']['field_product_code']['id'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['table'] = 'field_data_field_product_code';
  $handler->display->display_options['fields']['field_product_code']['field'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['label'] = 'Code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category']['multi_type'] = 'ul';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Provider';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'flagging';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['uid']['label'] = 'Business Profile';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = 'Business Profile';
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['path'] = 'profile-business_profile/[uid]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Approve';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Remove */
  $handler->display->display_options['fields']['unflag_link_1']['id'] = 'unflag_link_1';
  $handler->display->display_options['fields']['unflag_link_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['unflag_link_1']['field'] = 'unflag_link';
  $handler->display->display_options['fields']['unflag_link_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['unflag_link_1']['label'] = 'Decline';
  $handler->display->display_options['fields']['unflag_link_1']['link_text'] = 'Decline';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['filters']['flagged']['value'] = '0';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged_1']['id'] = 'flagged_1';
  $handler->display->display_options['filters']['flagged_1']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged_1']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged_1']['value'] = '1';
  $handler->display->display_options['qtip_instance'] = '';

  /* Display: LA Course Local Approval */
  $handler = $view->new_display('page', 'LA Course Local Approval', 'course_local_approval');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'LA Course Local Approval';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: la_course_local_pending_approval */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['ui_name'] = 'Pending Approval';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Pending Approval';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'la_course_local_pending_approval';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flagging User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid']['ui_name'] = 'Flagging User';
  $handler->display->display_options['relationships']['uid']['label'] = 'Flagging User';
  /* Relationship: User requesting approval */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid_1']['ui_name'] = 'User requesting approval';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'User requesting approval';
  /* Relationship: Flags: la_course_local_approved */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['ui_name'] = 'Approved Flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Approved Flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'la_course_local_approved';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'uid_1';
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'admin/la-course-local-approval';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'LA Course Local Approval';
  $handler->display->display_options['menu']['description'] = 'LA Course Local Approval';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-dev-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: LA Course National Approval */
  $handler = $view->new_display('page', 'LA Course National Approval', 'course_national_approval');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'LA Course National Approval';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: la_course_pending_approval */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['ui_name'] = 'Pending Approval';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Pending Approval';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'la_course_pending_approval';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: la_course_approved */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['ui_name'] = 'Approved Flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Approved Flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'la_course_approved';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relationship: Flagging User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid']['ui_name'] = 'Flagging User';
  $handler->display->display_options['relationships']['uid']['label'] = 'Flagging User';
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'admin/la-course-national-approval';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'LA Course National Approval';
  $handler->display->display_options['menu']['description'] = 'LA Course National Approval';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-dev-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: LA Course Approval Management */
  $handler = $view->new_display('page', 'LA Course Approval Management', 'approval_maintenance');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: la_course_local_approved */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['ui_name'] = 'Approved Flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Approved Flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'la_course_local_approved';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relationship: Approved User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['uid']['ui_name'] = 'Approved User';
  $handler->display->display_options['relationships']['uid']['label'] = 'Approved User';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
  );
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'admin/la-course-approval-management';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'LA Course Approval Maintenence';
  $handler->display->display_options['menu']['description'] = 'LA Course Approval Maintenance';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-dev-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Remove Flags */
  $handler = $view->new_display('page', 'Remove Flags', 'remove_flags');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'LA Course Listing';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: locally */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Local Flag';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'locally';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'business_profile' => 'business_profile',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Product code */
  $handler->display->display_options['fields']['field_product_code']['id'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['table'] = 'field_data_field_product_code';
  $handler->display->display_options['fields']['field_product_code']['field'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['label'] = 'Code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category']['multi_type'] = 'ul';
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'flagging';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['uid']['label'] = 'Business Profile';
  $handler->display->display_options['fields']['uid']['alter']['text'] = 'Business Profile';
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['path'] = 'profile-business_profile/[uid]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Field: Business name */
  $handler->display->display_options['fields']['field_business_name']['id'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['table'] = 'field_data_field_business_name';
  $handler->display->display_options['fields']['field_business_name']['field'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['relationship'] = 'profile';
  /* Field: Flags: Remove */
  $handler->display->display_options['fields']['unflag_link_1']['id'] = 'unflag_link_1';
  $handler->display->display_options['fields']['unflag_link_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['unflag_link_1']['field'] = 'unflag_link';
  $handler->display->display_options['fields']['unflag_link_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['unflag_link_1']['label'] = 'Remove Flags';
  $handler->display->display_options['fields']['unflag_link_1']['link_text'] = 'Remove Flags';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    18 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    15 => 0,
    14 => 0,
    16 => 0,
    17 => 0,
  );
  $handler->display->display_options['path'] = 'admin/remove_flags';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Revoke Tool';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-dev-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['la_course_approval'] = array(
    t('Master'),
    t('LA Course Approval'),
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
    t('No courses are approved. Move along, nothing to see here.'),
    t('Pending Approval'),
    t('Flagging User'),
    t('User requesting approval'),
    t('Approved Flag'),
    t('Profile'),
    t('Code'),
    t('Title'),
    t('Category'),
    t('Provider'),
    t('Business Profile'),
    t('Approve'),
    t('Decline'),
    t('LA Course Local Approval'),
    t('LA Course National Approval'),
    t('LA Course Approval Management'),
    t('Approved User'),
    t('Remove Flags'),
    t('LA Course Listing'),
    t('Local Flag'),
    t('Flag user'),
    t('Business name'),
  );
  $export['la_course_approval'] = $view;

  $view = new view();
  $view->name = 'support_views';
  $view->description = '';
  $view->tag = 'Supporting views';
  $view->base_table = 'node';
  $view->human_name = 'Support Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Provider Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Provider Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Find providers';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'providers/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Back to search */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Back to search';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<A HREF="javascript:javascript:history.go(-1)">Back to search</A>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: New search */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'New search';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'New search';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'coursesearch';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Content: Local provider icon */
  $handler->display->display_options['fields']['field_local_provider_icon']['id'] = 'field_local_provider_icon';
  $handler->display->display_options['fields']['field_local_provider_icon']['table'] = 'field_data_field_local_provider_icon';
  $handler->display->display_options['fields']['field_local_provider_icon']['field'] = 'field_local_provider_icon';
  $handler->display->display_options['fields']['field_local_provider_icon']['label'] = '';
  $handler->display->display_options['fields']['field_local_provider_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_local_provider_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_local_provider_icon']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
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

  /* Display: Course block */
  $handler = $view->new_display('block', 'Course block', 'provider_link');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'left-col-buttons';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Provider Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Provider Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Find providers';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'provider-search/[nid]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Back to search */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Back to search';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Back to search';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'coursesearch';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: New search */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'New search';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'New search';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'coursesearch/full_text_search=';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Print PDF */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Print PDF';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Print PDF';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'node/[nid]/pdf';
  $handler->display->display_options['fields']['nothing_3']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_page_no_hero_image' => 'basic_page_no_hero_image',
    'page' => 'page',
  );

  /* Display: Provider block */
  $handler = $view->new_display('block', 'Provider block', 'provider_block');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'left-col-buttons';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Provider Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Provider Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Find providers';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'provider-search/[nid]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Back to providers search */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Back to providers search';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Back to providers search';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'provider-search/[nid]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: New search */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'New search';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'New search';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'coursesearch/full_text_search=""';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Print PDF */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Print PDF';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Print PDF';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'printpdf/[nid]';
  $handler->display->display_options['fields']['nothing_3']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );

  /* Display: Title and Icons */
  $handler = $view->new_display('block', 'Title and Icons', 'title_and_icons');
  $handler->display->display_options['display_description'] = 'Displays course title and icons on \'Course Details\' page.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_icon' => 'field_icon',
    'field_icon_1' => 'field_icon_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Qualification Level */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['ui_name'] = 'Qualification Level';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Qualification Level';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'qualification_level' => 'qualification_level',
    'qualification_level_scotland' => 'qualification_level_scotland',
    'a_to_z' => 0,
    'assessment_type' => 0,
    'awarding_organisation' => 0,
    'business_classification' => 0,
    'country' => 0,
    'course_type' => 0,
    'course_classification' => 0,
    'course_delivery' => 0,
    'course_delivery_method' => 0,
    'course_language' => 0,
    'course_level' => 0,
    'course_timetable' => 0,
    'dependencies' => 0,
    'get_advice_section' => 0,
    'industry' => 0,
    'job_type' => 0,
    'la_course_categories' => 0,
    'language' => 0,
    'no_of_employees' => 0,
    'region' => 0,
    'salary_range' => 0,
    'tags' => 0,
    'test_taxonomy' => 0,
    'timetable' => 0,
    'work_hours' => 0,
  );
  /* Relationship: Course Type */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['ui_name'] = 'Course Type';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'Course Type';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'course_type' => 'course_type',
    'a_to_z' => 0,
    'assessment_type' => 0,
    'awarding_organisation' => 0,
    'business_classification' => 0,
    'country' => 0,
    'course_classification' => 0,
    'course_delivery' => 0,
    'course_delivery_method' => 0,
    'course_language' => 0,
    'course_level' => 0,
    'course_timetable' => 0,
    'dependencies' => 0,
    'get_advice_section' => 0,
    'industry' => 0,
    'job_type' => 0,
    'la_course_categories' => 0,
    'language' => 0,
    'no_of_employees' => 0,
    'qualification_level' => 0,
    'region' => 0,
    'salary_range' => 0,
    'tags' => 0,
    'test_taxonomy' => 0,
    'timetable' => 0,
    'work_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'course-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Qualification Level */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_icon']['ui_name'] = 'Qualification Level';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_icon']['element_class'] = 'course-icon';
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  /* Field: Course Type */
  $handler->display->display_options['fields']['field_icon_1']['id'] = 'field_icon_1';
  $handler->display->display_options['fields']['field_icon_1']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon_1']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['fields']['field_icon_1']['ui_name'] = 'Course Type';
  $handler->display->display_options['fields']['field_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_icon_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_icon_1']['element_class'] = 'course-icon';
  $handler->display->display_options['fields']['field_icon_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_icon_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon_1']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="course-icon-image">[field_icon_1]</div><div class="course-icon-image">[field_icon]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'course-icons';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
    'la_course' => 'la_course',
  );

  /* Display: Learner's view */
  $handler = $view->new_display('page', 'Learner\'s view', 'learner_view');
  $handler->display->display_options['display_description'] = 'Shows the \'Learners version of a given node\'.';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    12 => '12',
    9 => '9',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'support_views:title_and_icons';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Product code */
  $handler->display->display_options['fields']['field_product_code']['id'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['table'] = 'field_data_field_product_code';
  $handler->display->display_options['fields']['field_product_code']['field'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_product_code']['delta_limit'] = '4';
  $handler->display->display_options['fields']['field_product_code']['delta_offset'] = '0';
  /* Field: Field: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Content: Target audience */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['hide_empty'] = TRUE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Course description';
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  /* Field: Content: Product objectives */
  $handler->display->display_options['fields']['field_project_objectives']['id'] = 'field_project_objectives';
  $handler->display->display_options['fields']['field_project_objectives']['table'] = 'field_data_field_project_objectives';
  $handler->display->display_options['fields']['field_project_objectives']['field'] = 'field_project_objectives';
  /* Field: Content: Product purpose */
  $handler->display->display_options['fields']['field_product_purpose']['id'] = 'field_product_purpose';
  $handler->display->display_options['fields']['field_product_purpose']['table'] = 'field_data_field_product_purpose';
  $handler->display->display_options['fields']['field_product_purpose']['field'] = 'field_product_purpose';
  $handler->display->display_options['fields']['field_product_purpose']['hide_empty'] = TRUE;
  /* Field: Content: Course / product type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: English qualification level */
  $handler->display->display_options['fields']['field_qualification_level']['id'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['table'] = 'field_data_field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['field'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_qualification_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Scottish qualification level */
  $handler->display->display_options['fields']['field_scottish_qualification']['id'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['table'] = 'field_data_field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['field'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_scottish_qualification']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Assessment type */
  $handler->display->display_options['fields']['field_assessment_type']['id'] = 'field_assessment_type';
  $handler->display->display_options['fields']['field_assessment_type']['table'] = 'field_data_field_assessment_type';
  $handler->display->display_options['fields']['field_assessment_type']['field'] = 'field_assessment_type';
  $handler->display->display_options['fields']['field_assessment_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_assessment_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Course / product delivery */
  $handler->display->display_options['fields']['field_course_delivery_1']['id'] = 'field_course_delivery_1';
  $handler->display->display_options['fields']['field_course_delivery_1']['table'] = 'field_data_field_course_delivery';
  $handler->display->display_options['fields']['field_course_delivery_1']['field'] = 'field_course_delivery';
  $handler->display->display_options['fields']['field_course_delivery_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_course_delivery_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nationwide Delivery */
  $handler->display->display_options['fields']['field_nationwide_delivery']['id'] = 'field_nationwide_delivery';
  $handler->display->display_options['fields']['field_nationwide_delivery']['table'] = 'field_data_field_nationwide_delivery';
  $handler->display->display_options['fields']['field_nationwide_delivery']['field'] = 'field_nationwide_delivery';
  $handler->display->display_options['fields']['field_nationwide_delivery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nationwide_delivery']['hide_empty'] = TRUE;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_language']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_duration']['id'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['table'] = 'field_data_field_duration';
  $handler->display->display_options['fields']['field_duration']['field'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['hide_empty'] = TRUE;
  /* Field: Content: Guided Learning Hours */
  $handler->display->display_options['fields']['field_guided_learning_hours']['id'] = 'field_guided_learning_hours';
  $handler->display->display_options['fields']['field_guided_learning_hours']['table'] = 'field_data_field_guided_learning_hours';
  $handler->display->display_options['fields']['field_guided_learning_hours']['field'] = 'field_guided_learning_hours';
  $handler->display->display_options['fields']['field_guided_learning_hours']['label'] = 'Guided learning hours';
  $handler->display->display_options['fields']['field_guided_learning_hours']['hide_empty'] = TRUE;
  /* Field: Content: Min number of learners */
  $handler->display->display_options['fields']['field_learner_number_minimum']['id'] = 'field_learner_number_minimum';
  $handler->display->display_options['fields']['field_learner_number_minimum']['table'] = 'field_data_field_learner_number_minimum';
  $handler->display->display_options['fields']['field_learner_number_minimum']['field'] = 'field_learner_number_minimum';
  $handler->display->display_options['fields']['field_learner_number_minimum']['label'] = 'Minimum number of learners';
  $handler->display->display_options['fields']['field_learner_number_minimum']['hide_empty'] = TRUE;
  /* Field: Content: Max number of learners */
  $handler->display->display_options['fields']['field_learner_number_maximum']['id'] = 'field_learner_number_maximum';
  $handler->display->display_options['fields']['field_learner_number_maximum']['table'] = 'field_data_field_learner_number_maximum';
  $handler->display->display_options['fields']['field_learner_number_maximum']['field'] = 'field_learner_number_maximum';
  $handler->display->display_options['fields']['field_learner_number_maximum']['label'] = 'Maximum number of learners';
  $handler->display->display_options['fields']['field_learner_number_maximum']['hide_empty'] = TRUE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
    'lantra_awards_course' => 'lantra_awards_course',
  );
  $handler->display->display_options['path'] = 'learnersview/%';

  /* Display: Learners pdf view */
  $handler = $view->new_display('pdf', 'Learners pdf view', 'learners_pdf_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Learners pdf view';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'pdf_unformatted';
  $handler->display->display_options['row_plugin'] = 'pdf_fields';
  $handler->display->display_options['row_options']['formats'] = array(
    'title' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '5',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 0,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_scottish_qualification' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '-2',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'nothing' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
  );
  $handler->display->display_options['row_options']['leading_template'] = '0';
  $handler->display->display_options['row_options']['template'] = '0';
  $handler->display->display_options['row_options']['succeed_template'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h1 class="pdf-title">[title]</h1>';
  $handler->display->display_options['fields']['title']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product code */
  $handler->display->display_options['fields']['field_product_code']['id'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['table'] = 'field_data_field_product_code';
  $handler->display->display_options['fields']['field_product_code']['field'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['label'] = '';
  $handler->display->display_options['fields']['field_product_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_code']['alter']['text'] = '<p class="pdf-label">Product code:</p><p class="pdf-field">[field_product_code]</p> ';
  $handler->display->display_options['fields']['field_product_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_code']['hide_empty'] = TRUE;
  /* Field: Field: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['text'] = '<p class="pdf-label">Summary:</p><p class="pdf-field">[field_summary]</p> ';
  $handler->display->display_options['fields']['field_summary']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_summary']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Target audience */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['label'] = '';
  $handler->display->display_options['fields']['field_target_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['text'] = '<p class="pdf-label">Target Audience:</p><p class="pdf-field">[field_target_audience]</p> ';
  $handler->display->display_options['fields']['field_target_audience']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_target_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_audience']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_target_audience']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['type'] = 'text_plain';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['text'] = '<p class="pdf-label">Description:</p><p class="pdf-field">[field_description]</p> ';
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  /* Field: Content: Product objectives */
  $handler->display->display_options['fields']['field_project_objectives']['id'] = 'field_project_objectives';
  $handler->display->display_options['fields']['field_project_objectives']['table'] = 'field_data_field_project_objectives';
  $handler->display->display_options['fields']['field_project_objectives']['field'] = 'field_project_objectives';
  $handler->display->display_options['fields']['field_project_objectives']['label'] = '';
  $handler->display->display_options['fields']['field_project_objectives']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_objectives']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_objectives']['alter']['text'] = '<p class="pdf-label">Product objectives:</p><p class="pdf-field">[field_project_objectives]</p> ';
  $handler->display->display_options['fields']['field_project_objectives']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_objectives']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_objectives']['hide_empty'] = TRUE;
  /* Field: Content: Course / product type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['alter']['text'] = '<p class="pdf-label">Course / product type:</p><p class="pdf-field">[field_course_type]</p>';
  $handler->display->display_options['fields']['field_course_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_course_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_course_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_course_type']['settings'] = array(
    'linked' => 0,
  );
  /* Field: Content: English qualification level */
  $handler->display->display_options['fields']['field_qualification_level']['id'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['table'] = 'field_data_field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['field'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['label'] = '';
  $handler->display->display_options['fields']['field_qualification_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_qualification_level']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_qualification_level']['alter']['text'] = '<p class="pdf-label">Qualification level:</p><pclass="pdf-field">[field_qualification_level]</p>';
  $handler->display->display_options['fields']['field_qualification_level']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_qualification_level']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_qualification_level']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_qualification_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_qualification_level']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_qualification_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Scottish qualification level */
  $handler->display->display_options['fields']['field_scottish_qualification']['id'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['table'] = 'field_data_field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['field'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['label'] = '';
  $handler->display->display_options['fields']['field_scottish_qualification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_scottish_qualification']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_scottish_qualification']['alter']['text'] = '<p class="pdf-label">Scottish Qualification:</p><p class="pdf-field">[field_scottish_qualification]</p> ';
  $handler->display->display_options['fields']['field_scottish_qualification']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_scottish_qualification']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_scottish_qualification']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_scottish_qualification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scottish_qualification']['element_default_classes'] = FALSE;
  /* Field: Content: Course / product delivery */
  $handler->display->display_options['fields']['field_course_delivery']['id'] = 'field_course_delivery';
  $handler->display->display_options['fields']['field_course_delivery']['table'] = 'field_data_field_course_delivery';
  $handler->display->display_options['fields']['field_course_delivery']['field'] = 'field_course_delivery';
  $handler->display->display_options['fields']['field_course_delivery']['label'] = '';
  $handler->display->display_options['fields']['field_course_delivery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_delivery']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_course_delivery']['alter']['text'] = '<p class="pdf-label">Course delivery:</p><p class="pdf-field">[field_course_delivery]</p> ';
  $handler->display->display_options['fields']['field_course_delivery']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_course_delivery']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_course_delivery']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_course_delivery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_delivery']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_course_delivery']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_course_delivery']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['label'] = '';
  $handler->display->display_options['fields']['field_language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['text'] = '<p class="pdf-label">Language:</p><p class="pdf-field">[field_language]</p> ';
  $handler->display->display_options['fields']['field_language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_language']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_language']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_language']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_duration']['id'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['table'] = 'field_data_field_duration';
  $handler->display->display_options['fields']['field_duration']['field'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['label'] = '';
  $handler->display->display_options['fields']['field_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_duration']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_duration']['alter']['text'] = '<p class="pdf-label">Duration:</p><p class="pdf-field">[field_duration]</p> ';
  $handler->display->display_options['fields']['field_duration']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_duration']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_duration']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_duration']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_duration']['hide_empty'] = TRUE;
  /* Field: Content: Min number of learners */
  $handler->display->display_options['fields']['field_learner_number_minimum']['id'] = 'field_learner_number_minimum';
  $handler->display->display_options['fields']['field_learner_number_minimum']['table'] = 'field_data_field_learner_number_minimum';
  $handler->display->display_options['fields']['field_learner_number_minimum']['field'] = 'field_learner_number_minimum';
  $handler->display->display_options['fields']['field_learner_number_minimum']['label'] = '';
  $handler->display->display_options['fields']['field_learner_number_minimum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_learner_number_minimum']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_learner_number_minimum']['alter']['text'] = '<p class="pdf-label">Min number of learners:</p><p class="pdf-field">[field_learner_number_minimum]</p> ';
  $handler->display->display_options['fields']['field_learner_number_minimum']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_learner_number_minimum']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_learner_number_minimum']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_learner_number_minimum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_learner_number_minimum']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_learner_number_minimum']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_learner_number_minimum']['type'] = 'text_plain';
  /* Field: Content: Max number of learners */
  $handler->display->display_options['fields']['field_learner_number_maximum']['id'] = 'field_learner_number_maximum';
  $handler->display->display_options['fields']['field_learner_number_maximum']['table'] = 'field_data_field_learner_number_maximum';
  $handler->display->display_options['fields']['field_learner_number_maximum']['field'] = 'field_learner_number_maximum';
  $handler->display->display_options['fields']['field_learner_number_maximum']['label'] = '';
  $handler->display->display_options['fields']['field_learner_number_maximum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_learner_number_maximum']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_learner_number_maximum']['alter']['text'] = '<p class="pdf-label">Max number of learners:</p><p class="pdf-field">[field_learner_number_maximum]</p>';
  $handler->display->display_options['fields']['field_learner_number_maximum']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_learner_number_maximum']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_learner_number_maximum']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_learner_number_maximum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_learner_number_maximum']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_learner_number_maximum']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_learner_number_maximum']['type'] = 'text_plain';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = '<p class="pdf-label">Category:</p><p class="pdf-field">[field_category]</p> ';
  $handler->display->display_options['fields']['field_category']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category']['multi_type'] = 'ul';
  /* Field: Content: Assessment type */
  $handler->display->display_options['fields']['field_assessment_type']['id'] = 'field_assessment_type';
  $handler->display->display_options['fields']['field_assessment_type']['table'] = 'field_data_field_assessment_type';
  $handler->display->display_options['fields']['field_assessment_type']['field'] = 'field_assessment_type';
  $handler->display->display_options['fields']['field_assessment_type']['label'] = '';
  $handler->display->display_options['fields']['field_assessment_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_assessment_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_assessment_type']['alter']['text'] = '<p class="pdf-label">Assessment type:</p><p class="pdf-field">[field_assessment_type]</p> ';
  $handler->display->display_options['fields']['field_assessment_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_assessment_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_assessment_type']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_assessment_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_assessment_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_assessment_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_assessment_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Guided Learning Hours */
  $handler->display->display_options['fields']['field_guided_learning_hours']['id'] = 'field_guided_learning_hours';
  $handler->display->display_options['fields']['field_guided_learning_hours']['table'] = 'field_data_field_guided_learning_hours';
  $handler->display->display_options['fields']['field_guided_learning_hours']['field'] = 'field_guided_learning_hours';
  $handler->display->display_options['fields']['field_guided_learning_hours']['label'] = '';
  $handler->display->display_options['fields']['field_guided_learning_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_guided_learning_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_guided_learning_hours']['alter']['text'] = '<p class="pdf-label">Guided learning hours:</p><p class="pdf-field">[field_guided_learning_hours]</p> ';
  $handler->display->display_options['fields']['field_guided_learning_hours']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_guided_learning_hours']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_guided_learning_hours']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_guided_learning_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_guided_learning_hours']['element_default_classes'] = FALSE;
  /* Field: Content: Nationwide Delivery */
  $handler->display->display_options['fields']['field_nationwide_delivery']['id'] = 'field_nationwide_delivery';
  $handler->display->display_options['fields']['field_nationwide_delivery']['table'] = 'field_data_field_nationwide_delivery';
  $handler->display->display_options['fields']['field_nationwide_delivery']['field'] = 'field_nationwide_delivery';
  $handler->display->display_options['fields']['field_nationwide_delivery']['label'] = '';
  $handler->display->display_options['fields']['field_nationwide_delivery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nationwide_delivery']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nationwide_delivery']['alter']['text'] = '<p class="pdf-label">Nationwide:</p><p class="pdf-field">[field_nationwide_delivery]</p> ';
  $handler->display->display_options['fields']['field_nationwide_delivery']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_nationwide_delivery']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_nationwide_delivery']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_nationwide_delivery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nationwide_delivery']['element_default_classes'] = FALSE;
  /* Field: Content: Product purpose */
  $handler->display->display_options['fields']['field_product_purpose']['id'] = 'field_product_purpose';
  $handler->display->display_options['fields']['field_product_purpose']['table'] = 'field_data_field_product_purpose';
  $handler->display->display_options['fields']['field_product_purpose']['field'] = 'field_product_purpose';
  $handler->display->display_options['fields']['field_product_purpose']['label'] = '';
  $handler->display->display_options['fields']['field_product_purpose']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_purpose']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_purpose']['alter']['text'] = '<p class="pdf-label">Product purpose:</p><p class="pdf-field">[field_product_purpose]</p> ';
  $handler->display->display_options['fields']['field_product_purpose']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_product_purpose']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['field_product_purpose']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_purpose']['element_default_classes'] = FALSE;
  /* Field: Content: Additional Details */
  $handler->display->display_options['fields']['field_additional_details']['id'] = 'field_additional_details';
  $handler->display->display_options['fields']['field_additional_details']['table'] = 'field_data_field_additional_details';
  $handler->display->display_options['fields']['field_additional_details']['field'] = 'field_additional_details';
  $handler->display->display_options['fields']['field_additional_details']['label'] = '';
  $handler->display->display_options['fields']['field_additional_details']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_additional_details']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pdf-title">[title]</div>
<div>[field_product_code]<p></p>
[field_summary]<p></p>
[field_target_audience]<p></p>
[field_description]<p></p>
[field_course_type]<p></p>
[field_qualification_level]<p></p>
[field_scottish_qualification]<p></p> 
[field_course_delivery]<p></p> 
[field_language]<p></p> 
[field_duration]<p></p> 
[field_learner_number_minimum]<p></p> 
[field_learner_number_maximum]<p></p>
[field_category]<p></p>
[field_assessment_type]<p></p> 
[field_guided_learning_hours]<p></p> 
[field_nationwide_delivery]<p></p> 
[field_product_purpose]<p></p>
[field_additional_details]</div>';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
  );
  $handler->display->display_options['path'] = 'learnerspdf/%';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'provider_link' => 0,
    'provider_block' => 0,
    'title_and_icons' => 0,
    'learner_view' => 0,
    'block_2' => 0,
    'print_pdf' => 0,
    'block_1' => 0,
    'learner_links' => 0,
    'local_icon' => 0,
    'national_icon' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'page_1' => 0,
    'print_pdf_learners' => 0,
  );
  $handler->display->display_options['margin_top'] = '30';
  $handler->display->display_options['leading_template'] = '0';
  $handler->display->display_options['template'] = 'lantra pdf_0.pdf';
  $handler->display->display_options['succeed_template'] = '0';
  $handler->display->display_options['default_font_family'] = 'freesans';
  $handler->display->display_options['default_font_style'] = array(
    'b' => 0,
    'i' => 0,
    'u' => 0,
    'd' => 0,
    'o' => 0,
  );
  $handler->display->display_options['css_file'] = 'sites/all/themes/lantra_awards/css/printpdf.css';

  /* Display: Business Link */
  $handler = $view->new_display('block', 'Business Link', 'block_2');

  /* Display: Print PDF */
  $handler = $view->new_display('block', 'Print PDF', 'print_pdf');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Print PDF';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'printpdf/[nid]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Print PDF';

  /* Display: Providers View Link */
  $handler = $view->new_display('block', 'Providers View Link', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Providers view */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Providers view';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Providers view';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Learners View Link */
  $handler = $view->new_display('block', 'Learners View Link', 'learner_links');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Learners view */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Learners view';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Learners view';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'learnersview/[nid]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Local Icon */
  $handler = $view->new_display('block', 'Local Icon', 'local_icon');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Local provider icon */
  $handler->display->display_options['fields']['field_local_provider_icon']['id'] = 'field_local_provider_icon';
  $handler->display->display_options['fields']['field_local_provider_icon']['table'] = 'field_data_field_local_provider_icon';
  $handler->display->display_options['fields']['field_local_provider_icon']['field'] = 'field_local_provider_icon';
  $handler->display->display_options['fields']['field_local_provider_icon']['label'] = '';
  $handler->display->display_options['fields']['field_local_provider_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_local_provider_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_local_provider_icon']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'supplemental_content' => 'supplemental_content',
  );

  /* Display: National Icon */
  $handler = $view->new_display('block', 'National Icon', 'national_icon');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: National provider icon */
  $handler->display->display_options['fields']['field_national_provider_icon']['id'] = 'field_national_provider_icon';
  $handler->display->display_options['fields']['field_national_provider_icon']['table'] = 'field_data_field_national_provider_icon';
  $handler->display->display_options['fields']['field_national_provider_icon']['field'] = 'field_national_provider_icon';
  $handler->display->display_options['fields']['field_national_provider_icon']['label'] = '';
  $handler->display->display_options['fields']['field_national_provider_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_national_provider_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_national_provider_icon']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'supplemental_content' => 'supplemental_content',
  );

  /* Display: Round local Icon */
  $handler = $view->new_display('block', 'Round local Icon', 'block_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Round local icon */
  $handler->display->display_options['fields']['field_round_local_icon']['id'] = 'field_round_local_icon';
  $handler->display->display_options['fields']['field_round_local_icon']['table'] = 'field_data_field_round_local_icon';
  $handler->display->display_options['fields']['field_round_local_icon']['field'] = 'field_round_local_icon';
  $handler->display->display_options['fields']['field_round_local_icon']['label'] = '';
  $handler->display->display_options['fields']['field_round_local_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_round_local_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_round_local_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_round_local_icon']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'supplemental_content' => 'supplemental_content',
  );

  /* Display: Round national Icon */
  $handler = $view->new_display('block', 'Round national Icon', 'block_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Round national icon */
  $handler->display->display_options['fields']['field_round_national_icon']['id'] = 'field_round_national_icon';
  $handler->display->display_options['fields']['field_round_national_icon']['table'] = 'field_data_field_round_national_icon';
  $handler->display->display_options['fields']['field_round_national_icon']['field'] = 'field_round_national_icon';
  $handler->display->display_options['fields']['field_round_national_icon']['label'] = '';
  $handler->display->display_options['fields']['field_round_national_icon']['element_type'] = '0';
  $handler->display->display_options['fields']['field_round_national_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_round_national_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_round_national_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_round_national_icon']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'supplemental_content' => 'supplemental_content',
  );

  /* Display: Learner's view */
  $handler = $view->new_display('page', 'Learner\'s view', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Shows the \'Learners version of a given node\'.';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    12 => '12',
    9 => '9',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'support_views:title_and_icons';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Product code */
  $handler->display->display_options['fields']['field_product_code']['id'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['table'] = 'field_data_field_product_code';
  $handler->display->display_options['fields']['field_product_code']['field'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_product_code']['delta_limit'] = '4';
  $handler->display->display_options['fields']['field_product_code']['delta_offset'] = '0';
  /* Field: Field: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Content: Target audience */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['hide_empty'] = TRUE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Course description';
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  /* Field: Content: Product objectives */
  $handler->display->display_options['fields']['field_project_objectives']['id'] = 'field_project_objectives';
  $handler->display->display_options['fields']['field_project_objectives']['table'] = 'field_data_field_project_objectives';
  $handler->display->display_options['fields']['field_project_objectives']['field'] = 'field_project_objectives';
  /* Field: Content: Product purpose */
  $handler->display->display_options['fields']['field_product_purpose']['id'] = 'field_product_purpose';
  $handler->display->display_options['fields']['field_product_purpose']['table'] = 'field_data_field_product_purpose';
  $handler->display->display_options['fields']['field_product_purpose']['field'] = 'field_product_purpose';
  $handler->display->display_options['fields']['field_product_purpose']['hide_empty'] = TRUE;
  /* Field: Content: Course / product type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: English qualification level */
  $handler->display->display_options['fields']['field_qualification_level']['id'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['table'] = 'field_data_field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['field'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_qualification_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Scottish qualification level */
  $handler->display->display_options['fields']['field_scottish_qualification']['id'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['table'] = 'field_data_field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['field'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_scottish_qualification']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Assessment type */
  $handler->display->display_options['fields']['field_assessment_type']['id'] = 'field_assessment_type';
  $handler->display->display_options['fields']['field_assessment_type']['table'] = 'field_data_field_assessment_type';
  $handler->display->display_options['fields']['field_assessment_type']['field'] = 'field_assessment_type';
  $handler->display->display_options['fields']['field_assessment_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_assessment_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Course / product delivery */
  $handler->display->display_options['fields']['field_course_delivery_1']['id'] = 'field_course_delivery_1';
  $handler->display->display_options['fields']['field_course_delivery_1']['table'] = 'field_data_field_course_delivery';
  $handler->display->display_options['fields']['field_course_delivery_1']['field'] = 'field_course_delivery';
  $handler->display->display_options['fields']['field_course_delivery_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_course_delivery_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nationwide Delivery */
  $handler->display->display_options['fields']['field_nationwide_delivery']['id'] = 'field_nationwide_delivery';
  $handler->display->display_options['fields']['field_nationwide_delivery']['table'] = 'field_data_field_nationwide_delivery';
  $handler->display->display_options['fields']['field_nationwide_delivery']['field'] = 'field_nationwide_delivery';
  $handler->display->display_options['fields']['field_nationwide_delivery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nationwide_delivery']['hide_empty'] = TRUE;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_language']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_duration']['id'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['table'] = 'field_data_field_duration';
  $handler->display->display_options['fields']['field_duration']['field'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['hide_empty'] = TRUE;
  /* Field: Content: Guided Learning Hours */
  $handler->display->display_options['fields']['field_guided_learning_hours']['id'] = 'field_guided_learning_hours';
  $handler->display->display_options['fields']['field_guided_learning_hours']['table'] = 'field_data_field_guided_learning_hours';
  $handler->display->display_options['fields']['field_guided_learning_hours']['field'] = 'field_guided_learning_hours';
  $handler->display->display_options['fields']['field_guided_learning_hours']['label'] = 'Guided learning hours';
  $handler->display->display_options['fields']['field_guided_learning_hours']['hide_empty'] = TRUE;
  /* Field: Content: Min number of learners */
  $handler->display->display_options['fields']['field_learner_number_minimum']['id'] = 'field_learner_number_minimum';
  $handler->display->display_options['fields']['field_learner_number_minimum']['table'] = 'field_data_field_learner_number_minimum';
  $handler->display->display_options['fields']['field_learner_number_minimum']['field'] = 'field_learner_number_minimum';
  $handler->display->display_options['fields']['field_learner_number_minimum']['label'] = 'Minimum number of learners';
  $handler->display->display_options['fields']['field_learner_number_minimum']['hide_empty'] = TRUE;
  /* Field: Content: Max number of learners */
  $handler->display->display_options['fields']['field_learner_number_maximum']['id'] = 'field_learner_number_maximum';
  $handler->display->display_options['fields']['field_learner_number_maximum']['table'] = 'field_data_field_learner_number_maximum';
  $handler->display->display_options['fields']['field_learner_number_maximum']['field'] = 'field_learner_number_maximum';
  $handler->display->display_options['fields']['field_learner_number_maximum']['label'] = 'Maximum number of learners';
  $handler->display->display_options['fields']['field_learner_number_maximum']['hide_empty'] = TRUE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
    'lantra_awards_course' => 'lantra_awards_course',
  );
  $handler->display->display_options['path'] = 'learnersview/%';

  /* Display: Print PDF - Learners View */
  $handler = $view->new_display('block', 'Print PDF - Learners View', 'print_pdf_learners');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Print PDF';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'learnerspdf/[nid]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Print PDF - Learners';

  /* Display: Course block learners view */
  $handler = $view->new_display('block', 'Course block learners view', 'block_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'left-col-buttons';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Provider Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Provider Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Find providers';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'provider-search/[nid]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Back to search */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Back to search';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Back to search';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'coursesearch';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: New search */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'New search';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'New search';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'coursesearch/full_text_search=';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Print PDF */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Print PDF';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Print PDF';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'learnerspdf/[nid]';
  $handler->display->display_options['fields']['nothing_3']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_class'] = 'block-button';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_page_no_hero_image' => 'basic_page_no_hero_image',
    'page' => 'page',
  );
  $translatables['support_views'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Find providers'),
    t('<A HREF="javascript:javascript:history.go(-1)">Back to search</A>'),
    t('New search'),
    t('Title'),
    t('All'),
    t('Course block'),
    t('Back to search'),
    t('Print PDF'),
    t('Provider block'),
    t('Back to providers search'),
    t('Title and Icons'),
    t('Displays course title and icons on \'Course Details\' page.'),
    t('Qualification Level'),
    t('Course Type'),
    t('<div class="course-icon-image">[field_icon_1]</div><div class="course-icon-image">[field_icon]</div>'),
    t('Learner\'s view'),
    t('Shows the \'Learners version of a given node\'.'),
    t('Product code'),
    t('Summary'),
    t('Target audience'),
    t('Course description'),
    t('Product objectives'),
    t('Product purpose'),
    t('Course / product type'),
    t('English qualification level'),
    t('Scottish qualification level'),
    t('Assessment type'),
    t('Course / product delivery'),
    t('Nationwide Delivery'),
    t('Language'),
    t('Duration'),
    t('Guided learning hours'),
    t('Minimum number of learners'),
    t('Maximum number of learners'),
    t('Category'),
    t('Learners pdf view'),
    t('<h1 class="pdf-title">[title]</h1>'),
    t('<p class="pdf-label">Product code:</p><p class="pdf-field">[field_product_code]</p> '),
    t('<p class="pdf-label">Summary:</p><p class="pdf-field">[field_summary]</p> '),
    t('<p class="pdf-label">Target Audience:</p><p class="pdf-field">[field_target_audience]</p> '),
    t('<p class="pdf-label">Description:</p><p class="pdf-field">[field_description]</p> '),
    t('<p class="pdf-label">Product objectives:</p><p class="pdf-field">[field_project_objectives]</p> '),
    t('<p class="pdf-label">Course / product type:</p><p class="pdf-field">[field_course_type]</p>'),
    t('<p class="pdf-label">Qualification level:</p><pclass="pdf-field">[field_qualification_level]</p>'),
    t('<p class="pdf-label">Scottish Qualification:</p><p class="pdf-field">[field_scottish_qualification]</p> '),
    t('<p class="pdf-label">Course delivery:</p><p class="pdf-field">[field_course_delivery]</p> '),
    t('<p class="pdf-label">Language:</p><p class="pdf-field">[field_language]</p> '),
    t('<p class="pdf-label">Duration:</p><p class="pdf-field">[field_duration]</p> '),
    t('<p class="pdf-label">Min number of learners:</p><p class="pdf-field">[field_learner_number_minimum]</p> '),
    t('<p class="pdf-label">Max number of learners:</p><p class="pdf-field">[field_learner_number_maximum]</p>'),
    t('<p class="pdf-label">Category:</p><p class="pdf-field">[field_category]</p> '),
    t('<p class="pdf-label">Assessment type:</p><p class="pdf-field">[field_assessment_type]</p> '),
    t('<p class="pdf-label">Guided learning hours:</p><p class="pdf-field">[field_guided_learning_hours]</p> '),
    t('<p class="pdf-label">Nationwide:</p><p class="pdf-field">[field_nationwide_delivery]</p> '),
    t('<p class="pdf-label">Product purpose:</p><p class="pdf-field">[field_product_purpose]</p> '),
    t('<div class="pdf-title">[title]</div>
<div>[field_product_code]<p></p>
[field_summary]<p></p>
[field_target_audience]<p></p>
[field_description]<p></p>
[field_course_type]<p></p>
[field_qualification_level]<p></p>
[field_scottish_qualification]<p></p> 
[field_course_delivery]<p></p> 
[field_language]<p></p> 
[field_duration]<p></p> 
[field_learner_number_minimum]<p></p> 
[field_learner_number_maximum]<p></p>
[field_category]<p></p>
[field_assessment_type]<p></p> 
[field_guided_learning_hours]<p></p> 
[field_nationwide_delivery]<p></p> 
[field_product_purpose]<p></p>
[field_additional_details]</div>'),
    t('Business Link'),
    t('Providers View Link'),
    t('Providers view'),
    t('Learners View Link'),
    t('Learners view'),
    t('Local Icon'),
    t('National Icon'),
    t('Round local Icon'),
    t('Round national Icon'),
    t('Print PDF - Learners View'),
    t('Print PDF - Learners'),
    t('Course block learners view'),
  );
  $export['support_views'] = $view;

  return $export;
}
