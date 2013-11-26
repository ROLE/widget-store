<?php
// $Id: node-ls_tools.tpl.php,v 1.1.2.2 2009/11/11 05:25:58 sociotech Exp $

$license = (check_plain($node->field_license[0]['value']) == '' ? "Not specified" :  check_plain($node->field_license[0]['value']));

$view_args = array($node->nid);
$display_id = 'page_1';
$view = views_get_view('node_generic_screenshot_slider');
$screenshot_view = $view->execute_display($display_id, $view_args);

$view_args = array($node->nid);
$display_id = 'default';
$view = views_get_view('node_generic_screencast_slider');
$screencast_view = $view->execute_display($display_id, $view_args);

$view_args = array($node->nid);
$display_id = 'default';
$view = views_get_view('node_generic_user_report_list');
$user_report_view = $view->execute_display($display_id, $view_args);
?>

  
<?php if ($teaser) { ?>

<div id="node-<?php print $node->nid; ?>" class="node clear-block node-type-ls_tools-teaser <?php print 
      $node_classes;?>">

  <div class="grid12-2-inner grid12-inner first">
    <a href="<?php print $node_url ?>">
      <?php 
        print theme('imagecache', 'node_generic_teaser_thumbnail_120x120',
              $node->field_thumbnail[0]['filepath'])
      ?>
    </a>  
  </div>  
  
  
  <div>
  	<h1 class="title">
  		<a href="<?php print $node_url ?>" title="<?php print $title  ?>">
  		  <?php print $title ?>
  		</a>
  	</h1>
    <div class="grid12-3-inner grid12-inner">
      
      <?php print 
      views_trim_text(
          array(
            'max_length' => 200, 'ellipsis' => TRUE, 'html' => TRUE
          ),  strip_tags($node->content['body']['#value']));
      
      drupal_set_message(strip_tags($node->content['body']['#value']));
      ?>
      
      
    </div>
     
  	<div class="meta-data-table grid12-4-inner grid12-inner last">
      <table>
        <tr>
          <td class="first"><?php print t("Rating:") ?></td>
          <td><?php print fivestar_static('node', $node->nid); ?></td>
        </tr>
        <tr>
          <td><?php print t("Categories:") ?></td>
          <td><?php print role_widget_store_2_print_terms($node, "Tool Categories", FALSE);?></td>
        </tr>
        <tr>
          <td><?php print t("Functionalities:") ?></td>
          <td><?php print role_widget_store_2_print_terms($node, "Functionalities", FALSE);?></td>
        </tr>
        <tr>
          <td><?php print t("Domains:") ?></td>
          <td><?php print role_widget_store_2_print_terms($node, "Learning Domains", FALSE);?></td>
        </tr>
      </table>
    </div>
 </div>
 <div class="cleaner"></div>
 <div class="tool-teaser-footer">
	<div class="tool-type"><div class="tool-type-icon"></div>Web Tool</div>
	<div class="more-link"><a href="<?php print $node_url ?>">more</a></div>
 </div>
  
</div> 

<?php 
} else { 
  jquery_ui_add('ui.tabs');
  
?>
<script>
$(function() {
  $( "#tabs" ).tabs();
});
</script>

<div id="node-<?php print $node->nid; ?>" class="node clear-block node-type-ls_tools-full <?php print 
      $node_classes; ?>">
  <div class="inner">

    <div class="node-sidebar-last grid12-4-inner last">
      <div class="node-sidebar-last-inner">
          
          <div class="block">
            <div class="inner">
              <h2>Details</h2>
              <div class="content">

          		  <?php print theme('user_picture',$node); ?>
          		  
              	<div class="field-developer field">
          				<label class="field-label"><?php print t("Developer:") ?></label>
                	<span class="field-content"><?php print $node->field_developer[0]['value'] ?></span>
  							</div>
  							<div class="field-contact-person field">
          				<label class="field-label"><?php print t("Contact Person:") ?></label>
                	<span class="field-content"><?php print $name ?></span>
  							</div>
  							<div class="field-license field">
          				<label class="field-label"><?php print t("License:") ?></label>
                	<span class="field-content"><?php print $license ?></span>
  							</div>
  							<div class="field-rating field">
          				<label class="field-label"><?php print t("Rating:") ?></label>
                	<span class="field-content"><?php print fivestar_static('node', $node->nid); ?></span>
  							</div>
              	<div class="field-comment field">
          				<label class="field-label"><?php print t("Comments:") ?></label>
                	<span class="field-content"><?php print$comment_count?></span>
  							</div>	
              </div>
            </div>
          </div><!-- /block -->
     
          <div class="block">
            <div class="inner">
              <h2>Categorisation</h2>
              <div class="content">
              	<div class="field-categories field">
          				<label class="field-label"><?php print t("Categories:") ?></label>
                	<span class="field-content"><?php print role_widget_store_2_print_terms($node, "Tool Categories", FALSE);?></span>
  							</div>            
                <div class="field-functionalities field">
            			<label class="field-label"><?php print t("Functionalities:") ?></label>
                  <span class="field-content"><?php print role_widget_store_2_print_terms($node, "Functionalities", FALSE);?></span>
    						</div>
                <div class="field-learning-domains field">
            				<label class="field-label"><?php print t("Domains:") ?></label>
                  	<span class="field-content"><?php print role_widget_store_2_print_terms($node, "Learning Domains", FALSE);?></span>
    						</div>
              </div>
          	</div>
          </div><!-- /block -->
          
         
          <div class="block">
            <div class="inner">
              <h2>User actions</h2>
              <div class="content">
    						<div class="field-user-action-write-report field field-user-action"> 		
              		<a href="/node/add/user-report/<?php echo $node->nid; ?>" target="_blank">
              			<span class="field-content"><?php print t("Write report") ?></span> 
              		</a>
    						</div>		
              </div>
            </div>
          </div><!-- /block -->
          
          
          <div class="block">
            <div class="inner">
              <h2>Get this tool</h2>
              <div class="content">            	
    						<div class="field-url field">
                  <?php print_r( $node->field_tool_link[0]['view']);?>
                </div>
              </div>
            </div>
          </div><!-- /block -->
          
      </div><!-- /node-"node-sidebar-last-inner"-last -->
    </div><!-- /node-sidebar-last -->
    
    <div class="node-main-content grid12-8-inner first">
    	 
      <div class="node-thumbnail">
        <?php print theme_imagecache('node_generic_thumbnail_140x140', $node->field_thumbnail[0]['filepath'],
        $node->field_thumbnail[0]['alt'], $node->field_thumbnail[0]['title'],
        null);
        ?>
      </div>
      
    
      <?php print $node->content['body']['#value']; ?>
      
      <div class="cleaner"></div>
   	
    	<div id="tabs" class="grid12-8-inner first last">
      	<ul>
      		<li class="green-tab"><a href="#tabs-1">Screenshots</a></li>
      		
      		<?php if (isset($node->field_screencasts[0]['value'])) : ?>
      		<li class="green-tab"><a href="#tabs-2">Screencasts</a></li>
      		<?php endif; ?>
      		
      		<li class="green-tab"><a href="#tabs-3">User Reports</a></li>     		
    		</ul>
    		
    		
    		
  			<div id="tabs-1">
  				<?php print $screenshot_view; ?>
  			</div>
  			
        <?php if (isset($node->field_screencasts[0]['value'])) : ?>
  			<div id="tabs-2">
  				<?php print $screencast_view; ?>
  			</div>
  			<?php endif; ?>
  			

  			<div id="tabs-3">
  				<?php print $user_report_view; ?>
  			</div>

    	</div>
      
    </div> <!-- /node-main-content -->
    
  </div> <!-- /inner-->
</div> <!-- /node-type-ls_tools-teaser-->

<div id="above-comments" class="above-comments">
  <?php if (isset($above_comments)): ?>
     <?php print $above_comments; ?>
  <?php endif ?>
</div>

 
<?php } ?>  
