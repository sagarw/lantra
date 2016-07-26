
<!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->
<!--[if lt IE 9]>
<script src="https://oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js"></script>
<script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
<![endif]-->
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

<div class="centre_port clearfix">
	<section class="course_search_main">
		<div class="container">
			<div class="row">
				<div class="col-lg-6 col-md-5 col-sm-4 col-xs-12 list_head">
					<!--<div class="title-row">-->
					<h1><?php print drupal_get_title(); ?></h1>
				</div>
			</div>
			<div class="row">
				<div class="search">
					<?php 
						//print render($title_suffix); 
						//print render($page['search']);
					?>
				</div>
			</div>
		</div>
	</section>
	<section class="list_view">
		<div class="container">
			<div class="col-lg-9 col-md-8 content_left">
				<div class="row">
				<section class="list_view_head_date clearfix">
					<div class="col-lg-6 col-md-5 col-sm-4 col-xs-12 list_head">
						<div class="row">
							<h3>
								<?php //print drupal_get_title(); ?>
							</h3>
						</div>
					</div>
					<div class="col-lg-5 col-md-7 col-sm-8 col-xs-12 pull-right short_bydate">
					</div>
				</section>
				</div>
			</div>
		</div>
	</section>
</div>



<section class="list_view">
	<div class="container">
		<div class="col-lg-9 col-md-8 content_right">
		  <div class="row">


		    <section class="content_change">

		    	<div class="row">
				<div class="search">
					<?php 
						print render($title_suffix); 
						print render($page['search']);
					?>
				</div>
			</div>
		      	<div class="list">
		    
				<?php 
				  print render($title_suffix); 
		          print render($page['content']);
		        ?>
		          	<h1>Jos test add page</h1>
		   		</div>
		    </section>
		  </div>
		</div>

		<div class="col-lg-3 col-md-4 sidebar">
		  <div class="row">
		    <div class="side_box">
		        <?php if ($messages): print $messages; endif; ?>
				<?php 
					print render($title_suffix); 
				 	print render($page['right']);
				?>
		    </div>
		  </div>
		</div>
	</div>
</section>


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
