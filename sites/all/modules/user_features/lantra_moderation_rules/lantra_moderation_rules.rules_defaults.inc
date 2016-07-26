<?php
/**
 * @file
 * lantra_moderation_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lantra_moderation_rules_default_rules_configuration() {
  $items = array();
  $items['rules_content_approved'] = entity_import('rules_config', '{ "rules_content_approved" : {
      "LABEL" : "Content Approved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workbench_moderation" ],
      "ON" : { "workbench_moderation_transition_insert" : [] },
      "DO" : []
    }
  }');
  $items['rules_content_rejected'] = entity_import('rules_config', '{ "rules_content_rejected" : {
      "LABEL" : "Content Rejected",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Content Moderation" ],
      "REQUIRES" : [ "revisioning", "rules", "workbench_moderation" ],
      "ON" : { "workbench_moderation_transition_insert" : [] },
      "IF" : [
        { "revisioning_condition_revision_is" : {
            "node" : [ "workbench-moderation-transition:feed-node" ],
            "revision_type" : { "value" : { "2" : "2" } }
          }
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "node",
              "id" : [ "workbench-moderation-transition:feed-node:nid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "entity-fetched:author:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "user_fetched" : "Fetched entity" } }
          }
        },
        { "mail" : {
            "to" : [ "workbench-moderation-transition:to-name" ],
            "subject" : "Lantra website [entity-fetched:content-type] rejection",
            "message" : "Dear [user-fetched:name]\\r\\n\\r\\nYour listing [entity-fetched:title] has been rejected.\\r\\nThe reason for rejection is:\\r\\n[entity-fetched:field-moderation-note]\\r\\n\\r\\nPlease login and review the content\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_la_course_moderation_rejection'] = entity_import('rules_config', '{ "rules_la_course_moderation_rejection" : {
      "LABEL" : "LA Course moderation rejection",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "ON" : { "WorkflowState_update" : [] },
      "DO" : []
    }
  }');
  $items['rules_profile_moderation_flag'] = entity_import('rules_config', '{ "rules_profile_moderation_flag" : {
      "LABEL" : "Profile moderation flag",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Profiles" ],
      "REQUIRES" : [ "rules", "flag", "revisioning" ],
      "ON" : { "revisioning_post_publish" : [] },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "profile2" } }
      ],
      "DO" : [
        { "flag_unflagprofile2" : {
            "flag" : "ready_for_approval",
            "profile2" : [ "user:profile-business-profile" ],
            "flagging_user" : [ "user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  return $items;
}
