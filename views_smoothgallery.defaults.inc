<?php

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _views_smoothgallery_imagecache_default_presets() {
  $items = array(
    'smooth_full' => array(
      'presetname' => 'smooth_full',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '460',
            'height' => '345',
          ),
        ),
      ),
    ),
    'smooth_mini' => array(
      'presetname' => 'smooth_mini',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '75',
          ),
        ),
      ),
    ),
  );
  return $items;
}
