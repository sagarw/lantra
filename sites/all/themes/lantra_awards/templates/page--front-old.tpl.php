
<!-- Faveicon -->
<link rel="icon" href="<?php //print $theme_path; ?>/favicon.ico">
<!-- Bootstrap -->
<!-- Google Font - Lato -->
<link href='http://fonts.googleapis.com/css?family=Lato:100,300,400,700,900,100italic,300italic,400italic,700italic,900italic' rel='stylesheet' type='text/css'>
<!--Font Awesome -->
<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css">
<!--<link rel="stylesheet" href="<?php //print $theme_path; ?>/css/font-awesome.css">-->
<!-- Custom Stylesheet -->


<!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->
<!--[if lt IE 9]>
<script src="https://oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js"></script>
<script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
<![endif]-->
</head>
<body>
<!--[if lt IE 7]>
<p class="browsehappy">You are using an <strong>outdated</strong> browser. Please <a href="http://browsehappy.com/">upgrade your browser</a> to improve your experience.</p>
<![endif]-->

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





<!-- Banner Start -->

<section class="banner">
<?php print render($page['slider']); ?>
<div class="container">
<div class="bannerContents">

<!-- Tab -->
<div class="tabMenu">
<div role="tabpanel">
<ul class="nav nav-tabs" role="tablist" id="searchTab">
<li role="presentation" class="active"><a href="#training" aria-controls="training" role="tab" data-toggle="tab">Lantra Training &amp; Qualifications</a></li>
<li role="presentation"><a href="#careers" aria-controls="careers" role="tab" data-toggle="tab">Careers</a></li>
<li role="presentation"><a href="#businessSupport" aria-controls="business support" role="tab" data-toggle="tab">Business Support</a></li>
</ul>
<div class="tab-content">
<div role="tabpanel" class="tab-pane active training" id="training">
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. </br>Nullam eu mollis lacus. Nulla ac semper est.</p>
<ul>
<li><input name="" type="text" class="form-control" placeholder="Key Work | Post Code | Location"></li>
<li><select name="" class="form-control" ><option>All of United Kingdom</option></select></li>
<li><select name="" class="form-control" ><option>All Industries</option></select></li>
<li class="text-right"><a href="#" class="advanceSearch">Advance Search</a><input name="" type="submit" class="btn btn-default findJobs" value="Find Jobs"></li>
</ul>
</div>
<div role="tabpanel" class="tab-pane" id="careers"><p>Careers</p></div>
<div role="tabpanel" class="tab-pane" id="businessSupport"><p>Business Support</p></div>
</div>
</div>
</div>

</div>
</div>
</section>
<!-- Banner End -->








<!-- Content Area Start -->
<section class="contentCntr">
	<div class="container">
		<div class="indexArticles">
			<div class="row">
				<div class="col-lg-3 col-md-6 col-sm-6 col-cs-12">
					<article class="recentJobs">
						<?php
							$blockObject = block_load('views', 'home_page_views-recent_jobs');
							$block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
							$output = drupal_render($block);
							print $output;
						?>
					</article class="recentNews">
				</div>
				<div class="col-lg-3 col-md-6 col-sm-6 col-cs-12">
					<article>
					<?php
						$blockObject = block_load('views', 'home_page_views-recent_news');
						$block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
						$output = drupal_render($block);
						print $output;
					?>
					</article>
				</div>
				<div class="col-lg-6 col-md-12 col-sm-12 col-cs-12">
					<article class="topJobCategories">
						<?php
							$blockObject = block_load('views', 'home_page_views-top_cat');
							$block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
							$output = drupal_render($block);
							print $output;
						?>
					</article>
				</div>
			</div>
		</div>
	</div>
</section>
<!-- Content Area End -->
<div class="homecontent">
<?php 
	//print render($page['content']);
?>
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

