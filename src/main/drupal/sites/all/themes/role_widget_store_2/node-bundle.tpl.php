<?php
// $Id: node.tpl.php,v 1.1.2.1 2010/06/17 07:54:57 sociotech Exp $

$view_args = array($node->nid);
$display_id = 'page_1';
$view = views_get_view('node_generic_screenshot_slider');
$screenshot_view = $view->execute_display($display_id, $view_args);

$view_args = array($node->nid);
$display_id = 'default';
$view = views_get_view('node_bundle_tool_list');
$tools_view = $view->execute_display($display_id, $view_args);

$view_args = array($node->nid);
$display_id = 'default';
$view = views_get_view('node_generic_screencast_slider');
$screencast_view = $view->execute_display($display_id, $view_args);

$is_learning_resources_view_empty = !isset($node->field_additional_content_file[0]['value'])
  && !isset($node->field_additional_content_image[0]['value'])
  && !isset($node->field_additional_content_video[0]['value'])
  && !isset($node->field_additional_content_link[0]['value']);

if(!$is_learning_resources_view_empty){
  $view_args = array($node->nid);
  $display_id = 'default';
  $view = views_get_view('node_bundle_learning_resources');
  $learning_resources_view = $view->execute_display($display_id, $view_args);
}

$view_args = array($node->nid);
$display_id = 'default';
$view = views_get_view('node_generic_user_report_list');
$user_report_view = $view->execute_display($display_id, $view_args);

?>

