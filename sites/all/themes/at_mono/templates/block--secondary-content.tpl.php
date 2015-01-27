<?php
// $Id: block.tpl.php,v 1.2.4.9 2010/10/19 22:41:25 jmburnz Exp $
?>
<?php $tag = $block->subject ? 'section' : 'div'; ?>
<<?php print $tag; ?> id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="block-inner clearfix">
    <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
      <div class="block-title-wrapper">
        <h2<?php print $title_attributes; ?>><?php print $block->subject; ?></h2>
      </div>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <div<?php print $content_attributes; ?>>
      <div class="block-content-inner<?php if ($block->subject): print ' with-title'; endif; ?>">
        <?php print $content ?>
      </div>
    </div>
  </div>
  <div class="shadow-l"><div class="shadow-r"></div></div>
</<?php print $tag; ?>>
