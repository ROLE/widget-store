Most of the configuration is done by the profile. But still there are some configuration which are hard to configure by using installation profiles. These configuration will be included in the profile as soon as possible. Until now you have to do some of these by hand:

1. Display configured Blocks
	* Goto http://your-domain/admin/content/taxonomy/edit/vocabulary/1
	* Scroll down and activate "Select to rebuild the menu on submit."
	* save
	* The Widget Category Menu should pop up on the left side

2. Enable community Tags and Block
	* Goto http://your-domain/admin/settings/community-tags
	* activate community tagging for "Widget Community Tags"

	* Goto http://your-domain//node/add/widget
	* Add a new widget (e.g. http://igoogle.xing.com/gadget.xml)
	* Save it
	* Goto this widgets and add some tags
	
	* Goto http://your-domain/admin/settings/performance
	* Scroll down and clear cache
	* The Widget Tags should pop up on the left side
	
Other Open Issues:
- There are some bugs with the default images

If you find some problems please contact: daniel.dahrendorf@im-c.de