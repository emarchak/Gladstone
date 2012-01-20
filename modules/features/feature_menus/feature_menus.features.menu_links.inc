<?php
/**
 * @file
 * feature_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:art
  $menu_links['main-menu:art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'art',
    'router_path' => 'art',
    'link_title' => 'Art',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:art/artists
  $menu_links['main-menu:art/artists'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'art/artists',
    'router_path' => 'art/artists',
    'link_title' => 'Artists',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'art',
  );
  // Exported menu link: main-menu:blog
  $menu_links['main-menu:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:blog/%
  $menu_links['main-menu:blog/%'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog/%',
    'router_path' => 'blog/%',
    'link_title' => 'My blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'blog',
  );
  // Exported menu link: main-menu:book
  $menu_links['main-menu:book'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Book a Room',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'hotel',
  );
  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:food
  $menu_links['main-menu:food'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'food',
    'router_path' => 'food',
    'link_title' => 'Food',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: main-menu:hotel
  $menu_links['main-menu:hotel'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'hotel',
    'router_path' => 'hotel',
    'link_title' => 'Hotel',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/add/art
  $menu_links['main-menu:node/add/art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/art',
    'router_path' => 'node/add/art',
    'link_title' => 'Book an Exhibition',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'art',
  );
  // Exported menu link: main-menu:node/add/event
  $menu_links['main-menu:node/add/event'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Book an Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'events',
  );
  // Exported menu link: main-menu:taxonomy/term/22
  $menu_links['main-menu:taxonomy/term/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/22',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Annual Art Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'art',
  );
  // Exported menu link: main-menu:taxonomy/term/8
  $menu_links['main-menu:taxonomy/term/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/8',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Art Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'events',
  );
  // Exported menu link: main-menu:taxonomy/term/9
  $menu_links['main-menu:taxonomy/term/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/9',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Recurring Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'events',
  );
  // Exported menu link: main-menu:venue
  $menu_links['main-menu:venue'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'venue',
    'router_path' => 'venue',
    'link_title' => 'Venue',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: navigation:book
  $menu_links['navigation:book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Book a Room',
    'options' => array(
      'attributes' => array(
        'title' => 'Book a room',
      ),
    ),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: navigation:filter/tips
  $menu_links['navigation:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: navigation:mailchimp/rebuild
  $menu_links['navigation:mailchimp/rebuild'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'mailchimp/rebuild',
    'router_path' => 'mailchimp/rebuild',
    'link_title' => 'Rebuild Users Table',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: navigation:mailchimp/subscribe
  $menu_links['navigation:mailchimp/subscribe'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'mailchimp/subscribe',
    'router_path' => 'mailchimp/subscribe',
    'link_title' => 'Newsletter Subscription',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: navigation:node/add/art
  $menu_links['navigation:node/add/art'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/art',
    'router_path' => 'node/add/art',
    'link_title' => 'Art Event',
    'options' => array(
      'attributes' => array(
        'title' => 'An ongoing art exhibit.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/artist-profile
  $menu_links['navigation:node/add/artist-profile'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/artist-profile',
    'router_path' => 'node/add/artist-profile',
    'link_title' => 'Artist Profile',
    'options' => array(
      'attributes' => array(
        'title' => 'Customizable profile for Artists',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/blog
  $menu_links['navigation:node/add/blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Blog entry',
    'options' => array(
      'attributes' => array(
        'title' => 'Use for multi-user blogs. Every user gets a personal blog.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/daily-special
  $menu_links['navigation:node/add/daily-special'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/daily-special',
    'router_path' => 'node/add/daily-special',
    'link_title' => 'Today\'s Special',
    'options' => array(
      'attributes' => array(
        'title' => 'A daily special for restaurants.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: navigation:node/add/event
  $menu_links['navigation:node/add/event'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => 'Single day events.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/hotel-room
  $menu_links['navigation:node/add/hotel-room'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/hotel-room',
    'router_path' => 'node/add/hotel-room',
    'link_title' => 'Hotel Room',
    'options' => array(
      'attributes' => array(
        'title' => 'A specific room in the Gladstone Hotel.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/page
  $menu_links['navigation:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => 'Generic, static page.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/sidebar
  $menu_links['navigation:node/add/sidebar'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/sidebar',
    'router_path' => 'node/add/sidebar',
    'link_title' => 'Sidebar',
    'options' => array(
      'attributes' => array(
        'title' => 'Customized sidebars for placement.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/venue
  $menu_links['navigation:node/add/venue'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/venue',
    'router_path' => 'node/add/venue',
    'link_title' => 'Venue Room',
    'options' => array(
      'attributes' => array(
        'title' => 'Food and Event venues within the hotel',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/webform
  $menu_links['navigation:node/add/webform'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Annual Art Events');
  t('Art');
  t('Art Event');
  t('Art Events');
  t('Artist Profile');
  t('Artists');
  t('Blog');
  t('Blog entry');
  t('Book a Room');
  t('Book an Event');
  t('Book an Exhibition');
  t('Compose tips');
  t('Event');
  t('Events');
  t('Food');
  t('Hotel');
  t('Hotel Room');
  t('My blog');
  t('Newsletter Subscription');
  t('Page');
  t('Rebuild Users Table');
  t('Recurring Events');
  t('Sidebar');
  t('Today\'s Special');
  t('Venue');
  t('Venue Room');
  t('Webform');


  return $menu_links;
}
