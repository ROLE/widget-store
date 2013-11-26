
RATIONALE
------------------------------
Taxonomies are a bit of an issue to deal with in Drupal, specifically in terms
of using them in install profile/update hooks, sharing code with other
developers, etc...

There are a few modules out there which try to get around this issue. However,
they are limited in a number of ways.

Currently there are 3 methods I can see in trying to solve this, this module
goes with #3.

#1 Use existing modules (such as features_extras or exportables). This provides
   taxonomy (among other) machine name support, however, it does require
   multi-module dependencies. As well, there is no views support.

#2 Roll your own. Without touching core, this is actually rather tricky, due to
   the lack of a view operation in the hook_taxonomy() call. Basically, we
   cannot attach data (elegantly) to a taxonomy_get_*() call, without creating
   piles of functions to replicate existing functionality.
   
#3 "Patch" the core vocabulary table by adding a machine_name field. This
   solves a lot of issues, as all the standard CRUD operations typically assume
   v.* (when retrieving) or using drupal_get_schema() to introspect fields
   while inserting/updating. In addition, this makes exposure of the Vocabulary:
   Machine name views handlers quite trivial.


NEW FUN STUFF
------------------------------
When installed, this module provides the following features

#1 Will generate a machine name based on the vocabulary name upon install.

#2 Adds a new function "taxonomy_vocabulary_machine_name_load()" which is a
   backport of the D7 function of the same name.

#3 By "default" any of the "taxonomy_get_*()" functions should return the
   machine_name field now, which should theoretically help in conflicts due to
   random serial IDs. As well, you can programmatically build taxonomies with
   machine names, which should make initial install profile setups easier.

#4 A number of views handlers, that allow the use of vocabulary machine names
   as arguments and filters. As well, a field handler that allows access to the
   vocabularies term's restricted by machine name.


ROADMAP
------------------------------
#1 Views support is basic, and should be re-visited before a stable release.


USAGE
------------------------------
Ultimately, the main usage of this module will be to programatically retrieve a
vocabulary object by machine name, allowing for saner implementations of
taxonomy related features across multiple environments. A typical use case would
be:

  $tags  = taxonomy_vocabulary_machine_name_load('tags');
  $terms = taxonomy_get_tree($tags->vid);

  foreach($terms as $term) {
  // do something with this...
  }

Developers who use the views functionality should always use the included views
handlers instead of the core ones (which hard code the taxonomy vid). Exported
views will utilize the appropriate machine name instead of vid.