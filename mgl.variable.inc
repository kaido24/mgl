<?php
/**
 * Implements hook_variable_info().
 */
function mgl_variable_info($options) {
  $variable['mgl_global_meta_description'] = array(
    'title' => t('Global meta description', array(), $options),
    'description' => t('Add meta description for a site. This is good For your site SEO', array(), $options),
    'type' => 'string',
    'group' => 'site_information',
  );
  $variable['mgl_global_meta_keywords'] = array(
    'title' => t('Global meta keywords', array(), $options),
    'description' => t('Add meta keywords for a site. This is good For your site SEO', array(), $options),
    'type' => 'string',
    'group' => 'site_information',
  );
  return $variable;
}
