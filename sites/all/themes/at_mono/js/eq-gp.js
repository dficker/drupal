(function ($) {
  Drupal.behaviors.atheadliner_egp = {
    attach: function(context) {
      $('#tri-panel .block-content').equalHeight();
      $('#bi-panel .block-content').equalHeight();
      $('#quad-panel .block-content').equalHeight();
    }
  };

  $(document).ready(function() {
    $('#menu-bar .menu-mlid-230 a').empty().append('<i class="fa fa-home"></i>');
  });
})(jQuery);