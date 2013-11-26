<?php
// $Id: node.tpl.php,v 1.1.2.1 2010/06/17 07:54:57 sociotech Exp $
?>

<div id="node-<?php print $node->nid; ?>" class="node <?php print $node_classes; ?>">
  <div class="inner">
  <?php 
		$subject = node_load($node->field_report_subject[0]['nid']);
		//echo '<pre>' . print_r($node->content['fivestar_widget'], true) . '</pre>';
  ?>
  
  <div class="user_report_subject">
  	This is a report about:
  	<a href="/<?php echo $subject->path; ?>" target="_blank">
  		<strong><?php echo $subject->title; ?></strong>
  	</a>
  </div>
 
    <?php print $picture ?>

    <div class="content clearfix">
      <?php print $node->content['body']['#value']; ?>
    </div>

	<hr />
	<?php if($node->content['fivestar_widget']['#value']){?>
    <div>
      Rating: <?php print $node->content['fivestar_widget']['#value']; ?>
    </div>
    <?php } ?>
    
    <?php if ($submitted): ?>
    <div class="meta">
      <span class="submitted"><?php print $submitted ?></span>
    </div>
    <?php endif; ?>
 
    <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
    <?php endif; ?>
  </div><!-- /inner -->

</div><!-- /node-<?php print $node->nid; ?> -->
