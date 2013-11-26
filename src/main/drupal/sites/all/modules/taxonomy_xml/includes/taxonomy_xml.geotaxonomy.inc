<?php
/**
 * @file Support for geotaxonomy data when importing or exporting terms
 */

/**
 * Add geotag information to the export document.
 *
 * Produce something like:
 *
 * <geo:lat>40.442673</geo:lat><geo:long>-79.945815</geo:long>
 *
 * HOOK_taxonomy_xml_rdf_export_term
 *
 * @param $termnode The context to add attributes to, an XML term element,
 * already partially built. Modified by reference
 *
 * @param $term The term being exported
 */
function geotaxonomy_taxonomy_xml_rdf_export_term($termnode, $term) {
  if (! _geotaxonomy_vocabulary_enabled($term->vid)) {
    return;
  }
  $dom = $termnode->owner_document();
  $latlon = geotaxonomy_get_term($term->tid);
  if (isset($latlon['lat'])) {
    $lat_node = $dom->createelementns(TAXONOMY_XML_GEO_NS, 'geo:lat', trim($latlon['lat']));
    $termnode->appendchild($lat_node);
  }
  if (isset($latlon['lon'])) {
    $lon_node = $dom->createelementns(TAXONOMY_XML_GEO_NS, 'geo:lon', trim($latlon['lon']));
    $termnode->appendchild($lon_node);
  }

  // KML bounding box also?
  // This is NOT a correct RDF representation of KML as far as I know,
  // but if I have the data, I can use it.:
  // geo does not yet support even bounding boxes, so avoid it.
  $geotaxonomy_kml_map = array(
    'bound_top' => 'north',
    'bound_bottom' => 'south',
    'bound_left' => 'west',
    'bound_right' => 'east',
  );
  // Only process this if all values are really available
  $bounds_available = TRUE;
  foreach ($geotaxonomy_kml_map as $geo_direction => $kml_direction) {
    if (! isset($latlon[$geo_direction])) {
      $bounds_available = FALSE;
    }
  }
  if ($bounds_available) {
    $region_node = $dom->createelementns(TAXONOMY_XML_KML_NS, 'kml:Region');
    $termnode->appendchild($region_node);
    $latlonaltbox_node = $dom->createelementns(TAXONOMY_XML_KML_NS, 'kml:LatLonAltBox');
    $region_node->appendchild($latlonaltbox_node);
    foreach ($geotaxonomy_kml_map as $geo_direction => $kml_direction) {
      $direction_node = $dom->createelementns(TAXONOMY_XML_KML_NS, 'kml:' . $kml_direction, trim($latlon[$geo_direction]));
      $latlonaltbox_node->appendchild($direction_node);
    }
  }
}

/**
 * Add the expected namespaces to the root of the document during construction.
 */
function geotaxonomy_taxonomy_xml_rdf_document_setup($domcontainer) {
  taxonomy_xml_rdf_add_namespace($domcontainer, TAXONOMY_XML_GEO_NS, 'geo');
  taxonomy_xml_rdf_add_namespace($domcontainer, TAXONOMY_XML_KML_NS, 'kml');
}
