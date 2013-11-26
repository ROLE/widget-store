<?php
// $Id: hulu.inc,v 1.1 2009/03/13 02:30:39 aaron Exp $

/**
 * @file
 *   This include processes hulu.com media files for use by emfield.module.
 */

define('EMVIDEO_HULU_MAIN_URL', 'http://www.hulu.com/');

/**
 *  This defines the version of the content data array that we serialize
 *  in emvideo_hulu_data(). If we change the expected keys of that array,
 *  we must increment this value, which will allow older content to be updated
 *  to the new version automatically.
 */
define('EMVIDEO_HULU_DATA_VERSION', 1);

/**
 * hook emvideo_PROVIDER_info
 * this returns information relevant to a specific 3rd party video provider
 * @return
 *   an array of strings requested by various admin and other forms
 *   'name' => the translated name of the provider
 *   'url' => the url to the main page for the provider
 *   'settings_description' => a description of the provider that will be posted in the admin settings form
 *   'supported_features' => an array of rows describing the state of certain supported features by the provider.
 *      These will be rendered in a table, with the columns being 'Feature', 'Supported', 'Notes'.
 */
function emvideo_hulu_info() {
  $features = array(
    array(t('Autoplay'), t('Yes'), ''),
    array(t('RSS Attachment'), t('Yes'), ''),
    array(t('Thumbnails'), t('Yes'), t('')),
    array(t('Full screen mode'), t('Yes'), t('You may customize the player to enable or disable full screen playback. Full screen mode is enabled by default.')),
  );
  return array(
    'provider' => 'hulu',
    'name' => t('Hulu'),
    'url' => EMVIDEO_HULU_MAIN_URL,
    'settings_description' => t('These settings specifically affect videos displayed from !hulu.', array('!hulu' => l(t('Hulu.com'), EMVIDEO_HULU_MAIN_URL))),
    'supported_features' => $features,
  );
}

/**
 * hook emvideo_PROVIDER_settings
 * this should return a subform to be added to the emvideo_settings() admin settings page.
 * note that a form field will already be provided, at $form['PROVIDER'] (such as $form['hulu'])
 * so if you want specific provider settings within that field, you can add the elements to that form field.
 */
function emvideo_hulu_settings() {
}

/**
 * hook emfield_PROVIDER_data
 *
 * provides an array to be serialised and made available with $item elsewhere
 */
function emvideo_hulu_data($field, $item) {
  $xml = emfield_request_xml('hulu', 'http://www.hulu.com/api/oembed.xml?url=http%3A//www.hulu.com/watch/'. $item['value'], array(), TRUE, FALSE, $item['value']);


//<object width="512" height="296"><param name="movie" value="http://www.hulu.com/embed/0-njKp22bl4GivFXH0lh5w"></param><embed src="http://www.hulu.com/embed/0-njKp22bl4GivFXH0lh5w" type="application/x-shockwave-flash" width="512" height="296"></embed></object>

  // We have to extract the embed code from the xml.
  $html = $xml['OEMBED']['HTML'][0];
  preg_match('@hulu.com/embed/([^"]+)@i', $xml['OEMBED']['HTML'][0], $matches);

  $data = array();
  // Create some 'field' version control.
  $data['emvideo_hulu_version'] = EMVIDEO_HULU_DATA_VERSION;

  // Be nice to make this an array for changing media:thumbnail?
  $data['thumbnail'] = $xml['OEMBED']['THUMBNAIL_URL'][0];
  $data['embed'] = $matches[1];
  return $data;
}

/**
 *
 */
function emvideo_hulu_rss($item, $teaser = NULL) {
}

/**
 * hook emvideo_PROVIDER_extract
 * this is called to extract the video code from a pasted URL or embed code.
 * @param $embed
 *   an optional string with the pasted URL or embed code
 * @return
 *   either an array of regex expressions to be tested, or a string with the video code to be used
 *   if the hook tests the code itself, it should return either the string of the video code (if matched), or an empty array.
 *   otherwise, the calling function will handle testing the embed code against each regex string in the returned array.
 */
