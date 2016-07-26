<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>


<!-- Header Start -->
<header>
	<div class="container clearfix">
		<div class="logo pull-left">
			<?php if ($logo): ?>
				<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
					<img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
				</a>
			<?php endif; ?>
		</div> <!-- End -->
		<div class="headerRightColumn pull-right clearfix">
			<div class="userAccessButtons pull-right">
				<div class="top-left">
					<div class="btnsTop clearfix">
						<span class="lgnAndMyPrl">
							<?php print render($page['rightheader']); ?>
						</span><!-- End -->
					</div> <!-- End -->
				</div> <!-- End -->
				<div class="top-right">
					<div class="btnsBottom clearfix">
					</div> <!-- End -->
				</div> <!-- End -->
			</div> <!--End userAccessButtons-->
			<div class="regionAndSearch pull-right">
				<div class="lantraSearch">
					<div class="input-group">
						<!--<input type="text" class="form-control" placeholder="Search">
						<span class="input-group-btn jotest">
							<?php //print $search_box; ?>
						</span>-->
					</div> <!-- End input-group -->
				</div> <!-- End lantraSearch -->
			</div> <!-- End regionAndSearch -->
		</div> <!-- headerRightColumn -->
	</div> <!-- End container -->
	<div class="container regionalmenu">
		<?php print render($page['regional_menu']); ?>
	</div>
</header> <!-- Header End -->



<!-- Nav Start -->
<nav class="navbar navbar-default mainNav">
	<div class="container">
		<div class="container-fluid">
			<div class="navbar-header">
			</div>
			<div id="navbar" class="navbar-collapse collapse">
				<?php print render($page['main_menu']); ?>
			</div>
		</div>
	</div>
</nav>
<!-- Nav End -->



<div id="content" class="column">
	<div class="container">
		<div class="row">
		    <div class="col-lg-6 col-md-5 col-sm-4 col-xs-12 list_head">
				<div class="row">
				    <?php //print render($title_prefix); ?>
					<h3 class="title" id="page-title"><?php //print $title; ?></h3>
					<?php //print render($title_suffix); ?>
				</div>
			</div>
		</div>


		 <div class="section">
	        <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
	        <a id="main-content"></a>
	        <?php if ($tabs): ?>
	        	<div class="tabs"><?php print render($tabs); ?></div>
	        <?php endif; ?>
	        <?php print render($page['help']); ?>
	        <?php if ($action_links): ?>
	        	<ul class="action-links"><?php print render($action_links); ?></ul>
	        <?php endif; ?>
	        <?php print $feed_icons; ?>
		</div>
	</div> <!-- /.section, /#content -->
</div>


<section class="list_view">
	<div class="container">
		<div class="col-lg-3 col-md-4 sidebar_left">
		  <div class="row">
		    <div class="side_box">
				<?php 
					print render($title_suffix); 
				 	print render($page['left']);
				?>
		    </div>
		  </div>
		</div>

	<div class="col-lg-9 col-md-8 content_right">

<div class="row">
		<div class="row">
			<section class="content_change-left">
			<?php //print render($title_prefix); ?>
					<h3 class="title" id="page-title"><?php //print $title; ?></h3>
					<?php //print render($title_suffix); ?>
					<?php if ($messages): print $messages; endif; ?>
			     <div class="list">
					<?php 
						print render($title_suffix);
					//	print render(field_view_field('node', $node, 'field_surname')); 
 					//	print render($content['field_surname']);
                        print render($page['content']);
					?>
			   	</div>
			</section>
		</div>
	</div>
	</div>



</section>

</div>


<!-- Footer Start -->
<footer>
	<div id="footer">
		<div class="container">
			<div class="section">
				  <?php print render($page['footer']); ?>
			</div>
		</div>
	</div> 
<div class="footer">
	<div class="container">
		<div class="row">
			<div class="col-lg-3 col-md-6 col-sm-6 col-xs-6 footerColumn">
				<div class="footerLinks clearfix">
				 <?php print render($page['leftfooter']); ?>
				</div>
			</div>
			<div class="col-lg-3 col-md-6 col-sm-6 col-xs-6 footerColumn">
				<div class="footerSocialMedia">
				<?php print render($page['middleleftfooter']); ?>
				</div>
			</div>
			<div class="col-lg-3 col-md-6 col-sm-6 col-xs-6 footerColumn">
				  <?php print render($page['middlerightfooter']); ?>
			</div>
			<div class="col-lg-3 col-md-6 col-sm-6 col-xs-6 footerColumn">
				<?php print render($page['rightfooter']); ?>
			</div>
		</div>
	</div>
	</div>
</footer>
<!-- Footer End -->


</body>
</html>




