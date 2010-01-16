<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function views_smoothgallery_imagecache_default_presets() {
  module_load_include('inc', 'views_smoothgallery', 'views_smoothgallery.defaults');
  $args = func_get_args();
  return call_user_func_array('_views_smoothgallery_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function views_smoothgallery_views_default_views() {
  module_load_include('inc', 'views_smoothgallery', 'views_smoothgallery.features.views');
  $args = func_get_args();
  return call_user_func_array('_views_smoothgallery_views_default_views', $args);
}
