<?php

/**
 * @file
 * Dropkick administration pages.
 */

/**
 * General configuration form for Dropkick.
 */
function dropkick_admin_settings() {
  $form = array();
  
  $form['dropkick_jquery_selector'] = array(
    '#type' => 'textarea',
    '#title' => t('Apply Dropkick to the following elements'),
    '#description' => t('A jQuery selector to find elements to apply Dropkick to, such as <code>.dropkick-select</code>. Use <code>select</code> to apply Dropkick to all <code>&lt;select&gt;</code> elements.'),
    '#default_value' => variable_get('dropkick_jquery_selector', ''),
  );
  
  return system_settings_form($form);
}
