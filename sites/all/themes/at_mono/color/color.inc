<?php
// AT Mono
$info = array(
  // Fields
  'fields' => array(
    'base'      => t('Base'),
    'pagebg'    => t('Page'),
    'link'      => t('Links'),
    'top'       => t('Header top'),
    'bottom'    => t('header bottom'),
    'ftop'      => t('Featured top'),
    'fbottom'   => t('Featured bottom'),
    'text'      => t('Text'),
    'blockh'    => t('Block header'),
    'blockt'    => t('Block title'),
    'blockbg'   => t('Block background'),
    'blockl'    => t('Block links'),
    'borders'   => t('Borders'),
    'sticky'    => t('Sticky background'),
    'footertop' => t('Footer top'),
    'footerbot' => t('Footer bottom'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Mono warm (default)'),
      'colors' => array(
        'base'      => '#ffffff',
        'pagebg'    => '#feffff',
        'link'      => '#b81d00',
        'top'       => '#101010',
        'bottom'    => '#0e0200',
        'ftop'      => '#dfdfdd',
        'fbottom'   => '#ffffff',
        'text'      => '#666666',
        'blockh'    => '#101010',
        'blockt'    => '#fefefe',
        'blockbg'   => '#fdfdff',
        'blockl'    => '#232323',
        'borders'   => '#cccccc',
        'sticky'    => '#fafafa',
        'footertop' => '#efefef',
        'footerbot' => '#f3f3f3',
      ),
    ),
    'monocold' => array(
      'title' => t('Mono cold'),
      'colors' => array(
        'base'      => '#ffffff',
        'pagebg'    => '#feffff',
        'link'      => '#0c4b94',
        'top'       => '#010307',
        'bottom'    => '#031326',
        'ftop'      => '#dfdfdd',
        'fbottom'   => '#ffffff',
        'text'      => '#666666',
        'blockh'    => '#101010',
        'blockt'    => '#fefefe',
        'blockbg'   => '#fdfdff',
        'blockl'    => '#232323',
        'borders'   => '#cccccc',
        'sticky'    => '#fafafa',
        'footertop' => '#efefef',
        'footerbot' => '#f3f3f3',
      ),
    ),
    'monogreen' => array(
      'title' => t('Mono green'),
      'colors' => array(
        'base'      => '#ffffff',
        'pagebg'    => '#feffff',
        'link'      => '#868600',
        'top'       => '#0f0f00',
        'bottom'    => '#424200',
        'ftop'      => '#dfdfdd',
        'fbottom'   => '#ffffff',
        'text'      => '#666666',
        'blockh'    => '#101010',
        'blockt'    => '#fefefe',
        'blockbg'   => '#fdfdff',
        'blockl'    => '#232323',
        'borders'   => '#cccccc',
        'sticky'    => '#fafafa',
        'footertop' => '#efefef',
        'footerbot' => '#f3f3f3',
      ),
    ),
    'monochrome' => array(
      'title' => t('Monochrome'),
      'colors' => array(
        'base'      => '#ffffff',
        'pagebg'    => '#feffff',
        'link'      => '#959595',
        'top'       => '#292929',
        'bottom'    => '#343434',
        'ftop'      => '#dfdfdd',
        'fbottom'   => '#ffffff',
        'text'      => '#666666',
        'blockh'    => '#101010',
        'blockt'    => '#fefefe',
        'blockbg'   => '#fdfdff',
        'blockl'    => '#232323',
        'borders'   => '#cccccc',
        'sticky'    => '#fafafa',
        'footertop' => '#efefef',
        'footerbot' => '#f3f3f3',
      ),
    ),
  ),

  // CSS files
  'css' => array(
    'color/colors.css',
  ),

  // Images to copy over
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Color areas to fill (x, y, width, height)
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height).
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_image' => 'color/color-preview.png',
  'preview_css' => 'color/preview.css',

  // Base file for image generation
  'base_image' => 'color/base.png',
);