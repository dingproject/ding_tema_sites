<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ding_panels_tema_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
}


