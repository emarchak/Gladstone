<div id="page"<?php print $page_classes;?>>

	<?php print render($page['top_menu']); ?>

	<header class="clearfix" role="banner">

		<?php print render($page['header_menu']); ?>

		<div id="branding">
			<?php if ($site_name || $site_slogan): ?>
				<hgroup<?php if (!$site_slogan && $hide_site_name): ?> class="<?php print $visibility; ?>"<?php endif; ?>>
					<?php if ($site_name): ?>
						<h1 id="site-name"<?php if ($hide_site_name): ?> class="<?php print $visibility; ?>"<?php endif; ?>><?php print $site_name; ?></h1>
					<?php endif; ?>
					<?php if ($site_slogan): ?>
						<h2 id="site-slogan"><?php print $site_slogan; ?></h2>
					<?php endif; ?>
				</hgroup>
			<?php endif; ?>
			<?php if ($linked_site_logo): ?>
				<div id="logo"><?php print $linked_site_logo; ?></div>
			<?php endif; ?>
		</div>

		<?php print render($page['header']); ?>
		<?php print render($page['menu_bar']); ?>

	</header>

	<div id="columns"<?php print $page['menu_bar'] ? 'class="no-menu-bar"' : '' ;?>>

		<?php print $messages; ?>
		<?php print render($page['help']); ?>
		<?php print render($page['secondary_content']); ?>

		<div id="content-column">

			<?php print render($page['highlighted']); ?>

			<?php $tag = $title ? 'section' : 'div'; ?>
			<<?php print $tag; ?> id="main-content" role="main">

				<div id="content" class="content-inner">
					
					<?php print render($title_prefix); ?>
					<?php if ($title || $primary_local_tasks || $secondary_local_tasks || $action_links = render($action_links)): ?>
						<header class="clearfix">
							<?php if ($title):?>
								<h1 id="page-title"<?php print $title_classes; ?>><?php print $title.$is_panel; ?></h1>
							<?php endif; ?>
							<?php if (($primary_local_tasks || $secondary_local_tasks || $action_links) && !$is_panel): ?>
								<div id="tasks" class="clearfix">
									<?php if ($primary_local_tasks ): ?>
										<ul class="tabs primary clearfix"><?php print render($primary_local_tasks); ?></ul>
									<?php endif; ?>
									<?php if ($secondary_local_tasks): ?>
										<ul class="tabs secondary clearfix"><?php print render($secondary_local_tasks); ?></ul>
									<?php endif; ?>
									<?php if ($action_links = render($action_links)): ?>
										<ul class="action-links clearfix"><?php print $action_links; ?></ul>
									<?php endif; ?>
								</div>
							<?php endif; ?>
						</header>
					<?php endif; ?>
					<?php print render($title_suffix); ?>
				
				
					<?php print render($page['content']); ?>
				</div>

				<?php print $feed_icons; ?>

			</<?php print $tag; ?>>

			<?php print render($page['content_aside']); ?>

		</div>

		<?php print render($page['sidebar_first']); ?>
		<?php print render($page['sidebar_second']); ?>
		<?php print render($page['tertiary_content']); ?>

	</div>

	<?php if ($page['footer'] ): ?>
		<footer role="contentinfo">
		<?php if ($page['footer']): print render($page['footer']); endif; ?>
		</footer>
	<?php endif; ?>

</div>

<?php if ($collapsible = render($page['collapsible'])): ?>
	<section id="section-collapsible" class="section-collapsible clearfix">
		<h2 class="collapsible-toggle"><a href="#"><?php print t('Toggle collapsible region'); ?></a></h2>
		<?php print $collapsible; ?>
	</section>
<?php endif; ?>
