<?php
/**
 * @file
 * node_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function node_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Editor' => 'Editor',
      'Premium Training Provider' => 'Premium Training Provider',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Editor' => 'Editor',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create basic_page_no_hero_image content'.
  $permissions['create basic_page_no_hero_image content'] = array(
    'name' => 'create basic_page_no_hero_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create business content'.
  $permissions['create business content'] = array(
    'name' => 'create business content',
    'roles' => array(
      'Business Owner' => 'Business Owner',
      'Editor' => 'Editor',
      'FBAASS Administrator' => 'FBAASS Administrator',
      'LA Assessor' => 'LA Assessor',
      'LA EQA' => 'LA EQA',
      'LA Instructor' => 'LA Instructor',
      'LA Provider' => 'LA Provider',
      'Learner' => 'Learner',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'Training Provider' => 'Training Provider',
      'administrator' => 'administrator',
      'premium account' => 'premium account',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create career_profile content'.
  $permissions['create career_profile content'] = array(
    'name' => 'create career_profile content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create case_study content'.
  $permissions['create case_study content'] = array(
    'name' => 'create case_study content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create course content'.
  $permissions['create course content'] = array(
    'name' => 'create course content',
    'roles' => array(
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Training Provider' => 'Training Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dev_pages content'.
  $permissions['create dev_pages content'] = array(
    'name' => 'create dev_pages content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create faq content'.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fbaass content'.
  $permissions['create fbaass content'] = array(
    'name' => 'create fbaass content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create file content'.
  $permissions['create file content'] = array(
    'name' => 'create file content',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create get_advice_article content'.
  $permissions['create get_advice_article content'] = array(
    'name' => 'create get_advice_article content',
    'roles' => array(
      'LA Instructor' => 'LA Instructor',
      'Learner' => 'Learner',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Training Provider' => 'Training Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create job content'.
  $permissions['create job content'] = array(
    'name' => 'create job content',
    'roles' => array(
      'LA Provider' => 'LA Provider',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create la_course content'.
  $permissions['create la_course content'] = array(
    'name' => 'create la_course content',
    'roles' => array(
      'Editor' => 'Editor',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create la_landing content'.
  $permissions['create la_landing content'] = array(
    'name' => 'create la_landing content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create landing_page content'.
  $permissions['create landing_page content'] = array(
    'name' => 'create landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news_item content'.
  $permissions['create news_item content'] = array(
    'name' => 'create news_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel content'.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create pdf_container content'.
  $permissions['create pdf_container content'] = array(
    'name' => 'create pdf_container content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sector_schemes_cards content'.
  $permissions['create sector_schemes_cards content'] = array(
    'name' => 'create sector_schemes_cards content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create slideshow_image content'.
  $permissions['create slideshow_image content'] = array(
    'name' => 'create slideshow_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create supplemental_content content'.
  $permissions['create supplemental_content content'] = array(
    'name' => 'create supplemental_content content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any basic_page_no_hero_image content'.
  $permissions['delete any basic_page_no_hero_image content'] = array(
    'name' => 'delete any basic_page_no_hero_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any business content'.
  $permissions['delete any business content'] = array(
    'name' => 'delete any business content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any career_profile content'.
  $permissions['delete any career_profile content'] = array(
    'name' => 'delete any career_profile content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any case_study content'.
  $permissions['delete any case_study content'] = array(
    'name' => 'delete any case_study content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any course content'.
  $permissions['delete any course content'] = array(
    'name' => 'delete any course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dev_pages content'.
  $permissions['delete any dev_pages content'] = array(
    'name' => 'delete any dev_pages content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq content'.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fbaass content'.
  $permissions['delete any fbaass content'] = array(
    'name' => 'delete any fbaass content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any file content'.
  $permissions['delete any file content'] = array(
    'name' => 'delete any file content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any get_advice_article content'.
  $permissions['delete any get_advice_article content'] = array(
    'name' => 'delete any get_advice_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any job content'.
  $permissions['delete any job content'] = array(
    'name' => 'delete any job content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any la_course content'.
  $permissions['delete any la_course content'] = array(
    'name' => 'delete any la_course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any la_landing content'.
  $permissions['delete any la_landing content'] = array(
    'name' => 'delete any la_landing content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any landing_page content'.
  $permissions['delete any landing_page content'] = array(
    'name' => 'delete any landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_item content'.
  $permissions['delete any news_item content'] = array(
    'name' => 'delete any news_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel content'.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any pdf_container content'.
  $permissions['delete any pdf_container content'] = array(
    'name' => 'delete any pdf_container content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sector_schemes_cards content'.
  $permissions['delete any sector_schemes_cards content'] = array(
    'name' => 'delete any sector_schemes_cards content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any slideshow_image content'.
  $permissions['delete any slideshow_image content'] = array(
    'name' => 'delete any slideshow_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any supplemental_content content'.
  $permissions['delete any supplemental_content content'] = array(
    'name' => 'delete any supplemental_content content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own basic_page_no_hero_image content'.
  $permissions['delete own basic_page_no_hero_image content'] = array(
    'name' => 'delete own basic_page_no_hero_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own business content'.
  $permissions['delete own business content'] = array(
    'name' => 'delete own business content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own career_profile content'.
  $permissions['delete own career_profile content'] = array(
    'name' => 'delete own career_profile content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own case_study content'.
  $permissions['delete own case_study content'] = array(
    'name' => 'delete own case_study content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own course content'.
  $permissions['delete own course content'] = array(
    'name' => 'delete own course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dev_pages content'.
  $permissions['delete own dev_pages content'] = array(
    'name' => 'delete own dev_pages content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq content'.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fbaass content'.
  $permissions['delete own fbaass content'] = array(
    'name' => 'delete own fbaass content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own file content'.
  $permissions['delete own file content'] = array(
    'name' => 'delete own file content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own get_advice_article content'.
  $permissions['delete own get_advice_article content'] = array(
    'name' => 'delete own get_advice_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job content'.
  $permissions['delete own job content'] = array(
    'name' => 'delete own job content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own la_course content'.
  $permissions['delete own la_course content'] = array(
    'name' => 'delete own la_course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own la_landing content'.
  $permissions['delete own la_landing content'] = array(
    'name' => 'delete own la_landing content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own landing_page content'.
  $permissions['delete own landing_page content'] = array(
    'name' => 'delete own landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_item content'.
  $permissions['delete own news_item content'] = array(
    'name' => 'delete own news_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel content'.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own pdf_container content'.
  $permissions['delete own pdf_container content'] = array(
    'name' => 'delete own pdf_container content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sector_schemes_cards content'.
  $permissions['delete own sector_schemes_cards content'] = array(
    'name' => 'delete own sector_schemes_cards content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own slideshow_image content'.
  $permissions['delete own slideshow_image content'] = array(
    'name' => 'delete own slideshow_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own supplemental_content content'.
  $permissions['delete own supplemental_content content'] = array(
    'name' => 'delete own supplemental_content content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any basic_page_no_hero_image content'.
  $permissions['edit any basic_page_no_hero_image content'] = array(
    'name' => 'edit any basic_page_no_hero_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any business content'.
  $permissions['edit any business content'] = array(
    'name' => 'edit any business content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any career_profile content'.
  $permissions['edit any career_profile content'] = array(
    'name' => 'edit any career_profile content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any case_study content'.
  $permissions['edit any case_study content'] = array(
    'name' => 'edit any case_study content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any course content'.
  $permissions['edit any course content'] = array(
    'name' => 'edit any course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dev_pages content'.
  $permissions['edit any dev_pages content'] = array(
    'name' => 'edit any dev_pages content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any faq content'.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fbaass content'.
  $permissions['edit any fbaass content'] = array(
    'name' => 'edit any fbaass content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any file content'.
  $permissions['edit any file content'] = array(
    'name' => 'edit any file content',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any get_advice_article content'.
  $permissions['edit any get_advice_article content'] = array(
    'name' => 'edit any get_advice_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any job content'.
  $permissions['edit any job content'] = array(
    'name' => 'edit any job content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any la_course content'.
  $permissions['edit any la_course content'] = array(
    'name' => 'edit any la_course content',
    'roles' => array(
      'Editor' => 'Editor',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any la_landing content'.
  $permissions['edit any la_landing content'] = array(
    'name' => 'edit any la_landing content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any landing_page content'.
  $permissions['edit any landing_page content'] = array(
    'name' => 'edit any landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_item content'.
  $permissions['edit any news_item content'] = array(
    'name' => 'edit any news_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel content'.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any pdf_container content'.
  $permissions['edit any pdf_container content'] = array(
    'name' => 'edit any pdf_container content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sector_schemes_cards content'.
  $permissions['edit any sector_schemes_cards content'] = array(
    'name' => 'edit any sector_schemes_cards content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any slideshow_image content'.
  $permissions['edit any slideshow_image content'] = array(
    'name' => 'edit any slideshow_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any supplemental_content content'.
  $permissions['edit any supplemental_content content'] = array(
    'name' => 'edit any supplemental_content content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own basic_page_no_hero_image content'.
  $permissions['edit own basic_page_no_hero_image content'] = array(
    'name' => 'edit own basic_page_no_hero_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own business content'.
  $permissions['edit own business content'] = array(
    'name' => 'edit own business content',
    'roles' => array(
      'Business Owner' => 'Business Owner',
      'Editor' => 'Editor',
      'FBAASS Administrator' => 'FBAASS Administrator',
      'LA Assessor' => 'LA Assessor',
      'LA EQA' => 'LA EQA',
      'LA Instructor' => 'LA Instructor',
      'LA Provider' => 'LA Provider',
      'Learner' => 'Learner',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'Training Provider' => 'Training Provider',
      'administrator' => 'administrator',
      'premium account' => 'premium account',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own career_profile content'.
  $permissions['edit own career_profile content'] = array(
    'name' => 'edit own career_profile content',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own case_study content'.
  $permissions['edit own case_study content'] = array(
    'name' => 'edit own case_study content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own course content'.
  $permissions['edit own course content'] = array(
    'name' => 'edit own course content',
    'roles' => array(
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Training Provider' => 'Training Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dev_pages content'.
  $permissions['edit own dev_pages content'] = array(
    'name' => 'edit own dev_pages content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq content'.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fbaass content'.
  $permissions['edit own fbaass content'] = array(
    'name' => 'edit own fbaass content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own file content'.
  $permissions['edit own file content'] = array(
    'name' => 'edit own file content',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own get_advice_article content'.
  $permissions['edit own get_advice_article content'] = array(
    'name' => 'edit own get_advice_article content',
    'roles' => array(
      'LA Instructor' => 'LA Instructor',
      'Learner' => 'Learner',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Training Provider' => 'Training Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own job content'.
  $permissions['edit own job content'] = array(
    'name' => 'edit own job content',
    'roles' => array(
      'LA Provider' => 'LA Provider',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own la_course content'.
  $permissions['edit own la_course content'] = array(
    'name' => 'edit own la_course content',
    'roles' => array(
      'Editor' => 'Editor',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own la_landing content'.
  $permissions['edit own la_landing content'] = array(
    'name' => 'edit own la_landing content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own landing_page content'.
  $permissions['edit own landing_page content'] = array(
    'name' => 'edit own landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_item content'.
  $permissions['edit own news_item content'] = array(
    'name' => 'edit own news_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel content'.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own pdf_container content'.
  $permissions['edit own pdf_container content'] = array(
    'name' => 'edit own pdf_container content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sector_schemes_cards content'.
  $permissions['edit own sector_schemes_cards content'] = array(
    'name' => 'edit own sector_schemes_cards content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own slideshow_image content'.
  $permissions['edit own slideshow_image content'] = array(
    'name' => 'edit own slideshow_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own supplemental_content content'.
  $permissions['edit own supplemental_content content'] = array(
    'name' => 'edit own supplemental_content content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Editor' => 'Editor',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
