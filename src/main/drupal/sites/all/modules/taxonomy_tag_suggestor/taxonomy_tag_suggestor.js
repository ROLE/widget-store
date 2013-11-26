jQuery(function() { 
	var contains = document.compareDocumentPosition ? function(a, b){
		return a.compareDocumentPosition(b) & 16;
	} : function(a, b){
		return a !== b && (a.contains ? a.contains(b) : true);
	};
	jQuery.contains = contains;
});

jQuery(function($) {
	
	/***********************************************
    * 
    *		Global Variables
    * 
    ***********************************************/
	
	var intern = Drupal.settings.taxonomy_tag_suggestor.intern;
	var extern = Drupal.settings.taxonomy_tag_suggestor.extern;
	
	var PATH_PLUS_BUTTON	= "/sites/all/modules/taxonomy_tag_suggestor/images/plus.png";
	var PATH_MINUS_BUTTON	= "/sites/all/modules/taxonomy_tag_suggestor/images/minus.png";
	
	var LEFT = 'left';
	var RIGHT = 'right';
	
    //var g_direction="";
    
    var arr_tab = new Array();
    
    // set height when overlapping terms are not shown and sliding is activated
    // DEFAULT = 150
    var BOX_HEIGHT = 150;
    
    // Constructor for arr_tab members
    function tabAttr(arr_enabled,direction)
    {
	    this.arr_enabled=arr_enabled;
	    this.direction=direction;
    }
    
    /***********************************************
     *
     *		DBpedia LookUp Services via XHR
     *
     ***********************************************/
    
    /**
     * Find matching terms for autocomplete.
     */
    function prefixSearch(request, response) {
    	var xhr = new XMLHttpRequest();
    	var url = "http://lookup.dbpedia.org/api/search.asmx/PrefixSearch?QueryClass=&MaxHits=5&QueryString=" + escape(request.term);
    	xhr.open("get", url, true);
    	xhr.onerror = function() {alert('DBPedia is not available at the moment! Please try later again.')};
    	xhr.onload = function(){
    		var result = new Array();
    		$(xhr.responseXML).find("Result").each(function() {
    			result.push(($(this).find("Label:first").text()));
			});
	    	response (result);
		};
		xhr.send(null);
    }
    
    function handleResponse(xml) {
		var result = new Array();
		result.push(($(this).find("Label:first").text()));
		response(result);
	}
    
    /**
     * Find related terms using DBpedias Keyword Search.
     */ 
   	function keywordSearch (queryString) {
   		var urlKeyword="http://lookup.dbpedia.org/api/search.asmx/KeywordSearch?MaxHits=8&QueryString="+ queryString;
        var xhr = new XMLHttpRequest();
        xhr.open("get", urlKeyword, true);
        
        var tags = new Array();
        var counter = 0;
        xhr.onload = function(){
        	$(xhr.responseXML).find("Result").each(function() {
        		var tag 	= new Object();
				
        		tag.label = $(this).find("Label:first").text();
        		tag.freq = $(this).find("Refcount:first").text();
        		tag.desc = $(this).find("Description:first").text();
        		tag.guid = $(this).find("URI:first").text();
  				
        		counter++;
        		tags.push(tag);
        	});
        	
        	createTerms(tags,'extern');
  		};
        xhr.send(null);
   	}
   	
   	/***********************************************
     * 
     *		Droppable Field Functions
     * 
     ***********************************************/
   	
   	/**
   	 *  Drop a tag on a right droppable box
   	 *
   	 * tag = tag
     * taxID = 1 | 2 | 3 | ... 
     * dir = right | left
     * path = taglist-right-intern
     * mode = intern | extern
     */
    function dropElem(tag,taxID,dir,path,mode) {
		// helper variables
   		var tts_edit	= '#edit-taxonomy-tags-' + taxID;
		var id 			= "#" + tag.attr('id');
		var target		= $(id);
		var img_s		= id + " #plus_minus";
		var img			= $(img_s);
		
		//add click() function for the plus-minus-buttons
		target.unbind('click');
		var button = id + " img";
		$(button).unbind('click');
		
		swap(img,mode,path,dir);
	}
    
	/**
   	 * Elem was dropped on left droppable box indicating a remove action needed
   	 */
   	function dropFieldRemove(tag,taxID,mode) {
   		// helper variables
   		var id		= "#" + tag.attr('id');
		var scope	= "left-" + mode; 
		var img_s = id + " #plus_minus";
		var img = $(img_s);
		
		// Next steps: delete tag from list of of tags marked for saving
		// helper variables
		var tts_edit = '#edit-taxonomy-tags-' + taxID;
		var tags = $(tts_edit).val() + '';
		var removeText=tag.text() + '';
		var rText = removeText.substring(1, removeText.length - 2);
		
		// delete specified term form term list
		tags=tags.replace(rText," ");
		// if resulting list contains multiple consecutive commas delete them
		tags=tags.replace(", ,", ",");
		
		// save corrected term list
		$( tts_edit ).val(tags);
		
		//add click() function for the plus-minus-buttons
		var target		= $(id);
		target.unbind('click');
		var button = id + " img";
		$(button).unbind('click');
		
		swap(img,mode,'#taglist-left-'+ mode,'left');
   	}
    
   	/***********************************************
     * 
     *		Tag Creation 
     * 
     ***********************************************/
   	
   	/**
   	 *  Create tags and display them in the "Recommended" box
   	 */
   	function createTerms(data, mode) {
   		//create list for tag links
   		var taglist			= "taglist-left-" + mode;
   		var leftBox			= "#left-" + mode;
   		var taglist_handle	= "#" + taglist;
   		$(taglist_handle).remove();
    	var ul =  taglist_creator(mode);
		var counter = 0;
		var height = 0;
		var divTop = $(leftBox).position().top;
		if (mode === 'intern') {
			leftBox = "#ttstabs-1";
			divTop = $(leftBox).position().top;
			deactivateArrows();
			$('#ttstabs-1').css('overflow','hidden');
		}
		
		// iterate through the tag list and create the tags
    	$.each( data, function(k, v) {
    		//create item
  			var li = $('<li>');
  			counter++;
  			//add content to item
  			var ttstags = "tts_tags_" + mode;
  			if (mode === 'extern') {
  				$(li).html('<div class="ttstaginternal">' + v.label + " </div>").attr({id: ttstags + counter, title: v.desc, guid: v.guid, });
  			} else {
  				$(li).html('<div class="ttstaginternal">' + v.label + " </div>").attr({id: ttstags + counter, title: v.desc, });
  			}
  			$(li).appendTo(ul);
  			
  			createButtons(li,mode,'plus','#taglist-right-'+ mode, 'right');
  			
  			// calculate height of term and if overlapping the div box hide remaining terms
  			if (mode === 'intern') {
	  			var handler = '#' + ttstags + counter;
	  			var elemTop = $(handler).position().top;
	  			height = elemTop - divTop;
	  			if (height >= BOX_HEIGHT) {
	  				var handler = '#' + ttstags + counter;
	  				$(handler).css('display' , 'none');
	  			}
  			}
  			
  			//set tag size
			li.css("fontSize", "1em");
  			
			//add to list
			var taglist2 = "#" + taglist;
  			li.appendTo(taglist2);
  			
  			var dragc = "#" + ttstags + counter;
  		
  			var new_scope = "left-" + mode;
			$(dragc).draggable({ revert: "invalid" , scope: new_scope, grid: [20, 20]});
    	});
  
    	if (mode === 'intern') {
    		var arr_enabled = false;
	    	if (height >= BOX_HEIGHT) {
	    		var arr_enabled = true;
			}
	    	var tmp = new tabAttr(arr_enabled,'right');

			arr_tab[0] = tmp;
	    	$('#ttstabs-1').css('overflow','visible');
	    	set_arr(0);
    	}
   	}
   	
	/**
   	 * Assigned terms, which have been saved previously, are added to the select field.
   	 * 
   	 * Therefore the user sees all previous selected tags and can modify them.
   	 */
   	function displaySavedTerms(taxID,mode) {
   		var counter = 0;
   		var tts_edit = 'edit-taxonomy-tags-' + taxID; 
   		var tts_edit_elem = document.getElementById( tts_edit );
   		var tags = tts_edit_elem.getAttribute( "value" );
   		
   		var target = "#right-" + mode;
	   	var taglist = "taglist-right-" + mode;
	   			
		tags = tags.split(",");
			
	   	var ul = $("<ul>").attr("id", taglist).attr("class","tagList").appendTo( target );
	   	taglist = "#" + taglist;
	   	
	   		// check if nothing todo
	   	if (tags != "") {
	   		$.each(tags, function(index, value) {
	   			if (value.length > 0) {
   				// replace leading/ending whitespaces from value
   				value = trim(value);
   				
   				tid = (termNameToTID(value));
   				term = getTermData(tid);	
	   			
	   			counter++;
	   			var li = $('<li>');
	   		
	   			$(li).html('<div class="ttstaginternal">' + term.label + " </div>").attr({id:"saved-tags-" + mode + "-" +counter,title: term.desc,}).appendTo(ul);

	   			createButtons(li,mode,'minus','#'+'taglist-left-' + mode,'left');
	   			
	   	   		var dragc = "#saved-tags-" + mode + "-" + counter;
	   	   
	   	   		$( dragc ).draggable({ 
	   	   			revert: "invalid" , 
	   	   			scope: "right-" + mode
	   	   		});
	   			}
	   		});
   		}
   	}
   	
    function fillTabsWithData() {
 	   var parents = Drupal.settings.taxonomy_tag_suggestor.parents;
 	   var counter = 0;
 	   var height = 0;
 	   var heightSum = 0;
 	   var first = true;
 	   var divTop = $('#tabsMF').position().top;
 	   
 	   if($('#left-intern').position() != undefined){
 		   $.each( parents, function(k, v) {
 			   	counter++;
 			   	var tarTab = "#tabsMF-"+counter;
 			   	
 			   	// set css to calculate height of div
 			   	$(tarTab).addClass('heightCalc');
 			   //var divTop = $(tarTab).position().top;
 			   	var taglist = "taglist-left-intern-tabsMF-"+counter;
 			   // add ul-tag to target droppable box
 				var ul = $("<ul>").attr("id", taglist).attr("class","tagList ui-widget-content").appendTo(tarTab);
 				var j=0;
 				var children = getChildren(v);
 				$.each(children, function (key, value) {
 					var term = getTermData(value);
 					j++;
 					var ttstags = "tts_tags_tabsMF-" + counter + "_" +j;
 					var li = $('<li>');
 					$(li).html("<div class='ttstaginternal'>" + term.label + " </div>").attr({id: ttstags, title: term.desc,});
 			 		$(li).appendTo(ul);
 			 		 
 			 		createButtons(li,'intern','plus', '#taglist-right-intern', 'right');
 			 		
 			 		var dragc = "#" + ttstags;
 			  		
 		  			var new_scope = "left-intern";
 					$(dragc).draggable({ revert: "invalid" , scope: new_scope, grid: [10, 10]});
 					
 					// calculate height of term and if overlapping the div box hide remaining terms
 					var handler = '#' + ttstags;
 					var elemTop = $(handler).position().top;
 		  			
 					if (first) {
 						first= false;
 						heightSum = elemTop; 
 					}
 		  			
 		  			height = elemTop - divTop - heightSum;
 		  			
 		  			if (height >= BOX_HEIGHT) {
 		  				$(handler).css('display' , 'none');
 		  			}
 				 });
 				heightSum += height;
 				 // set arrow information for tab
 				 var arr_enabled = false;
 				 
 				 if (height >= BOX_HEIGHT) {
 					 var arr_enabled = true;
 				 }
 				 var tmp = new tabAttr(arr_enabled,'right');

 				 arr_tab[counter] = tmp;
 				 
 				// unset css
 				// $(tarTab).removeClass('heightCalc');
 		   });
    	}
    }
   	
    /***********************************************
     * 
     *		Helper Functions
     * 
     ***********************************************/
   
    /**
     * Swap the term
     */
    function swap(elem,mode,path,dir) {
   	   if ($(elem).attr('src') === PATH_PLUS_BUTTON) {
   		   $(elem).attr('src', PATH_MINUS_BUTTON);
   		   $(elem).css('color','#D81919');
   		   $(elem).html('-');
   	   }
   	   else if ($(elem).attr('src') === PATH_MINUS_BUTTON) {
   		   $(elem).attr('src', PATH_PLUS_BUTTON);
   		   $(elem).html('+');
   		   $(elem).css('color','#99CC33');
   	   }
   	   
   	   var parent = $(elem).parent();
   	   var lpos = parent.css('left');
   		
   	   // adjust css
   	   parent.css('left', '10px');
   	   parent.css('top', '0px');
   	   
   	   var tabsID = parent.attr('id'); 
   	   var pos1 = tabsID.search('tabsMF');
   	   
   	   // swap term
   	   if (pos1 >0 && dir === 'left') {
   		   var t = tabsID.substring(pos1,100);
  		   var pos2 = t.search('_');
  		   t = t.substring(0,pos2);
   		   parent.appendTo('#taglist-left-intern-'+ t);
   	   }
   	   else {
   		   parent.appendTo(path);
   	   }
   	   // change scope of draggable element 
   	   var scope = dir + '-' + mode;
   	   
   	   parent.draggable("option", "scope", scope);
   	   
   	   	if (dir === 'right') dir = 'left';
  		else if (dir === 'left') dir = 'right';
  		
  		if (path === '#taglist-right-intern') {path = '#taglist-left-intern';}
  		else if (path === '#taglist-left-intern') {path = '#taglist-right-intern';}
  		else if (path === '#taglist-right-extern') {path = '#taglist-left-extern';}
  		else if (path === '#taglist-left-extern') {path = '#taglist-right-extern';}
  		
  		if (pos1 > 0) {
  	 		   var t = tabsID.substring(pos1,100);
  	 		   var pos2 = t.search('_');
  	 		   t = t.substring(0,pos2);
  	 		   path = '#taglist-left-intern-'+ t;
  	 	}
  		
  		$(elem).unbind('click');
  		$(elem).bind('click', function() {swap(this,mode,path,dir);});
  		
  		var tts_edit	= '';
  		var taxID		= '';
		if (mode === 'intern') {
			taxID = intern.toString();
			tts_edit	= '#edit-taxonomy-tags-' + taxID;
		}
		else if (mode === 'extern') {
			taxID = extern.toString();
			tts_edit	= '#edit-taxonomy-tags-' + taxID;
		}

		if (dir === 'left') {	
  			saveTermToList(parent,tts_edit);
  		} else if (dir === 'right') {
  			var tags = $(tts_edit).val() + '';
  			var removeText=parent.text() + '';
  			var rText = removeText.substring(1, removeText.length - 2);
  			// delete specified term form term list
  			tags=tags.replace(rText," ");
  			// if resulting list contains multiple consecutive commas delete them
  			tags=tags.replace(", ,", ",");
  			
  			// save corrected term list
  			$( tts_edit ).val(tags);
  		}
  		
		// save description/guid of term
  		if (mode === 'extern') {
  			tts_edit = 'extern';
  			if (dir === 'left') {
  	  			saveTermToList(parent,tts_edit);
  			}
  		}
   }
    
    function getTermData(tid) {
    	return Drupal.settings.taxonomy_tag_suggestor.terms[tid];
    }
    
    function getTermDataExtern(tname) {
    	return Drupal.settings.taxonomy_tag_suggestor.termsExtern[tname];
    }
    
    function getChildren(tid) {
    	return Drupal.settings.taxonomy_tag_suggestor.mapParentTerm[tid];
    }
    
    function termNameToTID(termName) {
    	return Drupal.settings.taxonomy_tag_suggestor.mapNameTID[termName];
    }

   function setArrowDir(){
	   if (g_direction === 'right') {
			$('#arrow_right').css('opacity','1');
			$('#arrow_right').css('filter','alpha(opacity=100)'); /* For IE8 and earlier */
		} else if (g_direction === 'left') {
			$('#arrow_left').css('opacity','1');
			$('#arrow_left').css('filter','alpha(opacity=100)'); /* For IE8 and earlier */
		}
   }

   	
   	/**
   	 * Create ul-tags for both left droppable fields
   	 */
   	function taglist_creator(mode) {
   		// helper variables
   		if (mode === 'intern') {
   			var leftBox = "#ttstabs-1";
   		} else {
   			var leftBox = "#left-" + mode;
   		}
   		var taglist = "taglist-left-" + mode;
   		
   		// add ul-tag to target droppable box
		var ul = $("<ul>").attr("id", taglist).attr("class","tagList ui-widget-content").appendTo(leftBox);
		
		return ul;
   	}
   	
   	/**
   	 *  Delete all tags in recommendation field.
   	 */
   	function resetTagCloud(mode) {
   		var div_tag	= "left-" + mode;
   		var prefix = "tts_tags_" + mode;
   		var target_list	= "#taglist-left-" + mode + " li";
   
   		$(target_list).each(function(index) {
   			var scope = $(this).draggable( "option", "scope" );
   			if (scope == div_tag) {
   				// this tags have not been selected and therefore can be deleted
   				$(this).remove();
   			} else {
   				// change id of tag, so that id is different if new tags are added later
   				var id = $(this).attr("id");
   				var nr = id.replace(prefix, "");
   				nr = 1 + nr;
   				$(this).attr("id", nr);
   			}
   		});
   	
   	}
	
   	/**
   	*  li = li
    * mode = intern | extern
    * swap path = "taglist-left-intern-tabsMF | taglist-right-intern | taglist-right-extern
    * button = minus | plus
   	*/
   	function createButtons(li,mode,button,swap_path,dir) {
   		// create button
		//var minus_button = $('<img>');
   		var minus_button = $('<div>');
   		
		if (button === 'plus') {
			$(minus_button).attr({src:PATH_PLUS_BUTTON,});
			$(minus_button).css('color','#99CC33');
			$(minus_button).html('+');
		} else if (button === 'minus') {
			$(minus_button).attr({src:PATH_MINUS_BUTTON,});
			$(minus_button).css('color','#D81919');
			$(minus_button).html('-');
		} 
		
		$(minus_button).attr({id:'plus_minus', class:'ttstaginternal'});
		
		// Swap plus-minus-button and swap items position (chosen tag or deleted tag)
		$(minus_button).unbind('click');
		$(minus_button).bind('click',function() {swap(this, mode,swap_path,dir);});
		$(minus_button).prependTo(li);
		
		
		// create info-button
		//var info_button = $('<img>');
		var info_button = $('<div>');
		$(info_button).attr({src:"/sites/all/modules/taxonomy_tag_suggestor/images/info.png", id:'tts_info_button', class:'ttstaginternal'});
		info_button.text('i');
		$(info_button).appendTo(li);
   	}

   	/**
   	 *  Set Arrows opacity
   	 */
   	function deactivateArrows() {
   		$('#arrow_right').css('opacity','0.4');
   		$('#arrow_right').css('filter','alpha(opacity=40)'); /* For IE8 and earlier */
   		$('#arrow_left').css('opacity','0.4');
   		$('#arrow_left').css('filter','alpha(opacity=40)'); /* For IE8 and earlier */
   	}
   
	
   	function set_arr(selected) {
   		$('#arrow_right').unbind('click');
   		$('#arrow_left').unbind('click');
   		deactivateArrows();
   		
   		// activate arrows
   		if (arr_tab[selected].arr_enabled) {
   			var arrow = '#arrow_' + arr_tab[selected].direction;
   			var effTarget;
   			$(arrow).css('opacity','1');
   			if (selected == 0) {
   				effTarget = '#ttstabs-1';
   			}
   			else {
   				effTarget = '#tabsMF-' + selected;
   			}
   			$(arrow).bind('click',function() {runEffect1(effTarget);});
   		}
   	}
   	
	/**
	 *  Append term to list for saving later
	 */
	function saveTermToList(tag,tts_edit) {
		var fulltext = tag.text();
		var saveText = fulltext.substring(1, fulltext.length - 2);
		if (tts_edit == 'extern') {
			var target = $('#dbpedia');
			var delimiter = '';
			if (target.val().length > 0 )  {delimiter='||';}
			var tags = target.val() + delimiter + saveText + '$$' + tag.attr('title') + '$$' + tag.attr('guid');
			target.val(tags);
		} // add term to termlist 
		else {
			tags = $(tts_edit).val() + ',' + saveText;
			// save termlist
			$(tts_edit).val(tags);
		}
	}

	
	//function swapGDirection() {g_direction = (g_direction == 'right') ?  'left' : 'right';}

	// remove multiple, leading or trailing spaces
	function trim(s) {
		s = s.replace(/(^\s*)|(\s*$)/gi,"");
		s = s.replace(/[ ]{2,}/gi," ");
		s = s.replace(/\n /,"\n");
		return s;
	}
	
	/***********************************************
     * 
     *		UI-Effects
     * 
     ***********************************************/
	
	   /**
	    *  Show direction effects
	    */
	   function slideRightShow(tag) {$(tag).show('slide', {direction: 'right'},	800);}
	   function slideLeftHide(tag) 	{$(tag).hide('slide', {direction: 'left'},	800);}
	   function slideRightHide(tag) {$(tag).hide('slide', {direction: 'right'},	800);}
	   function slideLeftShow(tag) 	{$(tag).show('slide', {direction: 'left'},	800);}   
	   
	   function runEffect1(target,direction) {
		   var selected = $( "#ttstabs" ).tabs( "option", "selected" );
		   if (selected === 0) {
			   target = '#ttstabs-1';
			   $('#ttstabs-1').css('overflow','hidden');
		   }
		   else if (selected === 1) {
			   var selected = $( "#tabsMF" ).tabs( "option", "selected" );
			   target = '#tabsMF-' + (parseInt(selected) + 1);
			   $(target).css('overflow','hidden');
		   }
		   if (direction === RIGHT) {
			   slideLeftHide($(target));
		   } else if (direction === LEFT) {
			   slideRightHide($(target));
		   }
		   var delay = function() { runEffect2(target); };
		   setTimeout(delay,700);
		}
	   
	  /**
	   * Let terms slide in of the box 
	   */
	   function runEffect2(target) {
		   var selected = $( "#ttstabs" ).tabs( "option", "selected" );
		   if (selected === 0) {
			   tts_list = "#taglist-left-intern";
		   } else if (selected === 1) {
			   selected = $( "#tabsMF" ).tabs( "option", "selected" );
			   selected = parseInt(selected) + 1;
			   tts_list = "#taglist-left-intern-" + target.substr(1) ;
		   }
		   
		   // start show effect with depending direction
		   if (arr_tab[selected].direction === RIGHT) {
			   slideRightShow($(target));   
		   } else if (arr_tab[selected].direction === LEFT) {
			   slideLeftShow($(target));
		   }
		   // display right or left arrow and bind/unbind corresponding click events
		   swapArrows(selected);
		   
		   invertItemVisibility(tts_list);
		   
		   // using a delay function for setTimeout argument passing
		   var delay = function() { resetCSSOverflow(target); };
		   setTimeout(delay,1000);
	   }
	   
	   function resetCSSOverflow(target) {
		   $(target).css("overflow","visible");
	   }
	   
	   // show terms which are hidden before and vice versa  
	   function invertItemVisibility(tts_list) {
		   $.each($(tts_list).children(), function () {
			   if($(this).css('display') != 'none') {
					   $(this).css('display','none');
			   } else {
			   		   $(this).css('display','block');
			   }
		   });
	   }
	   
	   /**
	    * Swap opacity of arrows and set/-unset click-handler accordingly
	    */
	   function swapArrows(selected) {
		   // helper variables
		   var en_arrow = arr_tab[selected].direction;
		   var dis_arrow = (en_arrow === RIGHT) ?  LEFT : RIGHT;
		   arr_tab[selected].direction = dis_arrow;
		   
		   // set opacity of arrows
		   $('#arrow_' + en_arrow).css('opacity','0.4');
		   $('#arrow_' + dis_arrow).css('opacity','1');
		   $('#arrow_'+ en_arrow).css('filter','alpha(opacity=40)'); /* For IE8 and earlier */
		   $('#arrow_' + dis_arrow).css('filter','alpha(opacity=100)'); /* For IE8 and earlier */
		   
		   // set click-handler
		   $('#arrow_'+ en_arrow).unbind('click');
		   $('#arrow_'+ dis_arrow).bind('click',function() {runEffect1(this,dis_arrow);});
	   }
	
	/***********************************************
     * 
     *		Initialazion
     * 
     ***********************************************/
	  
		/**
	    *  Initial setup
	    *  
	    *  Initial setup contains:
	    *  - hide default taxonomy autocomplete fields
	    *  - create and display the previously saved terms
	    *  - make the left boxes droppabel for the saved terms 
	    */
	   function init() {	   
		  
		   
		   // intern droppable field
		   var tts_edit_intern = 'edit-taxonomy-tags-' + intern + '-wrapper';
		   if(document.getElementById(tts_edit_intern) != null){
			   // hide the autocomplete fields for the vocabularies
			   document.getElementById(tts_edit_intern).style.display="none";
				
			   initDropFieldIntern();
			   displaySavedTerms(intern.toString(),"intern");
			   
			   // create ul-tag for intern- droppable box
			   taglist_creator('intern');
			   
			   // init tabs
			   $("#ttstabs").tabs();
				// Fill data for browsing functionalities tab
			   fillTabsWithData();
				
			   $("#tabsMF").tabs();
			   // hide terms displayed out of box according to tab
			   $("#tabsMF").bind('tabsshow', function(event, ui) {
						var i = ui.index + 1;
						var taglist = "#taglist-left-intern-tabsMF-" + i;
						var divTop = $('#left-intern').position().top;
				});
			   
			   
			   // after an preview or update, 
			   // all previously selected intern tags 
			   // should be selected automatic again
			   var pesavedtagsintern = $('#pesavedtagsintern').val();
			   pesavedtagsintern = pesavedtagsintern.split(",");
			   for(var i=1;i<pesavedtagsintern.length;i++) {
				   var tag_name = pesavedtagsintern[i];
				   
				   // get tag item
				   var match = $('.tagList > li').filter(
						function(index) {
							return ($(this).text() == tag_name);
				   		});
				   
				   // get button of tag elem to click
				   var target = $(match).children().eq(0);
				   $(target).click();
				   
				   // make sure target is visble (some tags are not hidden in tabs)
				   if ($(match).css('display') == 'none') {
					   $(match).css('display','block');
				   }
			   }
			   
				$('#my-list').hoverscroll({
					height: 20,
					width: 448,
			        fixedArrows: true,
			    });
				// Starting the movement automatically at loading
				// @param direction: right/bottom = 1, left/top = -1
				// @param speed: Speed of the animation (scrollPosition += direction * speed)
				var direction = -1,
			        speed = 1;
				$("#my-list")[0].startMoving(direction, speed);	
				
				initArrows();
				
				// init arr_tab
				var tmp = new tabAttr(false,'right');
				arr_tab[0] = tmp;
				
				// activate/deactivate the arrows according to tab
				$("#ttstabs").bind('tabsshow', function(event, ui) {
					var selected = $("#ttstabs").tabs().tabs('option', 'selected');
					if (selected == 0) {
						set_arr(selected);
					}
					if (selected == 1) {
						deactivateArrows();
						selected = $("#tabsMF").tabs().tabs('option', 'selected');
						selected = parseInt(selected);
						selected++;
						set_arr(selected);
					}
					
				});
		   }
		   
		   // extern droppable field
		   var tts_edit_extern = 'edit-taxonomy-tags-' + extern + '-wrapper';
		   if(document.getElementById(tts_edit_extern) != null){
			   // hide the autocomplete fields for the vocabularies
			   document.getElementById(tts_edit_extern).style.display="none";
				
			   initDropFieldExtern();
			   displaySavedTerms(extern.toString(),"extern");
				
				// create ul-tag for extern- droppable box
				taglist_creator('extern');
		   }
		   
		   // workaround, for offby one error, 
		   // error is most-likely in the hoverscroll.js or .css
		   // HOTFIX, adding 1 to the calculated width from hoverscroll
		   var tmp_width = $("#my-list").css("width");
		   tmp_width = (parseInt(tmp_width) + 1) + 'px';
		   $("#my-list").css("width", tmp_width);
	   }
	   
	   /**
	    * Initialize intern droppable fields (right & left)
	    */
	   function initDropFieldIntern() {
		   // make right intern field droppable
		   $( "#right-intern" ).droppable({
			   scope: "left-intern",
			   drop: function(event, ui) {
				   dropElem(ui.draggable,intern.toString(),"right",'#taglist-right-intern', 'intern');
				}
			});
		   
		// make left intern field droppable
		   $( "#left-intern" ).droppable({
				scope: "right-intern",
				drop: function(event, ui) {
					dropFieldRemove(ui.draggable,intern.toString(),"intern");
				}
			});
			   
		   // set autocomplete function
		   $( "#tags-intern" ).autocomplete({
		    	source: Drupal.settings.taxonomy_tag_suggestor.termsList,
		    	select:function( event, ui ) {
		    		// remove elements from tag cloud to display new tags in an empty box
		    		resetTagCloud("intern");
		    		var intern = Drupal.settings.taxonomy_tag_suggestor.intern;
		    		var selected = Drupal.settings.taxonomy_tag_suggestor.mapNameTID[ui.item.value]
		    		var terms = new Array();
		    		// add searched term on first place in result set
		    		terms.push(getTermData(selected));
		    		
		    		// add related terms to result set
		    		$.each( Drupal.settings.taxonomy_tag_suggestor.related[selected], function (k,v) {
		    			terms.push(getTermData(v));
		    		});
		    		
		    		createTerms(terms,'intern');
		    	},
		    	minLength: 2
		    });
	   }
	   
	   /**
	    * Initialize extern droppable fields (right & left)
	    */
	   function initDropFieldExtern() {
		   // make right extern field droppable
			$( "#right-extern" ).droppable({
				scope: "left-extern",
				drop: function(event, ui) {
					dropElem(ui.draggable,extern.toString(),"right",'#taglist-right-extern','extern');
				}
			});
			
			// make left extern field droppable
			$( "#left-extern" ).droppable({
				scope: "right-extern",
				drop: function(event, ui) {
					dropFieldRemove(ui.draggable,extern.toString(),"extern");
				}
			});   
			
			// set autocomplete function with search DBpedia-based Prefix Search as source
		    $( "#tags-extern" ).autocomplete({
		    	source: function(request, response) {
		    		prefixSearch(request,response);	
		  		},
				select: function( event, ui ) {
					resetTagCloud("extern");
					keywordSearch(ui.item.value);
				},
				minLength: 2
			});
		    
		    // circumvent strange behavior with "return"-key sometimes
		    $(document).keypress(function(e) {
		        if(e.which == 13) {
		            return false;
		        }
		    });
	   }
	   
		/**
		 * Generate Arrow symbols and init style
		 */
	   function initArrows() {
		   var arrow_right = $('<img>').attr({src: '/sites/all/modules/taxonomy_tag_suggestor/images/arrow-right.png', id: 'arrow_right'});
		   var arrow_left = $('<img>').attr({src: '/sites/all/modules/taxonomy_tag_suggestor/images/arrow-left.png',id: 'arrow_left'});
		   var navi=$('#ttstabs ul:first');
		
		   var li = $('<li>');
		   $(arrow_right).appendTo(li);
		   $(li).css('float','right');
		   $(li).css('background','transparent');
		   $(li).appendTo(navi);

		   var li = $('<li>');
		   $(arrow_left).appendTo(li);
		   $(li).css('float','right');
		   $(li).css('background','transparent');
		   $(li).appendTo(navi);
			
		   deactivateArrows();
	   }
	
	   
	/***********************************************
	 * 
	 *		Development / Debug
	 * 
	 ***********************************************/
	    
	/**
	 * Add properties and values to a string.
	 * Helper function to display a JS object.
	 */
	function showObj(obj) {
	   	str="";
		for(prop in obj) { str+=prop + " value :"+ obj[prop]+"\n";}
		return(str);
	}
	   
	   
	/***********************************************
     * 
     *		Start
     * 
     ***********************************************/
	
    init();
});
