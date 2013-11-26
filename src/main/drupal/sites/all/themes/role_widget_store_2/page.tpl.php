<?php



?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language; ?>" xml:lang="<?php print $language->language; ?>">

<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $setting_styles; ?>
  <!--[if IE 8]>
  <?php print $ie8_styles; ?>
  <![endif]-->
  <!--[if IE 7]>
  <?php print $ie7_styles; ?>
  <![endif]-->
  <!--[if lte IE 6]>
  <?php print $ie6_styles; ?>
  <![endif]-->
  <?php print $local_styles; ?>
  <?php print $scripts; ?>
</head>

<body id="<?php print $body_id; ?>" class="<?php print $body_classes; ?>">
  <div id="page" class="page">
    <div id="page-inner" class="page-inner">
      <div id="skip">
        <a href="#main-content-area"><?php print t('Skip to Main Content Area'); ?></a>
      </div>

      <!-- header-top row: width = grid_width -->
      <?php print theme('grid_row', $header_top, 'header-top', 'full-width', $grid_width); ?>

      <!-- header-group row: width = grid_width -->
      <div id="header-group-wrapper" class="header-group-wrapper full-width">
        <div id="header-group" class="header-group row <?php print $grid_width; ?>">
          <div id="header-group-inner" class="header-group-inner inner clearfix">
            <?php print theme('grid_block', theme('links', $secondary_links), 'secondary-menu'); ?>
            <?php print theme('grid_block', $search_box, 'search-box'); ?>
			 </div><!-- /header-group-inner -->
			 <div id="header-group-inner" class="header-group-inner inner clearfix">
            <?php if ($logo || $site_name || $site_slogan): ?>
            <div id="header-site-info" class="header-site-info block">
              <div id="header-site-info-inner" class="header-site-info-inner inner">
                <?php if ($logo): ?>
                <div id="logo" class="logo-name">
                  <a href="<?php print check_url($front_page); ?>" title="<?php print t('Home'); ?>"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
                </div>
                <?php endif; ?>
                <?php if ($site_name || $site_slogan): ?>
                <div id="site-name-wrapper" class="logo-name clearfix">
                  <?php if ($site_name): ?>
                  <span id="site-name"><a href="<?php print check_url($front_page); ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a></span>
                  <?php endif; ?>
                  <?php if ($site_slogan): ?>
                  <span id="slogan"><?php print $site_slogan; ?></span>
                  <?php endif; ?>
                </div><!-- /site-name-wrapper -->
                <?php endif; ?>
              </div><!-- /header-site-info-inner -->
            </div><!-- /header-site-info -->
            <?php endif; ?>

            <?php print $header; ?>
            <?php print theme('grid_block', $primary_links_tree, 'primary-menu'); ?>
          </div><!-- /header-group-inner -->
        </div><!-- /header-group -->
      </div><!-- /header-group-wrapper -->

      <!-- preface-top row: width = grid_width -->
      <?php print theme('grid_row', $preface_top, 'preface-top', 'full-width', $grid_width); ?>

      <!-- main row: width = grid_width -->
      <div id="main-wrapper" class="main-wrapper full-width">
        <div id="main" class="main row <?php print $grid_width; ?>">
          <div id="main-inner" class="main-inner inner clearfix">
            <?php print theme('grid_row', $sidebar_first, 'sidebar-first', 'nested', $sidebar_first_width); ?>

            <!-- main group: width = grid_width - sidebar_first_width -->
            <div id="main-group" class="main-group row nested <?php print $main_group_width; ?>">
              <div id="main-group-inner" class="main-group-inner inner">
                <?php print theme('grid_row', $preface_bottom, 'preface-bottom', 'nested'); ?>

                <div id="main-content" class="main-content row nested">
                  <div id="main-content-inner" class="main-content-inner inner">
                    <!-- content group: width = grid_width - (sidebar_first_width + sidebar_last_width) -->
                    <div id="content-group" class="content-group row nested <?php print $content_group_width; ?>">
                      <div id="content-group-inner" class="content-group-inner inner">
                        <?php print theme('grid_block', $breadcrumb, 'breadcrumbs'); ?>

                        <div id="content-region" class="content-region row nested">
                          <div id="content-region-inner" class="content-region-inner inner">
                            <a name="main-content-area" id="main-content-area"></a>
                            <?php print theme('grid_block', $tabs, 'content-tabs'); ?>
                            <div id="content-inner" class="content-inner block">
                              <div id="content-inner-inner" class="content-inner-inner inner">
                                <?php if ($title): ?>
                                <h1 class="title"><?php print $title; ?></h1>
                                <div class="title-flag-wrapper">
                                	<div class="title-flag">
                                		<div class="page-type-icon"><?php print $title_flag_text?></div>
                                	</div>
	                                <ul>
	                                	<li>                                
		                                	<a class="twitter" href='https://twitter.com/intent/tweet?source=<?php print$page_path?>&text=<?php print $title; ?>&url=<?php print $page_path ?>'></a>
		                                </li>
		                                <li>
		                                	<a class="facebook" href='http://www.facebook.com/sharer.php?u=<?php print $page_path ?>&t=<?php print $title; ?>'></a>
		                                </li>
		                                <li>
		                                	<a class="linkedin" href='http://www.linkedin.com/shareArticle?mini=true&url={<?php print $page_path ?>}&title={<?php print $title; ?>}&summary={}&source={<?php print $page_path ?>}'></a>
		                                </li>
		                                <li>
		                                	<a class="googleplus" href='https://plus.google.com/share?url=<?php print $page_path ?>'></a>
		                                </li>
	                                </ul>
	                                <div class="cleaner"></div>
                                </div>
                                
                                
                                <?php endif; ?>
                                  <?php if ($content_top): ?>
                        			<div id="content-top" class="content-top row nested">
                          				<div id="content-top-inner" class="content-top-inner inner">
                            				<?php print $content_top; ?>
			                          </div><!-- /content-top-inner -->
			                        </div><!-- /content-top -->
			                      <?php endif; ?>
                                
                                <?php if ($content || $help || $messages): ?>
                                <div id="content-content" class="content-content">
                                  <?php print theme('grid_block', $help, 'content-help'); ?>
                            	  <?php print theme('grid_block', $messages, 'content-messages'); ?>
                                  <?php print $content; ?>
                                  <?php print $feed_icons; ?>
                                </div><!-- /content-content -->
                                <?php endif; ?>
                              </div><!-- /content-inner-inner -->
                            </div><!-- /content-inner -->
                          </div><!-- /content-region-inner -->
                        </div><!-- /content-region -->

                        <?php print theme('grid_row', $content_bottom, 'content-bottom', 'nested'); ?>
                      </div><!-- /content-group-inner -->
                    </div><!-- /content-group -->

                    <?php print theme('grid_row', $sidebar_last, 'sidebar-last', 'nested', $sidebar_last_width); ?>
                  </div><!-- /main-content-inner -->
                </div><!-- /main-content -->

                <?php print theme('grid_row', $postscript_top, 'postscript-top', 'nested'); ?>
              </div><!-- /main-group-inner -->
            </div><!-- /main-group -->
          </div><!-- /main-inner -->
        </div><!-- /main -->
      </div><!-- /main-wrapper -->
	
	<div class="footer-top-limiter"></div>
      <!-- footer-top row: width = grid_width -->
    <div id="footer-top-wrapper" class="footer-top-wrapper full-width">
		<div id="footer-top" class="footer-top row grid12-12">
			<div id="footer-top-inner" class="footer-top-inner inner clearfix">
				<div class="footer-top-container grid12-2">
	   				<div class="title"><a href='/about'>About</a></div>
	   				<div class="title"><a href='/developer'>Developer</a></div>
	      			<div><a href='/partner'>Partner</a></div>
	      		</div>
	      		<div class="footer-top-container grid12-2">
	      			<div class="title" id="footer-tools-title"><a href='/tools'>Tools</a></div>
	      			<!-- <div class="description" id="footer-tools-desc"><a href='/tool_categories'>Small web based<br>applications (widgets)<br>supporting particular<br>learning and teaching<br>goals and tasks.</a></div>-->
	      			<div class="title" id="footer-bundles-title"><a href='/bundles'>Bundles</a></div>
      				<!-- <div class="description" id="footer-bundles-desc"><a href='/bundles?filters=type%3Abundle'>Set of widgets allow-<br>ing training particular<br>supporting particular<br>quences of interrelated<br>learning activities.</a></div>-->		
      			</div>
      			<div class="footer-top-container grid12-2">
      			<div class="table">
		      			<table>
			   				<tr>
				   				<td><a href='http://www.role-project.eu/Deliverables'>Deliverables</a></td>
			   				<tr>
				   				<td><a href='http://sourceforge.net/projects/role-project/files/role-m9-sdk/'>ROLE SDK</a></td>
			   				<tr>
			   					<td><a href='http://www.role-project.eu/'>ROLE Website</a></td>
			   			</table>
			   		</div>	
      			</div>
	      		<div class="footer-top-container grid12-2">
	      			<div class="table">
		      			<table>
			   				<tr>
				   				<td><a href='http://www.flickr.com/photos/roleproject/'>ROLE@Flickr</a></td>
			   				<tr>
				   				<td><a href='http://sourceforge.net/apps/mediawiki/role-project'>ROLE@Sourceforge</a></td>
			   				<tr>
			   					<td><a href='https://www.youtube.com/user/ROLEProject'>ROLE@Youtube</a></td>
			   			</table>
			   		</div>
	      		</div>
	      		<div class="footer-top-container grid12-2 last">
	   				<div class="footer-top-container-inner">
	   					<a href='https://twitter.com/intent/tweet?text=ROLE%20Widget%20Store&url=<?php global $base_root;print $base_root ?>'><img src="<?php print ('/' . drupal_get_path('theme', 'role_widget_store_2') . '/images/footer/social-links/twitter.png'); ?>" alt="twitter"></img></a>
	   					<a href='http://www.facebook.com/sharer.php?u=<?php global $base_root;print $base_root ?>&t=ROLE%20Widget%20Store'><img src="<?php print ('/' . drupal_get_path('theme', 'role_widget_store_2') . '/images/footer/social-links/fb.png'); ?>" alt="facebook"></img></a>
	   					<a href='http://www.linkedin.com/shareArticle?mini=true&url={<?php global $base_root;print $base_root ?>}&title={ROLE-Widgetstore}&summary={ROLE-Widgetstore}'><img src="<?php print ('/' . drupal_get_path('theme', 'role_widget_store_2') . '/images/footer/social-links/linked_in.png'); ?>" alt="linked_in"></img></a>
	   					<a href='https://plus.google.com/share?url=<?php global $base_root;print $base_root ?>'><img src="<?php print ('/' . drupal_get_path('theme', 'role_widget_store_2') . '/images/footer/social-links/gplus.png'); ?>" alt="gplus"></img></a>
	   				</div>
	      		</div>
	 	   </div><!-- /footer-top-inner -->
		</div><!-- /footer-top -->
	</div><!-- /footer-top-wrapper -->
      
      
      <?php //print theme('grid_row', $postscript_bottom, 'postscript-bottom', 'full-width', $grid_width); ?>

    <!-- footer row: width = grid_width -->
    <?php print theme('grid_row', $footer, 'footer', 'full-width', $grid_width); ?>
	<div id="footer-wrapper" class="footer-wrapper">
	    <div id="footer" class="footer row <?php print $grid_width; ?>">
	      <?php print $footer; ?>
	      <?php $theme_path = '/' . drupal_get_path('theme', 'role_widget_store_2'); ?>
	    	<div class="footer-logo-bar" id="european-footer-logo-bar">
				<img src="<?php print ($theme_path .'/images/footer/european-flag.png');?>" alt="">
			</div>
			<div class="footer-logo-bar" id="framework-footer-logo-bar">
				<img src="<?php print ($theme_path . '/images/footer/seventh-framework-logo.png');?>" alt="">
			</div>
			<div class="footer-logo-bar"  id="text-footer-logo-bar">&#169; ROLE Consortium 2009-2012. The Role project is supported by the European Commision, in the theme ICT-2007 Digital Libraries an<br>technology-enhanced learning, as a large-scale integrating project (IP), under the 7th Framework Programme, Grant agreement no.: 231396.
			</div>
			<div class="footer-logo-bar"  id="imc-footer-logo-bar"><a href='http://www.im-c.de/'>developed by IMC AG <img src="<?php print ($theme_path . '/images/footer/imc-logo-footer.png');?>" alt=""></a>
			</div>
		</div><!-- /footer -->
	</div><!-- footer-wrapper -->
      <!-- footer-message row: width = grid_width -->
      <div id="footer-message-wrapper" class="footer-message-wrapper full-width">
        <div id="footer-message" class="footer-message row <?php print $grid_width; ?>">
          <div id="footer-message-inner" class="footer-message-inner inner clearfix">
          
          
            <?php print theme('grid_block', $footer_message, 'footer-message-text'); ?>
          </div><!-- /footer-message-inner -->
        </div><!-- /footer-message -->
      </div><!-- /footer-message-wrapper -->

    </div><!-- /page-inner -->
  </div><!-- /page -->
  <?php print $closure; ?>
</body>
</html>
