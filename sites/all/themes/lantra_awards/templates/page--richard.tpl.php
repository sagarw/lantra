
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
<div class="logo pull-left"><a href="#"><img src="<?php print $theme_path; ?>/images/lantra_logo.png" alt="" /></a></div>
<div class="headerRightColumn pull-right clearfix">


<div class="userAccessButtons pull-right">
<div class="top-left">
<div class="btnsTop clearfix">
<span class="lgnAndMyPrl">
<?php
  $blockObject = block_load('menu', 'user-menu');
  $block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
  $output = drupal_render($block);
  print $output;
?>
</span>
</div>

<div class="btnsBottom clearfix">
<span class="chkut"><a href="#"><i class="fa fa-cart-plus"></i>Checkout</a></span>
</div>
</div>
<div class="top-right">
<div class="btnsBottom clearfix">
<?php
  $blockObject = block_load('block', '3');
  $block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
  $output = drupal_render($block);
  print $output;
?>
</div>
</div>
</div>



<div class="regionAndSearch pull-right">
<?php
	$blockObject = block_load('menu', 'menu-header-menu');
	$block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
	$output = drupal_render($block);
	print $output;
?>


<div class="lantraSearch">
<div class="input-group">
<input type="text" class="form-control" placeholder="Search">

<span class="input-group-btn jotest">
	<?php //print $search_box; ?>
</span>
	


</div>
</div>
</div>
</div>
</div>
</header>
<!-- Header End -->

<!-- Nav Start -->
<nav class="navbar navbar-default mainNav">
<div class="container">
<div class="container-fluid">
<div class="navbar-header">
<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navbar" aria-expanded="false" aria-controls="navbar">
<span class="sr-only">Toggle navigation</span>
<span class="icon-bar"></span>
<span class="icon-bar"></span>
<span class="icon-bar"></span>
</button>
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
<div class="row"><h3><?php print $title; ?></div>
</div>
</div>
</div>
</section>
<section class="list_view">
<div class="container">
<div class="col-lg-3 col-md-4 sidebar">
<div class="row">
<?php print render($page['secondary_menu']); ?>
</div>
</div>
<div class="col-lg-9 col-md-8 content_right">
<div class="row">
<section class="content_change">
<div class="list">
<?php print render($page['content']);?>
</div>
</section>
</div>
</div>
</div>
</section>
</div>


<!-- Footer Start -->
<footer class="footer">
<div class="container">
<div class="row">
<div class="col-lg-3 col-md-6 col-sm-6 col-xs-6 footerColumn">
<div class="footerLinks clearfix">
<a href="#">About us</a>
<a href="#">Privacy Policy</a>
<a href="#">Legal Information</a>
<a href="#">Terms and Conditions</a>
	<?php print render($page['footer_menu']); ?>
</div>
</div>
<div class="col-lg-3 col-md-6 col-sm-6 col-xs-6 footerColumn">
<div class="footerSocialMedia">
<h5>connect with social media</h5>
<div class="socialIcons clearfix">
<a href="#" class="twitter"><i class="fa fa-twitter"></i></a>
<a href="#" class="facebook"><i class="fa fa-facebook"></i></a>
<a href="#" class="googlePlus"><i class="fa fa-google-plus"></i></a>
<a href="#" class="linkedin"><i class="fa fa-linkedin"></i></a>
<a href="#" class="pinterest"><i class="fa fa-pinterest"></i></a>
</div>
</div>
</div>
<div class="col-lg-3 col-md-6 col-sm-6 col-xs-6 footerColumn">
<?php
	$blockObject = block_load('block', '2');
	$block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
	$output = drupal_render($block);
	print $output;
?>
</div>
<div class="col-lg-3 col-md-6 col-sm-6 col-xs-6 footerColumn">

</div>
</div>
</div>
</footer>
<!-- Footer End -->

</body>
</html>
