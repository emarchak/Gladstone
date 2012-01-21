<?php

// Plugin definition
$plugin = array(
  'title' => t('Two column stacked responsive'),
  'category' => t('Columns: 2'),
  'icon' => 'twocol_stacked_responsive.png',
  'theme' => 'panels_twocol_stacked_responsive',
  'css' => 'twocol_stacked_responsive.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