function emvideo_hulu_extract($embed = '') {
  // http://www.hulu.com/watch/1404/saturday-night-live-snl-digital-short-natalie-raps
  return array(
    '@\.hulu\.com/watch/([^\?]+)@i',
  );
}

/**
 * hook emvideo_PROVIDER_embedded_link($video_code)
 * returns a link to view the video at the provider's site
 *  @param $video_code
 *    the string containing the video to watch
 *  @return
 *    a string containing the URL to view the video at the original provider's site
 */
function emvideo_hulu_embedded_link($video_code) {
  return 'http://www.hulu.com/watch/'. $video_code;
}

/**
 * The embedded flash displaying the hulu video.
 */
function theme_emvideo_hulu_flash($item, $width, $height, $autoplay) {
  $output = '';
  if ($item['embed']) {
    $output = '<object width="'. $width .'" height="'. $height .'">';
    $output .= '<param name="movie" value="http://www.hulu.com/embed/'. $item['data']['embed'] .'">';
    $output .= '<param name="quality" value="best" />';
    $output .= '<param name="wmode" value="transparent" />';
    $output .= '<param name="allowFullScreen" value="'. $fullscreen .'" />';
    $output .= '<param name="scale" value="showAll" />';
    $output .= '<embed src="http://www.hulu.com/embed/'. $item['data']['embed'] .'" type="application/x-shockwave-flash" allowFullScreen="'. $fullscreen .'"  width="'. $width .'" height="'. $height .'"></embed>';
    $output .= '</object>';
  }
  return $output;
}

/**
 * hook emvideo_PROVIDER_thumbnail
 * returns the external url for a thumbnail of a specific video
 * TODO: make the args: ($embed, $field, $item), with $field/$item provided if we need it, but otherwise simplifying things
 *  @param $field
 *    the field of the requesting node
 *  @param $item
 *    the actual content of the field from the requesting node
 *  @return
 *    a URL pointing to the thumbnail
 */
function emvideo_hulu_thumbnail($field, $item, $formatter, $node, $width, $height) {
  return $item['data']['thumbnail'];
}

/**
 * hook emvideo_PROVIDER_video
 * this actually displays the full/normal-sized video we want, usually on the default page view
 *  @param $embed
 *    the video code for the video to embed
 *  @param $width
 *    the width to display the video
 *  @param $height
 *    the height to display the video
 *  @param $field
 *    the field info from the requesting node
 *  @param $item
 *    the actual content from the field
 *  @return
 *    the html of the embedded video
 */
function emvideo_hulu_video($embed, $width, $height, $field, $item, &$node, $autoplay) {
  $output = theme('emvideo_hulu_flash', $item, $width, $height, $autoplay);
  return $output;
}

/**
 * hook emvideo_PROVIDER_video
 * this actually displays the preview-sized video we want, commonly for the teaser
 *  @param $embed
 *    the video code for the video to embed
 *  @param $width
 *    the width to display the video
 *  @param $height
 *    the height to display the video
 *  @param $field
 *    the field info from the requesting node
 *  @param $item
 *    the actual content from the field
 *  @return
 *    the html of the embedded video
 */
function emvideo_hulu_preview($embed, $width, $height, $field, $item, &$node, $autoplay) {
  $output = theme('emvideo_hulu_flash', $item, $width, $height, $autoplay);
  return $output;
}

/**
 * Implementation of hook_emfield_subtheme.
 */
function emvideo_hulu_emfield_subtheme() {
    $themes = array(
        'emvideo_hulu_flash'  => array(
            'arguments' => array('item' => NULL, 'width' => NULL, 'height' => NULL, 'autoplay' => NULL),
            'file' => 'providers/hulu.inc',
            'path' => drupal_get_path('module', 'media_hulu'),
        )
    );
    return $themes;
}
