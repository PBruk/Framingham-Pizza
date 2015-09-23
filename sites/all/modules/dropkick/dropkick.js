(function($) {
  Drupal.behaviors.dropkick = {
    attach: function(context) {
      $(Drupal.settings.dropkick.selector, context)
        .not('#field-ui-field-overview-form select, #field-ui-display-overview-form select') //disable dropkick on field ui
        .each(function() {
          $(this).dropkick();
      });
      
      //add clearfix to parent .form-item to fix floats
      $('.dk_container').parents('.form-item').addClass('clearfix');
    }
  }
})(jQuery);