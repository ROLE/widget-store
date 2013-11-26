<?php
// $Id: node.tpl.php,v 1.1.2.1 2010/06/17 07:54:57 sociotech Exp $
?>

<div id="node-<?php print $node->nid; ?>" class="node <?php print $node_classes; ?>">
	<div class="inner">
    
	<?php if ($page == 0): ?>
    <h2 class="title"><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
    <?php endif; ?>

  	<?php if (!$teaser):?>
  	<div class="widget-specification-link">
  		
		<a href="<?php print url('node/add/widget-specification/'.$node->nid); ?>" 
			title="Submit a widget specification to this contest.">Submit a widget specification to this contest</a>
	</div>
	<?php endif; ?>	
	
	<div class="description">
		<?php print($node->content[body]['#value']); ?>
  	</div>

  	<?php if (!$teaser):?>
  	<div class="widget-specification-link">
  		
		<a href="<?php print url('node/add/widget-specification/'.$node->nid ); ?>" 
			title="Submit a widget specification to this contest.">Submit a widget specification to this contest</a>
	</div>
	<?php endif; ?>	  	
    
  </div>
	<!-- /inner -->
</div><!-- /node-<?php print $node->nid; ?> -->



