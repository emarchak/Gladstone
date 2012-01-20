<?php
/**
 * @file
 * content_everythang.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_everythang_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_everythang_node_info() {
  $items = array(
    'art' => array(
      'name' => t('Art Event'),
      'base' => 'node_content',
      'description' => t('An ongoing art exhibit.'),
      'has_title' => '1',
      'title_label' => t('Show Name'),
      'help' => '',
    ),
    'artist_profile' => array(
      'name' => t('Artist Profile'),
      'base' => 'node_content',
      'description' => t('Customizable profile for Artists'),
      'has_title' => '1',
      'title_label' => t('Artist Name'),
      'help' => '',
    ),
    'daily_special' => array(
      'name' => t('Today\'s Special'),
      'base' => 'node_content',
      'description' => t('A daily special for restaurants.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Single day events.'),
      'has_title' => '1',
      'title_label' => t('Event Name'),
      'help' => '',
    ),
    'hotel_room' => array(
      'name' => t('Hotel Room'),
      'base' => 'node_content',
      'description' => t('A specific room in the Gladstone Hotel.'),
      'has_title' => '1',
      'title_label' => t('Room Name'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Generic, static page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sidebar' => array(
      'name' => t('Sidebar'),
      'base' => 'node_content',
      'description' => t('Customized sidebars for placement.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'venue' => array(
      'name' => t('Venue Room'),
      'base' => 'node_content',
      'description' => t('Food and Event venues within the hotel'),
      'has_title' => '1',
      'title_label' => t('Room Name'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
