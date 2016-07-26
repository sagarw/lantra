<?php
/**
 * @file
 * la_course_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function la_course_rules_default_rules_configuration() {
  $items = array();
  $items['la_course_rules_decline_la_course_local_approval'] = entity_import('rules_config', '{ "la_course_rules_decline_la_course_local_approval" : {
      "LABEL" : "Decline LA Course Local Approval",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "LA Courses" ],
      "REQUIRES" : [ "flag" ],
      "ON" : { "flag_unflagged_la_course_local_pending_approval" : [] },
      "DO" : [
        { "flag_fetch_users_node" : {
            "USING" : {
              "flag" : "la_course_local_pending_approval",
              "node" : [ "flagged-node" ]
            },
            "PROVIDE" : { "users" : { "users" : "Users who flagged" } }
          }
        },
        { "flag_unflagnode" : {
            "flag" : "locally",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['la_course_rules_la_course_nationwide_removed'] = entity_import('rules_config', '{ "la_course_rules_la_course_nationwide_removed" : {
      "LABEL" : "LA Course Nationwide Removed",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "LA Courses" ],
      "REQUIRES" : [ "flag" ],
      "ON" : { "flag_unflagged_nationwide" : [] },
      "DO" : [
        { "flag_unflagnode" : {
            "flag" : "la_course_pending_approval",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : "1"
          }
        },
        { "flag_unflagflagging" : {
            "flag" : "la_course_approved",
            "flagging" : [ "flagging" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['la_course_rules_la_course_provider_approval_local'] = entity_import('rules_config', '{ "la_course_rules_la_course_provider_approval_local" : {
      "LABEL" : "LA Course Provider Approval (Local)",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "OWNER" : "rules",
      "TAGS" : [ "LA Courses" ],
      "REQUIRES" : [ "flag", "rules" ],
      "ON" : { "flag_flagged_locally" : [] },
      "IF" : [
        { "flag_flagged_node" : {
            "flag" : "requires_approval",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ]
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Local flag event triggered" } },
        { "flag_flagnode" : {
            "flag" : "la_course_local_pending_approval",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_customised_la_course_sync'] = entity_import('rules_config', '{ "rules_customised_la_course_sync" : {
      "LABEL" : "Customised LA Course Sync",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "LA Courses" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--la_course" : { "bundle" : "la_course" } },
      "DO" : []
    }
  }');
  $items['rules_decline_la_course_approval'] = entity_import('rules_config', '{ "rules_decline_la_course_approval" : {
      "LABEL" : "Decline LA Course Nationwide Approval",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "LA Courses" ],
      "REQUIRES" : [ "flag" ],
      "ON" : { "flag_unflagged_la_course_pending_approval" : [] },
      "DO" : [
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "la_course_pending_approval", "node" : [ "flagged-node" ] },
            "PROVIDE" : { "users" : { "users" : "Users who flagged" } }
          }
        },
        { "flag_unflagnode" : {
            "flag" : "nationwide",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_flagged_as_nationwide'] = entity_import('rules_config', '{ "rules_flagged_as_nationwide" : {
      "LABEL" : "Flagged as nationwide",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-3",
      "OWNER" : "rules",
      "TAGS" : [ "Profile Flags" ],
      "REQUIRES" : [ "flag" ],
      "ON" : { "flag_flagged_nationwide" : [] },
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "locally",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_la_course_provider_approval'] = entity_import('rules_config', '{ "rules_la_course_provider_approval" : {
      "LABEL" : "LA Course Provider Approval (Nationwide)",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "OWNER" : "rules",
      "TAGS" : [ "LA Courses" ],
      "REQUIRES" : [ "flag", "rules" ],
      "ON" : { "flag_flagged_nationwide" : [] },
      "IF" : [
        { "flag_flagged_node" : {
            "flag" : "requires_approval",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ]
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Flag event triggered" } },
        { "flag_flagnode" : {
            "flag" : "la_course_pending_approval",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_la_course_removed'] = entity_import('rules_config', '{ "rules_la_course_removed" : {
      "LABEL" : "LA Course Removed",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "LA Courses" ],
      "REQUIRES" : [ "flag" ],
      "ON" : { "flag_unflagged_locally" : [] },
      "DO" : [
        { "flag_unflagnode" : {
            "flag" : "la_course_local_pending_approval",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : "1"
          }
        },
        { "flag_unflagflagging" : {
            "flag" : "la_course_local_approved",
            "flagging" : [ "flagging" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_nationwide_or_locally_un_flagged'] = entity_import('rules_config', '{ "rules_nationwide_or_locally_un_flagged" : {
      "LABEL" : "Nationwide or Locally Un-flagged",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "LA Courses" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_unflagged_locally" : [], "flag_unflagged_nationwide" : [] },
      "IF" : [
        { "NOT data_is" : { "data" : [ "user" ], "value" : [ "flagged-node:author" ] } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "flagged-node:author:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "mail" : {
            "to" : "[flagged-node:author]",
            "subject" : "Your course application",
            "message" : "Your application to add a course to your portfolio has been declined.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_profile_rejection_mail'] = entity_import('rules_config', '{ "rules_profile_rejection_mail" : {
      "LABEL" : "Profile rejection mail",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Profile Flags" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_reject_business" : [] },
      "DO" : [
        { "mail" : {
            "to" : [ "flagged-profile2:user:mail" ],
            "subject" : "Your account requires attention",
            "message" : "The updates to your profile have been rejected by the editorial team, please log into your account and address the issues raised in the notes.",
            "language" : [ "flagging-user:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_profile_update'] = entity_import('rules_config', '{ "rules_profile_update" : {
      "LABEL" : "Profile update",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "User profile update" ],
      "REQUIRES" : [ "flag", "profile2" ],
      "ON" : { "profile2_update" : [] },
      "DO" : [
        { "flag_flagprofile2" : {
            "flag" : "business_moderation",
            "profile2" : [ "profile2" ],
            "flagging_user" : [ "profile2:user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_redirect_masquerading_user'] = entity_import('rules_config', '{ "rules_redirect_masquerading_user" : {
      "LABEL" : "Redirect masquerading user",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "masquerade" ],
      "REQUIRES" : [ "masquerade_rules", "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "NOT masquerade_rules_is_current_user_masquerading" : [] },
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "8" : "8" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : [ "site:current-page:url" ] } } ]
    }
  }');
  $items['rules_reject_profile'] = entity_import('rules_config', '{ "rules_reject_profile" : {
      "LABEL" : "Reject profile",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Profile Flags" ],
      "REQUIRES" : [ "flag" ],
      "ON" : { "flag_unflagged_business_moderation" : [] },
      "DO" : [
        { "flag_unflagprofile2" : {
            "flag" : "ready_for_approval",
            "profile2" : [ "flagged-profile2" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_reject_profile_cloned_'] = entity_import('rules_config', '{ "rules_reject_profile_cloned_" : {
      "LABEL" : "Reject profile (cloned)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Profile Flags" ],
      "REQUIRES" : [ "flag", "profile2" ],
      "ON" : { "profile2_update" : [] },
      "DO" : [
        { "flag_unflagprofile2" : {
            "flag" : "business_moderation",
            "profile2" : [ "profile2" ],
            "flagging_user" : [ "profile2:user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_service_update_message'] = entity_import('rules_config', '{ "rules_service_update_message" : {
      "LABEL" : "Service Update Message",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Service Update" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view" : [], "init" : [] },
      "DO" : [
        { "drupal_message" : {
            "message" : "\\u003Cstrong\\u003EUpgrading our services to you\\u003C\\/strong\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nThe Lantra customer portal will be closed for maintenance from 5pm on Friday 19 December until the morning of Monday 21 December. \\r\\nDuring this time you will be unable to access our customer portal should you need to register learners. The last date for late orders of training materials to guarantee delivery before Christmas is 1pm on 18 December.\\r\\n\\u003Cbr\\u003E\\r\\nWe apologise for the inconvenience caused whilst this essential upgrading work is undertaken.",
            "type" : "warning",
            "repeat" : "0"
          }
        }
      ]
    }
  }');
  $items['rules_update_la_course_endorsement'] = entity_import('rules_config', '{ "rules_update_la_course_endorsement" : {
      "LABEL" : "Update LA Course Endorsement",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "LA Courses" ],
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--la_course" : { "bundle" : "la_course" },
        "node_update--la_course" : { "bundle" : "la_course" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_clone" } },
        { "entity_has_field" : { "entity" : [ "node:field-clone" ], "field" : "field_summary" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "node",
              "id" : [ "node:field-clone:nid" ],
              "revision_id" : [ "" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-summary" ],
            "value" : { "value" : {
                "value" : "[entity-fetched:field-summary-introduction]",
                "format" : "popup_tags"
              }
            }
          }
        },
        { "drupal_message" : { "message" : [ "entity-fetched:title" ] } }
      ]
    }
  }');
  return $items;
}
