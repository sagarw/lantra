<?php
/**
 * @file
 * premium_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function premium_rules_default_rules_configuration() {
  $items = array();
  $items['rules_disable_premium'] = entity_import('rules_config', '{ "rules_disable_premium" : {
      "LABEL" : "Disable Premium",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Premium" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_presave" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "10" : "10", "11" : "11", "12" : "12" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "account:field-premium-account" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_enable_premium'] = entity_import('rules_config', '{ "rules_enable_premium" : {
      "LABEL" : "Enable Premium",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Premium" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_presave" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "10" : "10", "11" : "11", "12" : "12" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "account:field-premium-account" ], "value" : "1" } }
      ]
    }
  }');
  return $items;
}
