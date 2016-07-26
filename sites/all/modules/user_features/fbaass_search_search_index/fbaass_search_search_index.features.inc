<?php
/**
 * @file
 * fbaass_search_search_index.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fbaass_search_search_index_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function fbaass_search_search_index_default_search_api_index() {
  $items = array();
  $items['fbaass_search_index'] = entity_import('search_api_index', '{
    "name" : "FBAASS Search Index",
    "machine_name" : "fbaass_search_index",
    "description" : "FBAASS Search Index",
    "server" : "db_index",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "fbaass" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_area_of_expertise" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_email" : { "type" : "text" },
        "field_fbaass_county" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_forenames" : { "type" : "text" },
        "field_postcode" : { "type" : "text" },
        "field_region" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_surname" : { "type" : "text" },
        "field_telephone" : { "type" : "text" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_combined" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_email" : true,
              "field_telephone" : true,
              "field_postcode" : true,
              "field_forenames" : true,
              "field_surname" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_email" : true,
              "field_telephone" : true,
              "field_postcode" : true,
              "field_forenames" : true,
              "field_surname" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_email" : true,
              "field_telephone" : true,
              "field_postcode" : true,
              "field_forenames" : true,
              "field_surname" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_email" : true,
              "field_telephone" : true,
              "field_postcode" : true,
              "field_forenames" : true,
              "field_surname" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function fbaass_search_search_index_default_search_api_sort() {
  $items = array();
  $items['fbaass_search_index__search_api_combined_1'] = entity_import('search_api_sort', '{
    "index_id" : "fbaass_search_index",
    "field" : "search_api_combined_1",
    "name" : "Postcode Sort",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "fbaass_search_index__search_api_combined_1",
    "default_sort" : "1",
    "default_sort_no_terms" : "1",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_combined_1" },
    "rdf_mapping" : []
  }');
  return $items;
}
