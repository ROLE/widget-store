<?php
// $Id: node-ls_tools.tpl.php,v 1.1.2.2 2009/11/11 05:25:58 sociotech Exp $
?>
<?php if ($teaser){ ?>

<div id="node-<?php print $node->nid; ?>" class="node clear-block node-type-ls_tools-teaser <?php print $node_classes; ?>">
  <div class="inner">
    <div class="firstColumn">
    	<div class="thumbnail-area">
    		<?php print theme_imagecache('thumbnail', $node->field_thumbnail[0]['filepath'], $node->field_thumbnail[0]['alt'], $node->field_thumbnail[0]['title'], null); ?>
    	</div>
    	<div class="logo-area">
    		<?php print $tool_logo ?>
    	</div>   				
    </div>
    <!--
    <div class="fourthColumn">
      <div class="column-item">
        <label><?php print t('Categories'); ?>:</label>
        <?php print($too_categories);?>
        <div class="cleaner"></div>
      </div>
       
      <div class="column-item">
        <label><?php print t('Tags'); ?>:</label>
        <?php print($tags);?>
        <div class="cleaner"></div>
      </div>
     
      <div class="details-button"> <?php print $details_button;?> </div>
    </div>
     -->
    <div class="thirdColumn">
      <div class="column-item">
        <label>Author:</label>
        <div class="item-content"><?php print $author ?></div>
        <div class="cleaner"></div>
      </div>
      <div class="column-item">
        <label>Rating:</label>
        <div class="item-content"><?php print fivestar_static('node', $node->nid); ?></div>
        <div class="cleaner"></div>
      </div>
      <div class="column-item">
        <label><?php print t('Categories'); ?>:</label>
        <div class="item-content"><?php print($tool_categories);?></div>
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
    </div>
    <div class="secondColumn">
      <h2 class="title"> <a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a> </h2>
      <?php print $body; ?> </div>
  </div>
</div>
<?php }else{ ?>
<div id="node-<?php print $node->nid; ?>" class="node clear-block <?php print $node_classes; ?>">
  <div class="inner">
    <!-- 
    <div class="ls_tools-header">
      <h2 class="title"><?php print t("ls_tools Details"); ?></h2>
    </div>
     -->

    <div class="tool_description">
      <div class="firstColumn">    	
      	<div class="thumbnail-area">
    		<?php print theme_imagecache('thumbnail', $node->field_thumbnail[0]['filepath'], $node->field_thumbnail[0]['alt'], $node->field_thumbnail[0]['title'], null); ?>
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
		        <td class="first-row"><label>E-Mail:</label>
		        </td>
		        <td class="second-row"><?php  print check_markup($author_email,1);
		        		//$mailHide_raw = check_markup($widget_author_email,1); 
		        		//$mailHide = str_replace('<a', '<a id="mailHide"',$mailHide_raw);
		        		//print $mailHide;
		        ?>
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
		        <td class="first-row"><label><?php print t('Learn Domains'); ?>:</label>
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
        
        
        <?php //print $terms; ?>
        <?php //print $node->content['community_tags']['#value']; ?>
        <?php //print community_tags_node_view($node, FALSE); ?> </div>
      <div class="thirdColumn">
      	<div class="column-item">
      		<a class="download-button" href="<?php print $file_url ?>" >
      			<img alt="Download this tool" src="/sites/all/themes/fusion/role_widget_store/images/buttons/download.png" />
      		</a>
      	</div>
      </div>
      <div class="cleaner"></div> 
    </div>

<?php if (count($node->field_screenshots) != 0): ?>
<div class="ls_tools-information-tabs">
	<div id="tabs">
		<ul>
			<?php if (count($node->field_screenshots) != 0): ?>
			<li><a href="#tabs-1">Screenshots</a></li>
			<?php endif; ?>
			
			<?php if(module_exists('user_report')){ ?>
			<li><a href="#tabs-2">User Reports</a></li>
			<?php } ?>
		</ul>
		<?php if (count($node->field_screenshots) != 0): ?>
		<div id="tabs-1">
						<?php
							$view_args = array($node->nid);
							$display_id = 'page_1';
							$view = views_get_view('tool_screenshots');
							if (!empty($view)) {
								print $view->execute_display($display_id , $view_args);
								//add page title again as the view removed it
								drupal_set_title($node->title);#
							}
						?>
		</div>
		<?php endif; ?>
		
    	<?php if(module_exists('user_report')){ ?>
    	<div id="tabs-2">
    		<div class="ui-tabs-panel-inner ui-corner-all">
    		<?php
				$view_args = array($node->nid);
				$display_id = 'page_1';
				$view = views_get_view('user_report_list');
				if (!empty($view)) {
					print $view->execute_display($display_id , $view_args);
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
<?php endif; ?>
      <div class="cleaner"></div>
    </div>
  </div>
</div>
<?php } ?>
