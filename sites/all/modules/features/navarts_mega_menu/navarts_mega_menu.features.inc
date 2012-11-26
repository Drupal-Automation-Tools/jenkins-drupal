<?php
/**
 * @file
 * navarts_mega_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function navarts_mega_menu_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
