<?php
/**
 * @file
 * navarts_user_profile.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function navarts_user_profile_image_default_styles() {
  $styles = array();

  // Exported image style: user_profile_image.
  $styles['user_profile_image'] = array(
    'name' => 'user_profile_image',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '100',
          'height' => '125',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
