<?php
// $Id: node-ls_tools.tpl.php,v 1.1.2.2 2009/11/11 05:25:58 sociotech Exp $
?>

 <?php if ($teaser) { ?>

<div id="node-<?php print $node->nid; ?>" class="node clear-block node-type-ls_tools-teaser <?php print 
      $node_classes; ?>">
  <div class="inner">
    <div class="firstColumn">
    	<div class="thumbnail-area">
    		<?php print 
      theme_imagecache('thumbnail', $node->field_thumbnail[0]['filepath'],
          $node->field_thumbnail[0]['alt'], $node->field_thumbnail[0]['title'],
          null); ?>
    	</div>
    	<div class="logo-area">
    		<?php print $tool_logo ?>
    	</div> 	
    				
    </div>

    <div class="thirdColumn">
      <div class="column-item">
        <label>Author:</label>
        <div class="item-content"><?php print $author ?></div>
        <div class="cleaner"></div>
      </div>
      <div class="column-item">
        <label>Rating:</label>
        <div class="item-content"><?php print 
      fivestar_static('node', $node->nid); ?></div>
        <div class="cleaner"></div>
      </div>
      <div class="column-item">
        <label><?php print t('Categories'); ?>:</label>
        <div class="item-content"><?php print($tool_categories); ?></div>
        <div class="cleaner"></div>
      </div>
      <div class="column-item">
        <label><?php print t('Functionalities'); ?>:</label>
        <div class="item-content"><?php
  if (empty($tool_functionalities)) {
    print('n/a');
  } else {
    print($tool_functionalities);
  }
                                  ?>
        </div>
        <div class="cleaner"></div>
      </div>
      <div class="column-item">
     	<label><?php print t('Domains'); ?>:</label>
        <div class="item-content"><?php
  if (empty($tool_domains)) {
    print('n/a');
  } else {
    print($tool_domains);
  }
                                  ?>
        </div>
        <div class="cleaner"></div>
      </div>

        <?php if ($isEmbedded) { ?>
      
	    <div class="column-item">
		
			<div class="select-button">
			<a id="tool-select-button-<?php print $nid ?>" href="#"><?php print
        ("Select") ?> </a>
				<script type="text/javascript">
			
					$('#tool-select-button-<?php print $nid ?>').click(function() {
						var envelope = {
								  type: "select",
								  uri: "<?php print($node->source) ?>"
								};
				
								var message = {
								    "http://www.w3.org/1999/02/22-rdf-syntax-ns#type":
											"http://purl.org/role/terms/OpenSocialGadget", 
								    "http://purl.org/dc/terms/title": "<?php print($title) ?>"
								};
						if(typeof(gadgets) !== 'undefined'){	
							gadgets.openapp.publish(envelope, message);					
						}
						
						return false;
					});
				</script>
			</div>
		
		</div>
		<?php }//end if($isEmbedded) ?>
	
		<?php if ($isEmbedded_v2) { ?>
    
	    <div class="column-item">
		
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
											"http://purl.org/role/terms/OpenSocialGadget", 
								    "http://purl.org/dc/terms/title": "<?php print($title) ?>",
								    "http://purl.org/dc/terms/source": "<?php print($node->source) ?>"
								};
						if(typeof(gadgets) !== 'undefined'){	
							gadgets.openapp.publish(envelope, message);					
						}
						
						return false;
					});
				</script>
			</div>
		
		</div>
		<?php }//end if($isEmbedded_v2) ?>
		
    </div>
    
	
    <div class="secondColumn">
      <h2 class="title"> <a href="<?php print $node_url ?>" title="<?php print 
      $title ?>"><?php print $title ?></a> </h2>
      <?php print $body; ?> </div>
  </div>
