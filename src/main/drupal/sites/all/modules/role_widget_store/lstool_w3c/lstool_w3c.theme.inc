<?php

/**
* display a download-link
*
* @ingroup themeable
*/
function theme_lstool_w3c_download($node) {
	$output = '<div class="lstool-xml-url">';
	$output .= drupal_get_form('lstool_opensocial_source_form', $node);
	$output .= '</div>';
	return $output;
}