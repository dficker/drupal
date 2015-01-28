<?php
/**
 * @file
 * slideshow_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slideshow_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_slideshow_slide';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slideshow Slides';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Slideshow Slide */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Enable this slide',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'slideshow_slide::field_enable_this_slide' => 'slideshow_slide::field_enable_this_slide',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Slideshow Slide: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Slideshow Slide: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Slideshow Slide: Slide Text */
  $handler->display->display_options['fields']['field_slide_text']['id'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['table'] = 'field_data_field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['field'] = 'field_slide_text';
  /* Field: Slideshow Slide: Slide Link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  /* Field: Slideshow Slide: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'n/d/Y - g:i a';
  /* Field: Slideshow Slide: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['label'] = '';
  $handler->display->display_options['fields']['delete_link']['element_label_colon'] = FALSE;
  /* Field: Slideshow Slide: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = '';
  $handler->display->display_options['fields']['edit_link']['element_label_colon'] = FALSE;

  /* Display: Page - Slideshow Manager */
  $handler = $view->new_display('page', 'Page - Slideshow Manager', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/admin/structure/entity-type/slideshow_slide/slideshow_slide/add" title="Add Slideshow Slide" class="button">+ Add Slideshow Slide</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Slideshow Slide */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Enable this slide',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'slideshow_slide::field_enable_this_slide' => 'slideshow_slide::field_enable_this_slide',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Slideshow Slide: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Slideshow Slide: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = 'Slide';
  $handler->display->display_options['fields']['field_slide_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_image']['alter']['text'] = '<h3>[title]</h3>
[field_slide_image]';
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Slideshow Slide: Slide Text */
  $handler->display->display_options['fields']['field_slide_text']['id'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['table'] = 'field_data_field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['field'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['label'] = 'Text';
  /* Field: Slideshow Slide: Slide Link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  /* Field: Slideshow Slide: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'n/d/Y - g:i a';
  /* Field: Slideshow Slide: Enable this slide */
  $handler->display->display_options['fields']['field_enable_this_slide']['id'] = 'field_enable_this_slide';
  $handler->display->display_options['fields']['field_enable_this_slide']['table'] = 'field_data_field_enable_this_slide';
  $handler->display->display_options['fields']['field_enable_this_slide']['field'] = 'field_enable_this_slide';
  $handler->display->display_options['fields']['field_enable_this_slide']['label'] = 'Status';
  /* Field: Slideshow Slide: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['label'] = '';
  $handler->display->display_options['fields']['delete_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_link']['element_label_colon'] = FALSE;
  /* Field: Slideshow Slide: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_link']['alter']['text'] = '[edit_link] [delete_link]';
  $handler->display->display_options['fields']['edit_link']['element_label_colon'] = FALSE;
  /* Field: Draggableviews: Slideshow Slide */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Sort criterion: Slideshow Slide: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['path'] = 'admin/content/slideshow';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Slideshow Slides';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Slideshow Block */
  $handler = $view->new_display('block', 'Slideshow Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['general'] = array(
    'mode' => 'fade',
    'speed' => '300',
    'slideMargin' => '0',
    'startSlide' => '0',
    'randomStart' => 0,
    'infiniteLoop' => 1,
    'hideControlOnEnd' => 0,
    'captions' => 0,
    'ticker' => 0,
    'tickerHover' => 0,
    'adaptiveHeight' => 0,
    'adaptiveHeightSpeed' => '500',
    'video' => 0,
    'touchEnabled' => 1,
    'preloadImages' => 'all',
    'disable_standard_css' => 0,
    'useCSS' => 1,
    'align_image' => 'left',
    'align_caption' => 'left',
    'swipeThreshold' => '50',
    'oneToOneTouch' => 1,
    'preventDefaultSwipeX' => 1,
    'preventDefaultSwipeY' => 0,
    'color_caption' => '80, 80, 80, 0.75',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['controlsfieldset'] = array(
    'controls' => 1,
    'nextText' => '',
    'prevText' => '',
    'startText' => '',
    'stopText' => '',
    'autoControls' => 0,
    'autoControlsCombine' => 0,
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['pagerfieldset'] = array(
    'pager' => 1,
    'pagerType' => 'full',
    'pagerShortSeparator' => ' / ',
    'pagerCustom' => '',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['autofieldset'] = array(
    'pause' => '4000',
    'autoStart' => 1,
    'auto' => 0,
    'autoHover' => '0',
    'autoDelay' => '0',
    'autoDirection' => 'next',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['carousel'] = array(
    'minSlides' => '1',
    'maxSlides' => '1',
    'moveSlides' => '0',
    'slideWidth' => '0',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['callback'] = array(
    'onSliderLoad' => '',
    'onSlideBefore' => '',
    'onSlideAfter' => '',
    'onSlideNext' => '',
    'onSlidePrev' => '',
  );
  $handler->display->display_options['style_options']['slideshow_type'] = 'bxslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_slide_link' => 0,
    'field_slide_link_1' => 0,
    'field_slide_link_2' => 0,
    'field_slide_text' => 0,
    'field_slide_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_slide_link' => 0,
    'field_slide_link_1' => 0,
    'field_slide_link_2' => 0,
    'field_slide_text' => 0,
    'field_slide_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Slideshow Slide: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Slideshow Slide: Slide Link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['alter']['text'] = '<a href="[field_slide_link-url]" title="[title]">';
  $handler->display->display_options['fields']['field_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link']['type'] = 'link_plain';
  /* Field: Slideshow Slide: Slide Link */
  $handler->display->display_options['fields']['field_slide_link_1']['id'] = 'field_slide_link_1';
  $handler->display->display_options['fields']['field_slide_link_1']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link_1']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['text'] = '</a>';
  $handler->display->display_options['fields']['field_slide_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link_1']['type'] = 'link_plain';
  /* Field: Slideshow Slide: Slide Link */
  $handler->display->display_options['fields']['field_slide_link_2']['id'] = 'field_slide_link_2';
  $handler->display->display_options['fields']['field_slide_link_2']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link_2']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link_2']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link_2']['alter']['text'] = '<a href="[field_slide_link_2-url]" title="[title]" class="button">[field_slide_link_2-title]</a>';
  $handler->display->display_options['fields']['field_slide_link_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link_2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link_2']['type'] = 'link_plain';
  /* Field: Slideshow Slide: Slide Text */
  $handler->display->display_options['fields']['field_slide_text']['id'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['table'] = 'field_data_field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['field'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['label'] = '';
  $handler->display->display_options['fields']['field_slide_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_text']['alter']['text'] = '<div class="slide-info">
<h3>[title]</h3>
[field_slide_text-value]
[field_slide_link_2]
</div>';
  $handler->display->display_options['fields']['field_slide_text']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_text']['type'] = 'text_plain';
  /* Field: Slideshow Slide: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_image']['alter']['text'] = '<div class="slide-image">[field_slide_link][field_slide_image][field_slide_link_1]</div>';
  $handler->display->display_options['fields']['field_slide_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Sort criterion: Slideshow Slide: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'eck_slideshow_slide';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $export['slideshow'] = $view;

  return $export;
}
