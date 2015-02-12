(function ($, Drupal) {

  // Drupal.behaviors.atheadliner_egp = {
  //   attach: function(context) {
  //     $('#tri-panel .block-content').equalHeight();
  //     $('#bi-panel .block-content').equalHeight();
  //     $('#quad-panel .block-content').equalHeight();
  //   }
  // };

  Drupal.behaviors.toggleSide = {
    attach: function (context, settings) {

      $('#mobileTrigger').click(function() {
        if ($('#page').hasClass('open')) {
          $('#page').removeClass('open');
          $('.overlay-main').detach();
        } else {
          $('#page').addClass('open');
          $('<div class="page-overlay"></div>').hide().appendTo('#page').fadeIn(800);
        }
      });

      $(document).on('click', '.page-overlay', function(){
        $('#page').removeClass('open');
        $('.page-overlay').fadeOut(800, function() {
          $(this).detach();
        });
      });
      
    }
  };

  

  $(document).ready(function() {
    // menu home icon
    $('#menu-bar .menu-mlid-230 a').empty().append('<i class="fa fa-home"></i>');

    // mobile menu
    $('#mobileNav li.expanded:not(.active-trail) .menu').css('display', 'none');
    $('#mobileNav .expanded').append('<button><i class="fa fa-angle-down"></i></button>');
    $('#mobileNav li.active-trail').find('button i').toggleClass('fa-angle-up').toggleClass('fa-angle-down');
    $('#mobileNav button, #mobileNav li.expanded > span.nolink').click(function() {
      $(this).parent().find('.menu').slideToggle('fast');
      $(this).parent().find('i').toggleClass('fa-angle-up').toggleClass('fa-angle-down');
    });

  });



})(jQuery, Drupal);