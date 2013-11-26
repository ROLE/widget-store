
/* Bundle Artefacts field processing */
var bundle_artefact_itemsAr = new Array(),

	/**
	 * This function is responsible for showing the chosen type-selection
	 */
	bundle_artefact_toggleOption = function(switchBtn){
		var targetId = switchBtn.id.split('-')[0],
			//fieldId is the identifier for the current multigroup
			fieldId = switchBtn.id.match(/([0-9]+)/)[0],
			fieldContainer;

		document.getElementById('group_additional_content_'+fieldId+'_switch_container').style.display = 'none';
		document.getElementById('field_additional_content_descrip_'+fieldId+'-container').style.display = 'block';
		document.getElementById('field_additional_content_title_'+fieldId+'-container').style.display = 'block';
		
		fieldContainer = document.getElementById(targetId+'-container');
		fieldContainer.style.display = 'block';
		
		//this array contains objects, that identify which content-type is selected in this multigroup
		//later to be used in the re-rendering process to show the selected type again.
		bundle_artefact_itemsAr[parseInt(fieldId)] = {selected:fieldContainer.id};
	},
	
	/**
	 * This function is the initiation for all the fields
	 */
	bundle_artefact_initItems = function(){
		var switches = $(".group_additional_content_switch"),
			i, fieldId;
		
		for(i=0; i<switches.length;i++){
			$('#'+switches[i].id).click(function(event){bundle_artefact_toggleOption(event.currentTarget);});
			fieldId = parseInt(switches[i].id.match(/([0-9]+)/)[0]);
			
			document.getElementById('group_additional_content_'+fieldId+'_load').style.display = 'none';
			document.getElementById('group_additional_content_'+fieldId+'_switch_container').style.display = 'block';
			
			if(bundle_artefact_itemsAr[fieldId]){
				if(bundle_artefact_itemsAr[fieldId].selected){
					document.getElementById('group_additional_content_'+fieldId+'_switch_container').style.display = 'none';
					document.getElementById(bundle_artefact_itemsAr[fieldId].selected).style.display = 'block';
					document.getElementById('field_additional_content_descrip_'+fieldId+'-container').style.display = 'block';
					document.getElementById('field_additional_content_title_'+fieldId+'-container').style.display = 'block';
				}
			}
		}
		
	};
	
$(document).ready(function(){
	bundle_artefact_initItems();
});
