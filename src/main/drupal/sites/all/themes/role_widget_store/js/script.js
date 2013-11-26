//togg
Drupal.behaviors.sidebarSlide = function(context) {

	// define helping functions
	function customTitleCreate(itemElem) {
		
		//create inner info Box
		var infoBlockInner = $('<div class="info-block"></div>');
		
		//find title and teaser
		var title = itemElem.find('span.title').eq(0);
		var teaser = itemElem.find('span.teaser').eq(0);
		var rating = itemElem.find('div.rating').eq(0);
		   
		//add title teaser to the info box
		infoBlockInner.append(title.clone());
		infoBlockInner.append(teaser.clone());
		infoBlockInner.append(rating.clone());
			
		//hide title and teaser
		title.hide();
		teaser.hide();
		rating.hide();
		
		var infoBlock = itemElem.parent().parent();
		infoBlock.append(infoBlockInner);
		
		return infoBlockInner;
		//return title;
		
	};
			   
   function customTitleDestroy(titleElem) {
	   titleElem.remove(); // delete the title element
	   
   };
	
	function scrollCoverflow(event, delta){
		
		if(delta > 0){
			// up
			$(this).unmousewheel();
			$(this).jcoverflip('previous', 1,false);
			$(this).mousewheel(scrollCoverflow);

		}else{
			// down
			$(this).unmousewheel();
			$(this).jcoverflip('next',1,false);
			$(this).mousewheel(scrollCoverflow);
		}
		
		return false;
	};	
	

	// prepare coverflow
	$('div.coverflow div.view-content div.item-list ul').each(function(index){


		
		// add info block
		//var infoBlock = $('<div class="info-block"></div>');
		//$(this).parent().append(infoBlock);
		
		// add coverflip to each coverflow list
		$(this).jcoverflip({
			beforeCss: function( el, container, offset ){
				return [
				        $.jcoverflip.animationElement( 
				        	el, 
				        	{ 
				        		left: ( container.width( )/2 - 230 - 210*offset )+'px', 
				        		bottom: '70px', 
				        		opacity: 0.5, 
				        		//width: '50px' 
				        	}, 
				        	{ } 
				        )/*,
				        $.jcoverflip.animationElement(
			        		el.find( 'img' ), 
				        	{ 
				        		width: '100%',
				        		//height: '70%'
				        	}, 
				        	{ } 
					   )*/
				];
			},
			afterCss: function( el, container, offset ){
				return [
				        $.jcoverflip.animationElement( 
				        	el, 
				        	{ 
				        		left: ( container.width( )/2 + 110 + 210*offset )+'px', 
				        		bottom: '70px', 
				        		opacity: 0.5,
								//width: '50px' 
				        	}, 
				        	{ } 
				        )       		
				];
			},
			currentCss: function( el, container ){
				return [
				        $.jcoverflip.animationElement( 
				        	el, 
				        	{ 
				        		left: ( container.width( )/2 - 60 )+'px', 
				        		bottom: '70px', 
				        		opacity: 1, 
				        		//width: '200px' 
				        	}, 
				        	{ } 
				        )
				];
			},
			titles: {
				create: customTitleCreate, 
				destroy: customTitleDestroy 
			},
			change: function(event, ui){
				$(this).parent().find('.scrollbar').slider('value', ui.to);
	        }
		});
		
		// compute the center element and jump to it
		var length = $(this).find('li').size();
		//$(this).jcoverflip('current', Math.round(length/2)-1);
		
		
		// add scrollbar
		var scrollbar = $('<div class="scrollbar"></div>');
		$(this).parent().append(scrollbar);
		
		// create a scrollbar
		scrollbar.slider({
			  enabled: true,
	          value: 0,//Math.round(length/2) -1,
	          min:0,
	          max:length -1,
	          step:1,
	          slide: function(event, ui) {
	            if(event.originalEvent) {
	            	$(this).parent().find('ul').jcoverflip( 'current', ui.value);
	            	$(this).slider('value', ui.value);
	            }
	          },

		});	
		
		
		$(this).mousewheel(scrollCoverflow);
	});
	
//	var $navigation_bar_menu = $('#navigation-bar-menu-wrapper');
//	
//	var $window    = $(window);
//	var offset     = $navigation_bar_menu.offset();
//	var topPadding = -20;
//
//	$window.scroll(function() {
//    if ($window.scrollTop() > offset.top) {
//    	$navigation_bar_menu.css('position','fixed');
//    	$navigation_bar_menu.css('top','0');
//    	/*
//		 * $navigation_bar_menu.stop().animate({ marginTop: $window.scrollTop() -
//		 * offset.top + topPadding });
//		 */
//    } else {
//    	$navigation_bar_menu.css('position','relative');
//    	/*
//		 * $navigation_bar_menu.stop().animate({ marginTop: 0 });
//		 */
//    }
//	});	
	
	
};
