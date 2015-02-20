<?php
/**
 * @file
 * slideshow_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function slideshow_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|slideshow_slide|slideshow_slide|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'slideshow_slide';
  $field_group->bundle = 'slideshow_slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'field_enable_this_slide',
      1 => 'field_slide_link',
      2 => 'field_slide_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|slideshow_slide|slideshow_slide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_imagery|slideshow_slide|slideshow_slide|form';
  $field_group->group_name = 'group_imagery';
  $field_group->entity_type = 'slideshow_slide';
  $field_group->bundle = 'slideshow_slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Imagery',
    'weight' => '3',
    'children' => array(
      0 => 'field_slide_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-imagery field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_imagery|slideshow_slide|slideshow_slide|form'] = $field_group;

  return $export;
}