<?php if($teaser){?>
<div id="node-<?php print $node->nid; ?>" class="node clear-block node-type-ls_tools-teaser <?php print 
      $node_classes;
                                                                                            ?>">
  <div class="grid12-2-inner grid12-inner first">
    <a href="<?php print $node_url ?>">
      <?php print 
      theme('imagecache', 'node_generic_teaser_thumbnail_120x120',
          $node->field_thumbnail[0]['filepath'])
                                       ?>
    </a>  
  </div>  
  
  
  <div>
  	<h1 class="title"><a href="<?php print $node_url ?>" title="<?php print 
      $title
                                                                ?>"><?php print 
      $title ?></a></h1>
    <div class="grid12-3-inner grid12-inner">  
      <?php print 
      views_trim_text(
          array(
            'max_length' => 200, 'ellipsis' => TRUE, 'html' => TRUE
          ),  strip_tags($node->content['body']['#value']));
      ?>
    </div>
     
  	<div class="meta-data-table grid12-4-inner grid12-inner last">
      <table>
        <tr>
          <td class="first"><?php print t("Rating:") ?></td>
          <td><?php print fivestar_static('node', $node->nid); ?></td>
        </tr>
        <tr>
          <td><?php print t("Tools:") ?></td>
          <td><?php print count($node->field_bundle_tool) ?></td>
        </tr>
        <tr>
          <td><?php print t("Functionalities:") ?></td>
          <td><?php print role_widget_store_2_bundle_print_terms($node, "Functionalities", FALSE);
              ?></td>
        </tr>
        <tr>
          <td><?php print t("Domains:") ?></td>
          <td><?php print role_widget_store_2_print_terms($node, "Learning Domains", FALSE);
              ?></td>
        </tr>
      </table>
      
      <?php if ($isEmbedded_v2 || $isEmbedded) { ?>       
			<div class="select-button">
			<a id="tool-select-button-<?php print $nid ?>" href="#"><?php print
        ("Select") ?> </a>
				<script type="text/javascript">
					<?php 
						global $base_url;
						//check for an alias using drupal_lookup_path()
						if((drupal_lookup_path('alias', 'node/'.$nid)!==false))
							$alias = drupal_lookup_path('alias', 'node/'.$nid);
						$uri= $base_url.'/'.$alias;
					?>
					$('#tool-select-button-<?php print $nid ?>').click(function() {
						var envelope = {
								  type: "select",
								  uri: "<?php print($uri) ?>"
								};
				
								var message = {
								    "http://www.w3.org/1999/02/22-rdf-syntax-ns#type":
											"http://purl.org/role/terms/Bundle", 
								    "http://purl.org/dc/terms/title": "<?php print($title) ?>",
								    "http://purl.org/dc/terms/description": 
								    <?php 
								    $msg= json_encode($node->field_bundle_short_description[0]['value']);
								    print $msg;
								    ?>
								};
						if(typeof(gadgets) !== 'undefined'){	
							gadgets.openapp.publish(envelope, message);					
						}
						
						return false;
					});
				</script>
			</div>
		<?php }//end if ($isEmbedded_v2 || $isEmbedded) ?>
    </div>
 </div>
 <div class="cleaner"></div>
 <div class="bundle-teaser-footer">
	<div class="tool-type"><div class="tool-type-icon"></div>Bundle</div>
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
          		  
              	<div class="field-creator field">
          				<label class="field-label"><?php print t("Creator:") ?></label>
                	<span class="field-content"><?php print $name ?></span>
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
                <div class="field-functionalities field">
            			<label class="field-label"><?php print t("Functionalities:") ?></label>
                  <span class="field-content"><?php print role_widget_store_2_bundle_print_terms($node, "Functionalities", FALSE);?></span>
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
          
         <?php if ($isEmbedded || $isEmbedded_v2) { ?>	 
         <div class="block">
            <div class="inner">
              <h2>Get this widget</h2>
              <div class="content">      
              		      	
              	<div class="select-button field-select field">
              		<a id="bundle-select-button" href="#">
              			<?php print	("Select") ?> 
              		</a>
              	</div>

              </div>
            </div>
          </div><!-- /block -->
          <?php } ?>        
          
      </div><!-- /node-"node-sidebar-last-inner"-last -->
    </div><!-- /node-sidebar-last -->
    
    <div class="node-main-content grid12-8-inner first">
    	<!-- 
      <div class="node-thumbnail">
        <?php print theme_imagecache('node_generic_thumbnail_140x140', $node->field_thumbnail[0]['filepath'],
        $node->field_thumbnail[0]['alt'], $node->field_thumbnail[0]['title'],
        null);
        ?>
      </div>
      -->
    
      <?php print $node->content['body']['#value']; ?>
      
      <div class="cleaner"></div>
   	
    	<div id="tabs" class="grid12-8-inner first last">
      	<ul>
      	  
      		<li class="blue-tab"><a href="#tabs-1">Tools</a></li>
      		
      		<?php if (!$is_learning_resources_view_empty) : ?>
      		<li class="blue-tab"><a href="#tabs-2">Resources</a></li>
          <?php endif; ?>


      		<?php if (isset($node->field_screenshots[0]['value'])) : ?>
      		<li class="blue-tab"><a href="#tabs-3">Screenshots</a></li>
          <?php endif; ?>
          
          
          <?php if (isset($node->field_screencasts[0]['value'])) : ?>
      		<li class="blue-tab"><a href="#tabs-4">Screencasts</a></li>
      		<?php endif; ?>
      		
      		<li class="blue-tab"><a href="#tabs-5">User Reports</a></li>
      		
      		<?php if (isset($node->field_use_case) &&  $node->field_use_case[0]['value'] != ""){ ?>
					<li class="blue-tab"><a href="#tabs-6">Use Case</a></li>
					<?php } ?>
    		</ul>
    		
    		<div id="tabs-1">
    		  <?php print $tools_view; ?>
    		</div>
    		
    		<?php if (!$is_learning_resources_view_empty) : ?>
    		<div id="tabs-2">
    		  <?php print $learning_resources_view; ?>
    		</div>
        <?php endif; ?>		
        
  			<?php if (isset($node->field_screenshots[0]['value'])) : ?>
  			<div id="tabs-3">
  				<?php print $screenshot_view; ?>
  			</div>
  			<?php endif; ?>
  			
  			<?php if (isset($node->field_screencasts[0]['value'])) : ?>
  			<div id="tabs-4">
  				<?php print $screencast_view; ?>
  			</div>
  			<?php endif; ?>
  			
  			<div id="tabs-5">
  				<?php print $user_report_view; ?>
  			</div>
  			
  			<?php if (isset($node->field_use_case) &&  $node->field_use_case[0]['value'] != "") : ?>
  		  <div id="tabs-6" class="use-case"> 		  	
  		  		<?php print $node->field_use_case[0]['value']; ?>
  		 	</div>
  		 <?php endif; ?>
  			

    	</div>
      
    </div> <!-- /node-main-content -->
    
  </div> <!-- /inner-->
</div> <!-- /node-type-ls_tools-teaser-->

<div id="above-comments" class="above-comments">
  <?php if (isset($above_comments)): ?>
     <?php print $above_comments; ?>
  <?php endif ?>
</div>
   
 <?php if ($isEmbedded_v2 || $isEmbedded) {
    global $base_url;
    //	check for an alias using drupal_lookup_path()
    if ((drupal_lookup_path('alias', 'node/' . $nid) !== false)){
      $alias = drupal_lookup_path('alias', 'node/' . $nid);
    }
    
    $uri = $base_url . '/' . $alias;
 ?>
 
<script type="text/javascript">
  var envelope = {
  	type: "select",
  	uri: "<?php print($uri) ?>"
  };
  
  var message = {
		    "http://www.w3.org/1999/02/22-rdf-syntax-ns#type":
					"http://purl.org/role/terms/Bundle", 
		    "http://purl.org/dc/terms/title": "<?php print($title) ?>",
		    "http://purl.org/dc/terms/description": ""
		};
  
  $(document).ready(function() {
  	gadgets.openapp.publish(envelope, message);
  });
  
  $('#bundle-select-button').click(function() {
  	if(typeof(gadgets) !== 'undefined'){	
  		gadgets.openapp.publish(envelope, message);					
  	}
  	
  	return false;
  });
</script>
<?php } ?>
<?php } ?>
