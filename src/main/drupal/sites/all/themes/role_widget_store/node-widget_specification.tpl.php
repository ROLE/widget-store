<?php
// $Id: node.tpl.php,v 1.1.2.1 2010/06/17 07:54:57 sociotech Exp $

//prepare a String with all tags (without links)
$tag_string = "";
if(module_exists("taxonomy")){

	//get all vocabularies
	$vocabularies = taxonomy_get_vocabularies();
	

	//search for a specific vocabulary to get the vocabulary id (vid)
	foreach($vocabularies as $vocabulary) {

		if ($vocabulary->name == "Widget Specification Tags") {
				
			//get all terms for a given ndoe and a vid
			$arrTerms = taxonomy_node_get_terms_by_vocabulary($node, $vocabulary->vid);
				
			//create a string of all returned terms
			if(is_array($arrTerms) && count($arrTerms)){
				foreach ($arrTerms as $key=>$term) {
					$tag_string .= '<span class="term term-' . $term->tid . '">' .$term->name.'</span>';
				}
			}
		}
	}
}
if($tag_string == ""){
	$tag_string = '<span class="no-tags">'.t('No tags defined').'</span>';
}


//get workflow state
$workflow_state_array = workflow_get_state($node->_workflow);
$workflow_state = $workflow_state_array['state'];
if($workflow_state == ""){
	$workflow_state == "Draft";
}

?>

<div id="node-<?php print $node->nid; ?>" class="node <?php print $node_classes; ?>">
	<div class="inner">

		<div class="general-information">
			<div class="workflow-status-wrapper">
				<div class="workflow-status workflow-status-<?php print $workflow_state ?>">
					<div class="workflow-status-text"><?php print $workflow_state ?></div>
				</div>
			</div>
			<div class="submission-information">
				<table>
					<tbody>
						<tr>
							<td class="row-1"><?php print t("Submitted by"); ?>:</td>
							<td class="row-2"><?php print ("<a href='".url('user/'.$node->uid)."'>".$node->name."</a>"); ?>
							</td>
						</tr>
						<tr>
							<td><?php print t("Created"); ?>:</td>
							<td><?php print(format_date($node->created, 'custom', 'm.d.Y - H:i')) ?>
							</td>
						</tr>
						<tr>
							<td><?php print t("Status"); ?>:</td>
							<td><?php print $workflow_state; ?></td>
						</tr>
						<tr>
							<td><?php print t("Tags"); ?>:</td>
							<td><?php print $tag_string; ?></td>
						</tr>
						
						
						<tr>
							<td><?php print t("Reference"); ?>:</td>
							<td>
							<?php if ($node->field_implementation_reference[0]['view'] != ""): ?>
								<?php print $node->field_implementation_reference[0]['view']; ?>
							<?php else: ?>	
								<?php print t("No implementation reference available"); ?>
							<?php endif; ?>
							</td>
							
						</tr>
						
					</tbody>
				</table>
			</div>
			<div class="type-logo">
	
			</div>
			<div class="cleaner"></div>
		</div>


		
		<div class="description">
			<?php print($node->content[body]['#value']); ?>
  		</div>

<?php
if (!$teaser){ //START teaser
?>


  		<div class="ls_tools-information-tabs">
  			<div id="tabs">
  				<ul>
  					<?php if (count($node->field_screenshot_mockups) != 0 
  		  						&& $node->field_screenshot_mockups[0]['view'] != ""):
  		  			?>
					<li><a href="#tabs-1">Mockups</a></li>
					<?php endif; ?>	  				
					<?php if ($node->field_use_case[0]['value'] != ""): ?>
					<li><a href="#tabs-2">Use Case</a></li>
					<?php endif; ?>
				</ul>
  						
  		  			<?php if (count($node->field_screenshot_mockups) != 0 
  		  						&& $node->field_screenshot_mockups[0]['view'] != ""):
  		  			?>
  		  			<div id="tabs-1">
  		  				<?php
  		  				  	$view_args = array($node->nid);
  		  				  	$display_id = 'page_1';
  		  				  	$view = views_get_view('widget_specification_mockups');
							if (!empty($view)) {
								print $view->execute_display($display_id , $view_args);
								
								//add page title again as the view removed it
								drupal_set_title($node->title);
  		  				  	}
  		  				?>
  		  			</div>
  		  			<?php endif; ?>
  		  			<?php if ($node->field_use_case[0]['value'] != ""): ?>
  		  			<div id="tabs-2">
  		  				<div class="ui-tabs-panel-inner ui-corner-all">
  		  					<?php print $node->field_use_case[0]['value']; ?>
  		  				</div>
  		  			</div>
  		  			<?php endif; ?>
  		  		</div>
  					<div class="cleaner"></div>
  				</div>
  				<script>
  		  		$(function() {	
  		  			$( "#tabs" ).tabs();
  		  		});
  		  	</script>

			<?php if (user_access('create widget_specification_review content')):?>
			<div class="create-widget-specification-review-link">
			  		
				<a href="<?php print url('node/add/widget-specification-review/'.$node->nid ); ?>" 
					title="Submit a review for this widget specification.">Submit a review for this widget specification</a>
			</div>
			<?php endif; ?>

<?php 
} // END full node
?>
  		  	
    <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
    <?php endif; ?>
  </div>
	<!-- /inner -->
</div><!-- /node-<?php print $node->nid; ?> -->



