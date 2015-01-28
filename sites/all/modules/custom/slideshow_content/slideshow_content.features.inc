<?php
/**
 * @file
 * slideshow_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slideshow_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slideshow_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function slideshow_content_eck_bundle_info() {
  $items = array(
  'slideshow_slide_slideshow_slide' => array(
  'machine_name' => 'slideshow_slide_slideshow_slide',
  'entity_type' => 'slideshow_slide',
  'name' => 'slideshow_slide',
  'label' => 'Slideshow Slide',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function slideshow_content_eck_entity_type_info() {
$items = array(
       'slideshow_slide' => array(
  'name' => 'slideshow_slide',
  'label' => 'Slideshow Slide',
  'properties' => array(
    'title' => array(
      'label' => 'Title',
      'type' => 'text',
      'behavior' => 'title',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
  ),
),
  );
  return $items;
}
