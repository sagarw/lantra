<?php
/**
 * @file
 * endorsement_authorisation.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function endorsement_authorisation_default_rules_configuration() {
  $items = array();
  $items['rules_add_endorsement_to_auth_required'] = entity_import('rules_config', '{ "rules_add_endorsement_to_auth_required" : {
      "LABEL" : "Add Endorsement to auth required",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "LA Courses" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : {
        "node_insert--la_course" : { "bundle" : "la_course" },
        "node_update--la_course" : { "bundle" : "la_course" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-variation-term:tid" ], "value" : "4161" } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Endorsement Created or Updated " } },
        { "flag_flagnode" : {
            "flag" : "requires_approval",
            "node" : [ "node" ],
            "flagging_user" : [ "node:author" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  return $items;
}
