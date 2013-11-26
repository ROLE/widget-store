<?php
// $Id: node.tpl.php,v 1.1.2.1 2010/06/17 07:54:57 sociotech Exp $
?>

<?php if($teaser){?>
<div id="node-<?php print $node->nid; ?>" class="node clear-block node-type-ls_tools-teaser <?php print $node_classes; ?>">
  <div class="inner">
    <div class="firstColumn">
    	<div class="thumbnail-area">
    		<?php print theme_imagecache('thumbnail', $node->field_thumbnail[0]['filepath'], $node->field_thumbnail[0]['alt'], $node->field_thumbnail[0]['title'], null); ?>
    	</div>
    	<div class="logo-area">
    		<?php print $bundle_logo ?>
    	</div>
    </div>

    <div class="thirdColumn">
    	<div class="column-item">
        <label>Author:</label>
        <div class="item-content"><?php print $node->name ?></div>
        <div class="cleaner"></div>
      </div>
      <div class="column-item">
        <label>Rating:</label>
        <div class="item-content"><?php print fivestar_static('node', $node->nid); ?></div>
        <div class="cleaner"></div>
      </div>   
      <div class="column-item">
        <label># Tools:</label>
        <div class="item-content"><?php print count($node->field_bundle_tool); ?></div>
        <div class="cleaner"></div>
      </div>
      
      <div class="column-item">
        <label>Domains:</label>
        <div class="item-content">
        <?php if($tool_domains != ""):?>					
			<?php print $tool_domains; ?>
		<?php else: ?>
			<?php print t("No learning domains are defined");?>
		<?php endif; ?>
		</div>
		
        <div class="cleaner"></div>
      </div>
      
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
		
		</div>
		<?php }//end if($isEmbedded_v2) ?>
      
      
    </div>
  
    
	
    <div class="secondColumn">
      <h2 class="title"> <a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a> </h2>
      <?php //print substr(strip_tags($node->field_bundle_short_description[0]['view']), 0, 200); ?>
      <?php print $node->field_bundle_short_description[0]['view']; ?> 
     </div>
  </div>
</div>

