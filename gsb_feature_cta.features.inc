<?php
/**
 * @file
 * gsb_feature_cta.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_cta_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
