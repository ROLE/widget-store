
$(function() {

  /* Generate machine names from name fields
  ---------------------------------------------------------------------- */
  var machine_name_generate = function() {

    var $source = $('#%source%');
    var $target = $('#%target%');

    function init() {
      $source.keyup(function() {
        var text = $(this).val().toLowerCase().replace(/\s+/g, '_').replace(/\W/g, '');
        $target.val(text);
      });
    }

    return {
      init: init
    };

  }();

  /* Initialize
  ---------------------------------------------------------------------- */
  machine_name_generate.init();

});