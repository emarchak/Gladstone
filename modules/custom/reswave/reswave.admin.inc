<?php

/**
 * @file
 * Administration forms for the Reswave module.
 */

function reswave_admin_settings() {
  $form = array();
  $form['disqus_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Shortname'),
    '#description' => t('The website shortname that you registered Disqus with. If you registered http://example.disqus.com, you would enter "example" here.'),
    '#default_value' => variable_get('disqus_domain', ''),
  );
  $form['settings'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => 50,
  );
  // display settings.
  $form['display	'] = array(
    '#type' => 'fieldset',
    '#title' => t('display'),
    '#group' => 'settings',
  );
  
  $form['display']['disqus_nodetypes'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Node Types'),
    '#description' => t('Apply comments to only the following node types.'),
    '#default_value' => variable_get('disqus_nodetypes', array()),
    '#options' => $options,
  );
  $form['display']['disqus_location'] = array(
    '#type' => 'select',
    '#title' => t('Location'),
    '#description' => t('Display the Disqus comments in the given location. When "Block" is selected, the comments will appear in the <a href="@disquscomments">Disqus Comments block</a>.', array('@disquscomments' => url('admin/structure/block'))),
    '#default_value' => variable_get('disqus_location', 'content_area'),
    '#options' => array(
      'content_area' => t('Content Area'),
      'block' => t('Block'),
    ),
  );
  $form['display']['disqus_weight'] = array(
    '#type' => 'select',
    '#title' => t('Weight'),
    '#description' => t('When the comments are displayed in the content area, you can change the position at which they will be shown.'),
    '#default_value' => variable_get('disqus_weight', 50),
    '#options' => drupal_map_assoc(array(-100, -75, -50, -25, 0, 25, 50, 75, 100)),
    '#states' => array(
      'visible' => array(
        'select[name="disqus_location"]' => array('value' => 'content_area'),
      ),
    ),
  );
  return system_settings_form($form);
}
