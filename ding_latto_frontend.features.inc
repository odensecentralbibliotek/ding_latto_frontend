<?php
/**
 * @file
 * ding_latto_frontend.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ding_latto_frontend_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
