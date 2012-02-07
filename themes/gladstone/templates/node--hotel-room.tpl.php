<article id="article-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

	<?php print $unpublished; ?>

	<?php if(!empty($user_picture) || !$page || (!empty($submitted) && $display_submitted)): ?>
		<header class="clearfix<?php $user_picture ? print ' with-picture' : ''; ?>">
			<?php print $user_picture; ?>
			
			<?php print render($title_prefix); ?>
			<?php if ($title): ?>
				<h1<?php print $title_attributes; ?>>
					<a href="<?php print $node_url; ?>" rel="bookmark"><?php print strip_tags(render($content['field_reswave_number']));?> | <?php print $title; ?></a>
				</h1>
			<?php endif; ?>
			<?php print render($title_suffix); ?>
 
			<?php if ($display_submitted): ?>
				<div class="submitted"><?php print $submitted; ?></div>
			<?php endif; ?>

		</header>
	<?php endif; ?>

	<?php
		hide($content['comments']);
		hide($content['links']);
		print render($content);
	?>

	<?php if (($links = render($content['links'])) && !$teaser): ?>
		<nav class="clearfix"><?php print $links; ?></nav>
	<?php endif; ?>

	<?php print render($content['comments']); ?>

</article>
