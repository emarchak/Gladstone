<?php

// Plugin definition
$plugin = array(
	'title' => t('Two column Responsive'),
	'category' => t('Columns: 2'),
	'icon' => 'twocol_responsive.png',
	'theme' => 'panels_twocol_responsive',
	'css' => 'twocol_responsive.css',
	'regions' => array(
		'main' => t('Main'),
		'sidebar' => t('Sidebar')
	),
);
