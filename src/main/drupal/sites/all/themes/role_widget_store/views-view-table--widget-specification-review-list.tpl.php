<?php
// $Id: views-view-table.tpl.php,v 1.8 2009/01/28 00:43:43 merlinofchaos Exp $
/**
 * @file views-view-table.tpl.php
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $class: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * @ingroup views_templates
 */
?>

<div id="reviews_list_review_summary">
<div class="reviews-section-title">Review Summary:</div>
<?php 
 	//get stats for all reviews from this idea

	$node_id = arg(1);

	$view_args = array($node_id);
	$display_id = 'page_1';
	$view = views_get_view('widget_specification_review_sum');
	if (!empty($view)) {
		print $view->execute_display($display_id , $view_args);
	
	}
 
?>
</div>

<div class="reviews-section-title">Reviews List:</div>

<table class="<?php print $class; ?>">
  <?php if (!empty($title)) : ?>
    <caption><?php print $title; ?></caption>
  <?php endif; ?>
  <thead>
    <tr>
      <?php foreach ($header as $field => $label): ?>
        <th class="views-field views-field-<?php print $fields[$field]; ?>">
          <?php print $label; ?>
        </th>
      <?php endforeach; ?>
    </tr>
  </thead>
  <tbody>
    <?php foreach ($rows as $count => $row): ?>
      <tr class="<?php print implode(' ', $row_classes[$count]); ?>">
        <?php foreach ($row as $field => $content): ?>
          <td class="views-field views-field-<?php print $fields[$field]; ?>">
            <?php print $content; ?>
          </td>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>

<?php if (user_access('create widget_specification_review content')):?>
<div class="create-widget-specification-review-link">
  		
	<a href="<?php print url('node/add/widget-specification-review/'.$node_id ); ?>" 
		title="Submit a review for this widget specification.">Submit a review for this widget specification</a>
</div>
<?php endif; ?>	

