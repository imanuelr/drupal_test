<?php
// $Id$

/**
 * @file
 * Admin page callback for the scaffolding module.
 */

/**
 * Builds and returns the scaffolding settings form.
 */
function input_admin_settings() {
  $form['input_constrain_color_setting'] = array(
    '#type' => 'radios',
    '#title' => t('Constrain colors'),
    '#options' => array('yes' => t('Yes'), 'no' => t('No')),
    '#default_value' => variable_get('input_constrain_color_setting', 'yes'),
    '#required' => TRUE,
  );
  return system_settings_form($form);
}