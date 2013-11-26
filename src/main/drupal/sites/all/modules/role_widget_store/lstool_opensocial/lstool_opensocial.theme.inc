<?php
/**
 * Format a tool's add to container panel.
 *
 * @ingroup themeable
 */
function theme_lstool_opensocial_embed_code($node) {
  $output = '<div class="lstool-embed-code">';#
  //TODO: MOVE TO OPENSOCIAL
  $output .= drupal_get_form('lstool_opensocial_embed_code_form', $node);;
  $output .= '</div>';
  return $output;
}

/**
* Format a tools's add to container panel.
*
* @ingroup themeable
*/
function theme_lstool_opensocial_source($node) {
	$output = '<div class="lstool-xml-url">';
	$output .= drupal_get_form('lstool_opensocial_source_form', $node);
	$output .= '</div>';
	return $output;
}


/**
 * Format a tools's preview.
 *
 * @ingroup themeable
 */
function theme_lstool_opensocial_preview($node) {
  $shindigServer = getShindigServer();
  $shindigUrl = $shindigServer->customURL ? $shindigServer->customURL : $shindigServer->defaultURL;
  // TODO: Put all js-code into separate js-file with a function and call it and add with drupal_add_js()
  $output  = '<div id="gadget-parent" style="width: 100%"></div><br style="clear: both;" />' . "\n";
  $output .= '<script type="text/javascript" src="' . $shindigUrl . '/gadgets/js/shindig-container:rpc.js?c=1"></script>' . "\n";
  $output .= '<script type="text/javascript">' . "\n";
  // XXX: Testing for no theme
  $output .= "displayGadget();\n";
  
//  $output .= '$("#tabs").bind( "tabsshow", function(event, ui) {
//    if (ui.panel.id == "tabs-2") {
//      if (!$("#gadget-parent").html())
//        displayGadget();
//    }
//  });' . "\n";
  $output .= 'function displayGadget() {' . "\n";
  $output .= 'var specUrl0 = "'.$node->source.'";' . "\n";
  $output .= 'shindig.container.layoutManager = new shindig.FloatLeftLayoutManager("gadget-parent");' . "\n";
  $output .= 'var gadget = shindig.container.createGadget({specUrl: specUrl0, width: "100%", height: "'.((int) $node->height).'"});' . "\n";
  $output .= 'shindig.container.addGadget(gadget);' . "\n";
  $output .= 'shindig.container.renderGadgets();' . "\n";
  $output .= '}' . "\n";
  $output .= '</script>' . "\n";
  return $output;
}

/**
 * Format a tool's add to container panel.
 *
 * @ingroup themeable
 */
function theme_lstool_opensocial_add_to_container($node,$teaser) {
	$output = '<div class="lstool-add-to-container">';

		$output .= '<a target="_blank" href="http://fusion.google.com/add?source=atgs&moduleurl='.$node->source.'">';
		$output .= '<img src="http://buttons.googlesyndication.com/fusion/add.gif" border="0" alt="Add to Google">';
		$output .= '</a>';
	
	$output .= '</div>';
	return $output;
}