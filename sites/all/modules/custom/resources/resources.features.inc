<?php
/**
 * @file
 * resources.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function resources_eck_bundle_info() {
  $items = array(
    'resource_links_resource_links' => array(
      'machine_name' => 'resource_links_resource_links',
      'entity_type' => 'resource_links',
      'name' => 'resource_links',
      'label' => 'Resource Links',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function resources_eck_entity_type_info() {
  $items = array(
    'resource_links' => array(
      'name' => 'resource_links',
      'label' => 'Resource Links',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}
