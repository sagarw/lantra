<?php
/**
 * @file
 * job_creation_redirect.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function job_creation_redirect_default_rules_configuration() {
  $items = array();
  $items['rules_job_creation_redirect'] = entity_import('rules_config', '{ "rules_job_creation_redirect" : {
      "LABEL" : "Job creation redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Jobs" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--job" : { "bundle" : "job" } },
      "DO" : [ { "redirect" : { "url" : "user\\/mylistings" } } ]
    }
  }');
  return $items;
}
