<?php

// $Id$ 

/**
 * Implementation of hook_jq().
 * http://drupal.org/project/jq
 */
function jquery_jstree_jq($op, $plugin = NULL) {
  if ($op == 'info') {
    $path = drupal_get_path('module', 'jquery_jstree');
    return array(
      'jstree' => array(
        'name' => t('jstree'),
        'description' => t('The jquery jstree plugin'),
        'version' => '1.0rc2',
        'url' => 'http://www.jstree.com/',
        'files' => array(
          'js' => array(
            $path .'/jquery/jquery.jstree.js',                    
          ),
          'css' => NULL,
        ),
        'invocation' => NULL,
      ),
    );
  }
}