</div>
<?php } else { ?>
<div id="node-<?php print $node->nid; ?>" class="node clear-block <?php print 
      $node_classes; ?>">
  <div class="inner">
    <!-- 
    <div class="ls_tools-header">
      <h2 class="title"><?php print t("ls_tools Details"); ?></h2>
    </div>
     -->

    <div class="tool_description">
      <div class="firstColumn">    	
      	<div class="thumbnail-area">
    		<?php print 
      theme_imagecache('thumbnail', $node->field_thumbnail[0]['filepath'],
          $node->field_thumbnail[0]['alt'], $node->field_thumbnail[0]['title'],
          null); ?> 
    	</div>
    	<div class="logo-area">
    		<?php print $tool_logo ?>
    	</div>   
    </div>
      <div class="secondColumn">
        <h2 class="title"> <?php print $title ?> </h2>
        <?php print $body; ?> </div>
        
    </div>
    <div id="share-this-container">
      <?php print $share_this; ?> 
    </div>
    <div class="cleaner"></div>
    <div class="meta-information">
      <div class="firstColumn">
        <h2 class="sub-title"><?php print t("Details"); ?></h2>
        <table>
	        <tr >
		        <td class="first-row"><label>Author:</label>
		        </td>
		        <td class="second-row"><?php print $author ?>
		        </td>
	        </tr>
	        <tr >
		        <td class="first-row">
		        	<label>E-Mail:</label>
		        </td>
		        <td class="second-row">
		        	<?php print check_markup($author_email, FILTER_FORMAT_DEFAULT); ?>
		        </td>
	        </tr>
	        <tr>
		        <td><label>Comments:</label>
		        </td>
		        <td><?php print $number_of_comments; ?>
		        </td>
	        </tr>
	        <tr>
		        <td><label>Rating:</label>
		        </td>
		        <td><?php print fivestar_static('node', $node->nid); ?>
		        </td>
	        </tr>  
        </table>        
      </div>
      <div class="secondColumn">
        <h2 class="sub-title"><?php print t("Categorisation"); ?></h2>
        <table>
	        <tr >
		        <td class="first-row"><label><?php print t('Categories'); ?>:</label>
		        </td>
		        <td class="second-row"><?php print($tool_categories); ?>
		        </td>
	        </tr>
	        <tr >
		        <td class="first-row"><label><?php print t('Functionalities'); ?>:</label>
		        </td>
		        <td class="second-row"><?php
  if (empty($tool_functionalities)) {
    print('n/a');
  } else {
    print($tool_functionalities);
  }
                                   ?>
		        </td>
	        </tr>
	        <tr >
		        <td class="first-row"><label><?php print t('Learning Domains'); ?>:</label>
		        </td>
		        <td class="second-row"><?php
  if (empty($tool_domains)) {
    print('n/a');
  } else {
    print($tool_domains);
  }
                                   ?>
		        </td>
	        </tr>
	    </table>
	</div>
      <div class="thirdColumn">
        <div class="column-item"> <?php print $obtain; ?> </div>
        
         <div class="column-item"> 
        <label>Source URL:</label>
          <br />
          <?php print $source; ?> 
         </div>
        <div class="column-item"> 
        <label>Embed code:</label>
          <br />
          <?php print $embed_code; ?> 
        </div>
        <div class="column-item"> 
        <label>Add to Widget Container:</label>
        <br />
        <?php if (!$isEmbedded  && !$isEmbedded_v2) { ?>
         
          <?php print $add_to_container; ?> 
         </div>

       <?php }//end if(!$isEmbedded) ?>
          
         <?php if ($isEmbedded || $isEmbedded_v2) { ?>
        
	    <div class="column-item">				
			<div class="select-button">
				<a id="tool-select-button" href="#"><?php print("Select") ?> </a>
			</div>		
		</div>
		<?php }//end if($isEmbedded) ?>
         
         
        <div class="cleaner"></div>
      </div>
       
    </div>
    <div class="cleaner"></div>

    
    
<?php if (count($node->field_screenshots) != 0) : ?>
<div class="ls_tools-information-tabs">
	<div id="tabs">
		<ul>
			<?php if (count($node->field_screenshots) != 0) : ?>
			<li><a href="#tabs-1">Screenshots</a></li>
			<?php endif; ?>
 			
			<?php if (module_exists('user_report')) { ?>
			<li><a href="#tabs-2">User Reports</a></li>
			<?php } ?>
		</ul>
		<?php if (count($node->field_screenshots) != 0) : ?>
		<div id="tabs-1">
			<?php
      $view_args = array(
        $node->nid
      );
      $display_id = 'page_1';
      $view = views_get_view('tool_screenshots');
      if (!empty($view)) {
        print $view->execute_display($display_id, $view_args);
        //add page title again as the view removed it
        drupal_set_title($node->title);#
      }
                     ?>
		</div>
		<?php endif; ?>
 		
    	<?php if (module_exists('user_report')) { ?>
    	<div id="tabs-2">
    		<div class="ui-tabs-panel-inner ui-corner-all">
    		<?php
      $view_args = array(
        $node->nid
      );
      $display_id = 'page_1';
      $view = views_get_view('user_report_list');
      if (!empty($view)) {
        print $view->execute_display($display_id, $view_args);
        //add page title again as the view removed it
        drupal_set_title($node->title);#
      }
                                                       ?>
    		</div>
    	</div>
    	<?php } ?>
	</div>
	<div class="cleaner"></div>
</div>
<script>
	$(function() {	
		$( "#tabs" ).tabs();
	});
</script>

<div id="user_report">
	Did you use this widget?
	<strong>
		<a href="/node/add/user-report/<?php echo $node->nid; ?>" target="_blank">Write report</a>
	</strong>
</div>
<?php endif; ?>
  </div>
</div>

 <?php if ($isEmbedded) { ?>
<script type="text/javascript">
  var envelope = {
  	type: "select",
  	uri: "<?php print($node->source) ?>"
  };
  
  var message = {
  	    "http://www.w3.org/1999/02/22-rdf-syntax-ns#type":
  			"http://purl.org/role/terms/OpenSocialGadget", 
  	    "http://purl.org/dc/terms/title": 
  		    "<?php print($title) ?>"
  };
  
  $(document).ready(function() {
  	gadgets.openapp.publish(envelope, message);
  });
  
  $('#tool-select-button').click(function() {
  	if(typeof(gadgets) !== 'undefined'){	
  		gadgets.openapp.publish(envelope, message);					
  	}
  	
  	return false;
  });
</script>
<?php } ?>
 
 <?php if ($isEmbedded_v2) { 
	global $base_url;
//	check for an alias using drupal_lookup_path()
	if((drupal_lookup_path('alias', 'node/'.$nid)!==false))
		$alias = drupal_lookup_path('alias', 'node/'.$nid);
	$uri= $base_url.'/'.$alias;
?>
<script type="text/javascript">
  var envelope = {
  	type: "select",
  	uri: "<?php print($uri) ?>"
  };
  
  var message = {
  	    "http://www.w3.org/1999/02/22-rdf-syntax-ns#type":
  			"http://purl.org/role/terms/OpenSocialGadget", 
  	    "http://purl.org/dc/terms/title": 
  		    "<?php print($title) ?>",
  	      "http://purl.org/dc/terms/source": "<?php print($node->source) ?>"
  };
  
  $(document).ready(function() {
  	gadgets.openapp.publish(envelope, message);
  });
  
  $('#tool-select-button').click(function() {
  	if(typeof(gadgets) !== 'undefined'){	
  		gadgets.openapp.publish(envelope, message);					
  	}
  	
  	return false;
  });
</script>
<?php } ?>
 
<?php } ?>
