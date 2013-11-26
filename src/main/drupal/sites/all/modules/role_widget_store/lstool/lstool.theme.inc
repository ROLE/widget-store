<?php
/**
 * Rendering the Theme
 *
 * @author Daniel Dahrendorf
 * @author Andreas Diehl
 * @package Role-Widgetstore
 * @subpackage Drupal-Module
 */

/*
 * Contains the theme functions for the lstool module
 *
 */

/**
 * Format a tool's author.
 *
 * @ingroup themeable
 */
function theme_lstool_author($node) {
	
	if($node->author == ""){
		$author = t("n/a");
	}else{
		$author = $node->author;
	}
	
	$output = '<div class="lstool-author">';
	$output .= $author;
	$output .='</div>';
	return $output;
}

/**
 * Format a tool's author email.
 *
 * @ingroup themeable
 */
function theme_lstool_author_email($node) {
	$output = '<div class="lstool-author-email">';
	$output .= $node->author_email;
	$output .='</div>';
	return $output;
}

/**
 * Format a tool's thumbnail.
 *
 * @ingroup themeable
 */
function theme_lstool_thumbnail($node, $teaser) {

	//TODO: check why teaser is not transmitted correct

	$node_url = drupal_lookup_path('alias',"node/".$node->nid);
	//Failover:
	if ($node_url = '/') {
		$node_url = 'node/' . $node->nid;
	}
	$image_html = theme_image(
	$node->thumbnail_path,
	$alt = $node->title,
	$title = $node->title,
	NULL,
	FALSE
	);
	
	if($teaser){
		$output = '<div class="lstool-thumbnail">';
 		$output .= '<a href="/'.$node_url.'">';
		$output .= '<div class="lstool-thumbnail-overlay"></div>';
		$output .= '<div class="lstool-thumbnail-overlay-top"></div>';
		$output .= '<div class="lstool-thumbnail-overlay-mid"></div>';
		$output .= '<div class="lstool-thumbnail-overlay-bottom"></div>';
 		$output .=  theme('imagefield_image', $node->field_tool_thumbnail[0], "Tool Thumbnail", "Tool Thumbnail");
		$output .= '</a>';
		$output .='</div>';
	}else{
		$output = '<div class="lstool-thumbnail">';
		$output .= '<div class="lstool-thumbnail-overlay"></div>';
		$output .= '<div class="lstool-thumbnail-overlay-top"></div>';
		$output .= '<div class="lstool-thumbnail-overlay-mid"></div>';
		$output .= '<div class="lstool-thumbnail-overlay-bottom"></div>';
		$output .= theme('imagefield_image', $node->field_tool_thumbnail[0], "Tool Thumbnail", "Tool Thumbnail");
		$output .='</div>';
	}

	return $output;
}

/**
 * Format a tools's body.
 *
 * @ingroup themeable
 */
function theme_lstool_body($body) {
	$output = '<div class="lstool-body">';
	$output .= $body;
	$output .='</div>';
	return $output;
}

/**
 * Format a lstool's screenshot.
 *
 * @ingroup themeable
 */
function theme_lstool_screenshot($node) {

	if ($node->screenshot_path) {
		$imagepath = $node->screenshot_path;
	} else {
		$imagepath = '';
	}

	$image_html = theme_image(
		$imagepath,
		$alt = 'lstool Screenshot',
		$title = 'lstool Screenshot',
		NULL,
		FALSE
	);


	$output = '<div class="lstool-screenshot">';
 	$output .= theme('imagefield_image', $node->field_tool_screenshots[0], "Tool Screenshot", "Tool Screenshot");
	$output .='</div>';
	return $output;
}

/**
 * Format license
 * @param node $node
 */
function theme_lstool_license($node) {
	$output = '<div class="license">';
	$output .= $node->license;
	$output .= '</div>';
	return $output;
}

/**
 * Format license details
 * @param node $node
 */
function theme_lstool_license_details($node) {
	$output = '<div class="license_details">';
	$output .= $node->license_details;
	$output .= '</div>';
	return $output;
}

/**
 * Format a tool's specification.
 *
 * @ingroup themeable
 */
function theme_lstool_specification($node,$teaser) {

	$output = '<div class="lstool-specification">';
	$output .= $node->specification_id;
	$output .='</div>';
	return $output;
}

?>
