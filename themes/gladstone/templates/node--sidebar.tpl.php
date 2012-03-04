<aside id="aside-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

	<?php print $unpublished; ?>
	<?php
		hide($content['comments']);
		hide($content['links']);
		print render($content);
	?>

	<?php if ($links = render($content['links'])): ?>
		<nav class="clearfix"><?php print $links; ?></nav>
	<?php endif; ?>

	<?php print render($content['comments']); ?>

</aside>
