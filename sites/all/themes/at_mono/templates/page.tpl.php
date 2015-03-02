<?php
// AT Mono
?>
<div id="page-wrapper">

  <!-- off-canvas menu -->
  <nav id="mobileNav">
    <?php if (!empty($page['offcanvas'])): ?>
      <?php print render($page['offcanvas']); ?>
    <?php endif; ?>
  </nav>

  <div id="page">

    <header id="header">
      <div class="container group">
        <?php print render($page['top_menu']); ?>
        <div id="logo"><?php print $linked_site_logo; ?></div>
        <?php print render($page['header']); ?>
      </div>
    </header>

    <?php if ($menubar = render($page['menu_bar'])): ?>
      <div id="nav-wrapper"><div class="container clearfix">
        <?php print $menubar; ?>
        <button id="mobileTrigger"><i class="fa fa-bars"></i></button>
      </div></div>
    <?php endif; ?>

    <?php if ($page['slideshow']): ?>
      <section id="slideshow">
        <?php print render($page['slideshow']); ?>
      </section>
    <?php endif; ?>

    <div id="secondary-content-wrapper">
      <div class="image-overlay">
        <div class="container clearfix">

          <?php if ($page['secondary_content']): ?>
            <?php print render($page['secondary_content']); ?>
          <?php endif; ?>

          <!-- Three column 3x33 Gpanel -->
          <?php if ($page['three_33_first'] || $page['three_33_second'] || $page['three_33_third']): ?>
            <div id="tri-panel" class="three-3x33 gpanel clearfix">
              <?php print render($page['three_33_first']); ?>
              <?php print render($page['three_33_second']); ?>
              <?php print render($page['three_33_third']); ?>
            </div>
          <?php endif; ?>

        </div>
      </div>
    </div>

    <?php if ($messages || $page['help']): ?>
      <div id="messages-help-wrapper"><div class="container clearfix">
        <?php print $messages; ?>
        <?php print render($page['help']); ?>
      </div></div>
    <?php endif; ?>

    <div id="content-wrapper"><div class="container">

      <!-- Two column 2x50 Gpanel -->
      <?php if ($page['two_50_first'] || $page['two_50_second']): ?>
        <div id="bi-panel" class="two-50 gpanel clearfix">
          <?php print render($page['two_50_first']); ?>
          <?php print render($page['two_50_second']); ?>
        </div>
      <?php endif; ?>

      <?php if ($breadcrumb): ?>
        <div id="breadcrumb-wrapper">
          <section class="breadcrumb clearfix">
            <?php print $breadcrumb; ?>
          </section>
        </div>
      <?php endif; ?>

      <div id="columns"><div class="columns-inner clearfix">
        <div id="content-column"><div class="content-inner">

          <?php print render($page['highlighted']); ?>

          <?php $tag = $title ? 'section' : 'div'; ?>
          <<?php print $tag; ?> id="main-content">
            <?php if ($title || $primary_local_tasks || $secondary_local_tasks || $action_links = render($action_links)): ?>
              <header class="main-content-header clearfix">
                
                <?php if (!$is_front): ?>
                  <?php print render($title_prefix); ?>
                  <?php if ($title): ?>
                    <h1 id="page-title"><?php print $title; ?></h1>
                  <?php endif; ?>
                  <?php print render($title_suffix); ?>
                <?php endif; ?>

                <?php if ($primary_local_tasks || $secondary_local_tasks || $action_links): ?>
                  <div id="tasks" class="clearfix">
                    <?php if ($primary_local_tasks): ?>
                      <ul class="tabs primary clearfix"><?php print render($primary_local_tasks); ?></ul>
                    <?php endif; ?>
                    <?php if ($secondary_local_tasks): ?>
                      <ul class="tabs secondary clearfix"><?php print render($secondary_local_tasks); ?></ul>
                    <?php endif; ?>
                    <?php if ($action_links = render($action_links)): ?>
                      <ul class="action-links clearfix"><?php print $action_links; ?></ul>
                    <?php endif; ?>
                  </div>
                <?php endif; ?>
              </header>
            <?php endif; ?>

            <div id="content">
              <?php print render($page['content']); ?>
              <?php print render($page['content_aside']); ?>
            </div>
            
            <!-- Content bottom panel -->
            <?php if ($page['three_2_33_first'] || $page['three_2_33_second'] || $page['three_2_33_third']): ?>
              <div id="tri-panel-2" class="three-3x33 gpanel clearfix">
                <?php print render($page['three_2_33_first']); ?>
                <?php print render($page['three_2_33_second']); ?>
                <?php print render($page['three_2_33_third']); ?>
              </div>
            <?php endif; ?>

          </<?php print $tag; ?>>

        </div></div>

        <?php print render($page['sidebar_first']); ?>
        <?php print render($page['sidebar_second']); ?>

      </div></div>
    </div></div>

    <!-- Four column Gpanel (Quad) -->
    <?php if ($page['four_2_first'] || $page['four_2_second'] || $page['four_2_third'] || $page['four_2_fourth']): ?>
      <div id="quadpanel-wrapper"><div class="container clearfix">
        <div id="quad-panel" class="four-4x25 gpanel clearfix">
          <?php print render($page['four_2_first']); ?>
          <?php print render($page['four_2_second']); ?>
          <?php print render($page['four_2_third']); ?>
          <?php print render($page['four_2_fourth']); ?>
        </div>
      </div></div>
    <?php endif; ?>

    <?php if ($page['tertiary_content']): ?>
      <div id="tertiary-content-wrapper">
        <div class="image-overlay">
          <div class="container clearfix">
            <?php print render($page['tertiary_content']); ?>
          </div>
        </div>
      </div>
    <?php endif; ?>

    <footer id="footer">
      <div class="container group">
        <?php if ($page['footer']): ?>
          <?php print render($page['footer']); ?>
        <?php endif; ?>
        <i class="footer-logo"></i>
        <ul class="social">
          <li><a href=""><i class="fa fa-facebook"></i></a></li>
          <li><a href=""><i class="fa fa-twitter"></i></a></li>
          <li><a href=""><i class="fa fa-youtube"></i></a></li>
        </ul>
        <small class="copyright">
          &copy; <?php print date('Y') . ' ' .t('Rocori School District') . '. ' . t('All rights reserved.'); ?>.
        </small>
      </div>
    </footer>

  </div>
</div>