<?php }else{ ?>

<?php 

/**
 * ==Additional Content-Field preprocessing==
 * This needs to be done because mutligroup isn't 
 * wrapping its content in its own array. The contents
 * are given in single arrays like "field_additional_content_file".
 * Ergo we have to do it here to be able to work properly
 * with this field within the template
 */

foreach ((array)$node as $key => $value) {
	if(substr($key, 0, 25) == 'field_additional_content_'){
		/*foreach($value as $fKey => $field){
			$node->additional_content[$key] = $value;
		}*/
		$node->additional_content[$key] = $value;
	
	}
}

$artifacts_empty = true;
foreach($node->additional_content as $artifacts){
	foreach($artifacts as $artifact){
		$artifacts_empty = ($artifact["view"] == '') ? true : false;
		break;
	}
	if(!$artifacts_empty){
		break;
	} 
}

?>

<div id="node-<?php print $node->nid; ?>" class="node <?php print $node_classes; ?>">
  <div class="inner">
 	
	<div class="bundle_container">
		<div class="bundle_thumbnail_container">
			<?php print theme_imagecache('thumbnail', $node->field_thumbnail[0]['filepath'], $node->field_thumbnail[0]['alt'], $node->field_thumbnail[0]['title'], null); ?>			
		</div>
		<div class="share_container">
			<?php print $share_this; ?>
		</div>
		<div class="description_container">
			<!-- <h2 class="title"><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2> -->
			
			<!-- <div class="clearBoth"></div> -->
			<div class="bundle_description">
				<?php print $node->field_bundle_short_description[0]['view']; ?>
			</div>			
		</div>
		
		<div class="clearBoth"></div>
		
		<?php if($node->content['body']['#value']): ?>
		
		<div id="full_description_container">
		
			<div id="full_description" style="height: 42px;">
				<div id="full_description_body">
					<?php print $node->content['body']['#value']; ?>
				</div>
			</div>
			
			<div id="full_description_toggle">
				<a id="full_description_more" href="javascript:;" style="display: block;">show more &#x25BC;</a>
				<a id="full_description_less" href="javascript:;" style="display: none;">show less &#x25B2;</a>
			</div>
			
		</div>
		
		<script type="text/javascript">
			//TODO: move to external file
			toggleFullDescr = function(state){
				var height,
					more_btn = document.getElementById('full_description_more'),
					less_btn = document.getElementById('full_description_less');

				
				if(state == 'more'){
					height = document.getElementById("full_description_body").offsetHeight+42;
					
					more_btn.style.display = 'none';
					less_btn.style.display = 'block';
					
				}else{
					more_btn.style.display = 'block';
					less_btn.style.display = 'none';
					
					height = 42;
					
				}

				$("#full_description").animate({height:height+'px'}, 500);
				
			}
		
			$(document).ready(function(){
				$("#full_description_more").click(function(){
					toggleFullDescr('more');
				});
				$("#full_description_less").click(function(){
					toggleFullDescr('less');
				});
			});
		</script>
		
		<?php endif; ?>
		
		<div class="details_container">
			<h2>Details</h2>
			<div class="details_columns">
				<label>Author:</label>
				<div class="details">
					<?php print $node->name; ?>
				</div>
				<div class="clearBoth"></div>
			</div>
			<!-- div class="details_columns">
				<label>Comments:</label>
				<div class="details">
					<?php print $number_of_comments; ?>
				</div>
				<div class="clearBoth"></div>
			</div-->
			<div class="details_columns">
				<label>Rating:</label>
				<div class="details">
					<?php print fivestar_static('node', $node->nid); ?>
				</div>
				<div class="clearBoth"></div>
			</div>			
			<div class="details_columns">
				<label>Number of Tools:</label>
				<div class="details">
					<?php print count($node->field_bundle_tool); ?>
				</div>
				<div class="clearBoth"></div>
			</div>
			<div class="details_columns">
				<label>Created:</label>
				<div class="details">
					<?php print date("M d. Y",$node->created); ?>
				</div>
				<div class="clearBoth"></div>
			</div>
			<?php if($node->created != $node->changed){ ?>
			<div class="details_columns">
				<label>Modified</label>
				<div class="details">
					<?php print date("M d. Y",$node->changed); ?>
				</div>
				<div class="clearBoth"></div>
			</div>
			<?php } ?>
			
			 <?php if ($isEmbedded_v2) { ?>
        
	    <div class="details_columns">			 
        <label>Add to Widget Container:</label>
        <br />	
			<div class="select-button">
				<a id="tool-select-button" href="#"><?php print("Select") ?> </a>
				<script type="text/javascript">
					<?php 
						global $base_url;
						//check for an alias using drupal_lookup_path()
						if((drupal_lookup_path('alias', 'node/'.$nid)!==false))
							$alias = drupal_lookup_path('alias', 'node/'.$nid);
						$uri= $base_url.'/'.$alias;
					?>
					$('#tool-select-button').click(function() {
						var envelope = {
								  type: "select",
								  uri: "<?php print($uri) ?>"
								};
				
								var message = {
								    "http://www.w3.org/1999/02/22-rdf-syntax-ns#type":
											"http://purl.org/role/terms/Bundle", 
								    "http://purl.org/dc/terms/title": "<?php print($title) ?>",
								    "http://purl.org/dc/terms/description": "<?php print($node->field_bundle_short_description[0]['value']) ?>"
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
			
		</div>
		<div class="functionalities_container">
			<h2>Functionalities of the tools</h2>
			<div class="functionalities">
				<?php if($bundle_functionalities != ""){				
					print $bundle_functionalities;
				}else{
					print t("No functionalities are defined in the tools of the bundle.");
				} ?>
			</div>			
		</div>
		<div class="learning_domains_container">
			<h2>Learning Domains</h2>
			<div class="learning_domains">				
			<?php if($tool_domains != ""){				
					print $tool_domains;
				}else{
					print t("No learning domains are defined for the bundle.");
				} ?>	
			</div>			
		</div>
		<!-- <div class="preview_container">
			<a href="#">Preview the bundle</a>			
		</div> -->
		<div class="clearBoth"></div>
		
		
		<div class="ls_tools-information-tabs">
			<script>
				$(function() {	
					$( "#tabs" ).tabs();
				});
			</script>
			<?php #dpm($node);?>
			<div id="tabs">
				<ul>
					<li><a href="#tabs-1">Tools</a></li>
					
					<?php if (count($node->field_screenshots) != 0 
  		  						&& $node->field_screenshots[0]['view'] != ""){
  		  			?>
					<li><a href="#tabs-2">Screenshots</a></li>
					<?php } ?>
					
					<?php if ($node->field_use_case[0]['value'] != ""){ ?>
					<li><a href="#tabs-3">Use Case</a></li>
					<?php } ?>
					
					<?php 
					if (!$artifacts_empty){ ?>
					<li><a href="#tabs-4">Additional Content</a></li>
					<?php } ?>
					
					<?php if (count($node->field_screencasts) != 0
								&& $node->field_screencasts[0]['view'] != ""){
  		  			?>

					<li><a href="#tabs-5">Screencasts</a></li>
					<?php } ?>
					
					<?php if(module_exists('user_report')){ ?>
					<li><a href="#tabs-6">User Reports</a></li>
					<?php } ?>
					
				</ul>
				<div id="tabs-1">
				<?php 
					$view_args = array($node->nid);
					$display_id = 'page_1';
					$view = views_get_view('bundle_tool');
				?>
					<div class="tab_infobox ui-corner-top">
						This is the selection of tools which the Bundle contains. 
						Click one to get further information.
					</div>
					<div class="tools_container ui-corner-bottom">
						<?php
							if (!empty($view)) {
								print $view->execute_display($display_id , $view_args);
								//add page title again as the view removed it
								drupal_set_title($node->title);
							}
							
						?>
									
						<?php if(is_array($node->bundle_tool) && count($node->bundle_tool )){
								foreach($node->field_bundle_tools as $row){ ?>
								<div class="bundle_tool">
									<a href="<?php print url($row->path); ?>" class="title" target="_blank">
										<?php 
											if($row->field_tool_thumbnail[0]){
												print theme('lstool_thumbnail',$row,$teaser);
											} 
										?>
										<strong><?php print $row->title; ?></strong><br />
										<?php print $row->teaser; ?>
									</a>
									
									
									<div class="clearBoth"></div>
									<!-- <div class="bundle_tool_arrow"></div> -->
								</div>
							<?php } 
							 } ?>
						<div class="clearBoth"></div>
						<script type="text/javascript">
							$(document).ready(function(){
								//get the div-collection of the bundle tools 
								var bundle_tools = $(".bundle_tool"),
									i;
								
								for(i=0;i<bundle_tools.length;i++){
									//mousedown is used because the event needs also 
									//to be fired on a middle mousebutton-click
									$(bundle_tools[i]).mousedown(function(e){
										// e.which is either 1>left mousebutton, 2>middle mousebutton, 3>right mousebutton
										if(e.which < 3){
											//identify which object was clicked. if its the link in the box, do nothing
											if(e.target.tagName == 'DIV'){
												//get "the one link" in the box and its href
												var link = e.target.getElementsByTagName("a")[0].href;
												window.open(link, "_blank");
											}
										}
									});
								}
							});
						</script>					
					</div>
					<div class="clearBoth"></div>
					
				</div>
				
				<?php if (count($node->field_screenshots) != 0 
  		  						&& $node->field_screenshots[0]['view'] != ""):
  		  			?>
  		  		<div id="tabs-2">
  		  			<?php
						$view_args = array($node->nid);
						$display_id = 'page_1';
						$view = views_get_view('bundle_screenshots');
						if (!empty($view)) {
							print $view->execute_display($display_id , $view_args);
							//add page title again as the view removed it
							drupal_set_title($node->title);#
						}
					?>
  		  		</div>
  		  		<?php endif; ?>
  		  		<?php if ($node->field_use_case[0]['value'] != ""): ?>
  		  		<div id="tabs-3">
  		  			<div class="ui-tabs-panel-inner ui-corner-all">
  		  				<?php print $node->field_use_case[0]['value']; ?>
  		  			</div>
  		  		</div>
  		  		<?php endif; ?>	
  		  		
  		  		<?php if (!$artifacts_empty){ ?>
  		  		<div id="tabs-4">
  		  			<div class="ui-tabs-panel-inner ui-corner-all">
  		  				<?php //echo '<pre>'.htmlentities(print_r($node->additional_content, true)). '</pre>'; ?>
	  		  			<ul class="bundle-additional-content-container">
	  		  				<?php
	  		  				$html = '';
	  		  				foreach($node->additional_content as $contentKey=>$contents){
	  		  					if($contentKey != 'field_additional_content_descrip' && $contentKey != 'field_additional_content_title'){
	  		  						$empty = false;
	  		  						foreach( $contents as $key => $content){
	  		  							if($content['view'] == ''){
	  		  								$empty = true;
	  		  							}else{
	  		  								$empty = false;
	  		  								break;
	  		  							}
	  		  						}
	  		  						if(!$empty){
		  		  						foreach( $contents as $key => $content){
		  		  							//Rule #2: Double Tap
		  		  							if($content['view'] != ''){
					  		  					$html .= '<li>';
					  		  					
			  		  							$html .= '<div class="bundle-additional-content-content">';
			  		  							if($contentKey == 'field_additional_content_link'){
			  		  								$images = array();
			  		  								
			  		  								$html .= '<a href="'. $content['url'] .'" target="_blank">'
			  		  											. '<img src="/sites/all/themes/fusion/role_widget_store/images/link_external.png" alt="'.$node->additional_content['field_additional_content_title'][$key]['view'].'" />'
					  		  								. '</a>';
			  		  							}else{
			  		  								$html .= $content['view'];
			  		  							}
			  		  							$html .= '</div>';
			  		  							if($node->additional_content['field_additional_content_title'][$key]['view']
			  		  								|| $node->additional_content['field_additional_content_descrip'][$key]['view']){
				  		  							$html .= '<div class="bundle-additional-content-description">'
					  		  									.( ($node->additional_content['field_additional_content_title'][$key]['view']) ? '<h2>'.$node->additional_content['field_additional_content_title'][$key]['view'].'</h2>' : '')
				  		  										. $node->additional_content['field_additional_content_descrip'][$key]['view']
				  		  									.'</div>';
			  		  							}
			  		  							$html .= '<div class="clearBoth"></div>';
			  		  							
				  		  						$html .= '</li>';
		  		  							}
		  		  						}//foreach
	  		  						}//!empty
	  		  					}
	  		  				}
	  		  				echo($html);
	  		  				
	  		  				?>
  		  				</ul>
  		  			</div>
  		  		</div>
  		  		<?php } ?>
  		  		
				<?php if (count($node->field_screencasts) != 0
							&& $node->field_screencasts[0]['view'] != ""){
  	  			?>
  		  		<div id="tabs-5">
  		  			<div class="ui-tabs-panel-inner ui-corner-all">
  		  				<?php #echo '<pre>'.print_r($node->field_bundle_screencasts, true). '</pre>'; ?>
	  		  				<?php
	  		  				$html = '';
	  		  				foreach($node->field_screencasts as $cast){
	  		  					$html .= '<div class="bundle_screencast">';
	  		  						$html .= '<div class="bundle_screencast_video">';
	  		  							$html .= $cast['view'];
	  		  						$html .= '</div>';
	  		  						$html .= '<strong>';
	  		  							$html .= $cast['title'];
	  		  						$html .= '</strong>';
	  		  						$html .= '<br />';
	  		  						$html .= $cast['description'];
		  		  					$html .= '<div class="clearBoth"></div>';
	  		  					$html .= '</div>';
	  		  				}
	  		  				echo($html);
	  		  				
	  		  				?>
  		  			</div>
  		  		</div>
  		  		<?php } ?>
  		  		
  		  		<?php if(module_exists('user_report')){ ?>
  		  		<div id="tabs-6">
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
			<div id="user_report">
				Did you use this bundle?
				<strong>
					<a href="/node/add/user-report/<?php echo $node->nid; ?>" target="_blank">Write report</a>
				</strong>
			</div>
			
			<div class="clearBoth"></div>
		</div>
		<div class="clearBoth"></div>
	</div>

    <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
    <?php endif; ?>
    <!-- 
    <pre>
    <?php #var_dump($node);?>
    </pre>
    -->
    
  </div><!-- /inner -->

</div><!-- /node-<?php print $node->nid; ?> -->

<?php } //if teaser ?>


