<?php
/**
 * @file
 * Number field provider.
 */

$plugin = array(
  'title' => t('Number'),
  'field modules' => array('number'),
  'map callback' => 'simplerdf_content_mapper_number_map',
  'weight' => -10,
);

/**
 * Map numeric field value.
 */
function simplerdf_content_mapper_number_map($node, $uri, $property, $field, $value) {
  if (isset($value['value'])) {
    $s = simplerdf_make_subject('uri', $uri);
    $p = simplerdf_make_predicate($property);

    // Provide specific data types
    switch ($field['field type']) {
      case 'number_integer':
        $range = 'xsd:integer';
        break;

      case 'number_decimal':
        $range = 'xsd:decimal';
        break;

      case 'number_float':
        $range = 'xsd:float';
        break;
    }

    $o = simplerdf_make_object('literal', $value['value'], $range);
    return array($s + $p + $o);
  }
}
