/**
 * 
 */

(function ($) {
  Drupal.behaviors.equalHeights = {
    attach: function(context, settings) {
    	
    	equalHeights();
    	
    	function equalHeights() {
    		
    		var divHeight = new Array();
        	var maxHeight = 0;
        	divHeight[0] = $('.region-postscript-first section').height();
        	divHeight[1] = $('.region-postscript-second section').height();
        	divHeight[2] = $('.region-postscript-third section').height();
        	divHeight[3] = $('.region-postscript-fourth section').height();
        	for (var i = 0; i < 4; i++) {
        		if (divHeight[i] > maxHeight) {
        			maxHeight = divHeight[i];
        		}
        	}
        	$('.zone-postscript-wrapper .zone-postscript .region .region-inner section').css('height', maxHeight);
        	
        	
        	var secondDivHeight = new Array();
        	var secondMaxHeight = 0;
        	secondDivHeight[0] = $('#region-footer-main .region-inner section').height();
        	secondDivHeight[1] = $('#region-footer-first .region-inner section').height();
        	for (var i = 0; i < 2; i++) {
        		if (secondDivHeight[i] > secondMaxHeight) {
        			secondMaxHeight = secondDivHeight[i];
        		}
        	}    
        	$('#region-footer-main .region-inner section').css('height', secondMaxHeight);
        	$('#region-footer-first .region-inner section').css('height', secondMaxHeight);
    		
    	}
    	
    	
    }
  };
})(jQuery);