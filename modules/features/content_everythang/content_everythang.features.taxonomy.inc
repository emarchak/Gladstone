<?php
/**
 * @file
 * content_everythang.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_everythang_taxonomy_default_vocabularies() {
  return array(
    'events' => array(
      'name' => 'Event Categories',
      'machine_name' => 'events',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'room_type' => array(
      'name' => 'Room Type',
      'machine_name' => 'room_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'venue' => array(
      'name' => 'Venue Type',
      'machine_name' => 'venue',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
