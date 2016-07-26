<?php
/**
 * @file
 * lantra_business_search.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function lantra_business_search_default_search_api_index() {
  $items = array();
  $items['business_profiles'] = entity_import('search_api_index', '{
    "name" : "Business Profile Index",
    "machine_name" : "business_profiles",
    "description" : "Index of business profiles for Provider Search.",
    "server" : "acquia_solr",
    "item_type" : "profile2",
    "options" : {
      "datasource" : { "bundles" : [ "business_profile" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_address:administrative_area" : { "type" : "text" },
        "field_address:dependent_locality" : { "type" : "text" },
        "field_address:locality" : { "type" : "text" },
        "field_address:postal_code" : { "type" : "text" },
        "field_address:premise" : { "type" : "text" },
        "field_address:sub_administrative_area" : { "type" : "text" },
        "field_address:sub_premise" : { "type" : "text" },
        "field_address:thoroughfare" : { "type" : "text" },
        "field_business_classification" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_business_name" : { "type" : "text" },
        "field_description:value" : { "type" : "text" },
        "field_industry" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_region" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_summary:value" : { "type" : "text" },
        "field_telephone" : { "type" : "text" },
        "flag_business_moderation" : { "type" : "boolean" },
        "flag_dev_flag" : { "type" : "boolean" },
        "flag_ready_for_approval" : { "type" : "boolean" },
        "flag_reject_business" : { "type" : "boolean" },
        "search_api_aggregation_1" : { "type" : "string" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_add_combined" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "account" } },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Business name search",
                "type" : "fulltext",
                "fields" : [ "field_business_name" ],
                "description" : "A Fulltext aggregation of the following fields: Business name."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_telephone" : true,
              "field_business_name" : true,
              "field_address:administrative_area" : true,
              "field_address:sub_administrative_area" : true,
              "field_address:locality" : true,
              "field_address:dependent_locality" : true,
              "field_address:postal_code" : true,
              "field_address:thoroughfare" : true,
              "field_address:premise" : true,
              "field_address:sub_premise" : true,
              "field_summary:value" : true,
              "field_description:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_telephone" : true,
              "field_business_name" : true,
              "field_address:administrative_area" : true,
              "field_address:sub_administrative_area" : true,
              "field_address:locality" : true,
              "field_address:dependent_locality" : true,
              "field_address:postal_code" : true,
              "field_address:thoroughfare" : true,
              "field_address:premise" : true,
              "field_address:sub_premise" : true,
              "field_summary:value" : true,
              "field_description:value" : true
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
              "field_telephone" : true,
              "field_business_name" : true,
              "field_address:administrative_area" : true,
              "field_address:sub_administrative_area" : true,
              "field_address:locality" : true,
              "field_address:dependent_locality" : true,
              "field_address:postal_code" : true,
              "field_address:thoroughfare" : true,
              "field_address:premise" : true,
              "field_address:sub_premise" : true,
              "field_summary:value" : true,
              "field_description:value" : true
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
              "field_telephone" : true,
              "field_business_name" : true,
              "field_address:administrative_area" : true,
              "field_address:sub_administrative_area" : true,
              "field_address:locality" : true,
              "field_address:dependent_locality" : true,
              "field_address:postal_code" : true,
              "field_address:thoroughfare" : true,
              "field_address:premise" : true,
              "field_address:sub_premise" : true,
              "field_summary:value" : true,
              "field_description:value" : true
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
