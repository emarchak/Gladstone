<?php
// gladstone by Adaptivethemes.com, a starter sub-sub-theme.

/**
 * Rename each function and instance of "gladstone" to match
 * your subthemes name, e.g. if you name your theme "gladstone" then the function
 * name will be "gladstone_preprocess_hook". Tip - you can search/replace
 * on "gladstone".
 */

/**
 * Override or insert variables into the html templates.
 * Replace 'gladstone' with your themes name, i.e. mytheme_preprocess_html()
 */
function gladstone_preprocess_html(&$vars) {

	// Load the media queries styles
	// If you change the names of these files they must match here - these files are
	// in the /css/ directory of your subtheme - the names must be identical!
	$media_queries_css = array(
		'gladstone.responsive.style.css',
		'gladstone.responsive.layout.css'
	);
	load_subtheme_media_queries($media_queries_css, 'gladstone'); 

 /**
	* Load IE specific stylesheets
	* AT automates adding IE stylesheets, simply add to the array using
	* the conditional comment as the key and the stylesheet name as the value.
	*
	* See our online help: http://adaptivethemes.com/documentation/working-with-internet-explorer
	*
	* For example to add a stylesheet for IE8 only use:
	*
	*	'IE 8' => 'ie-8.css',
	*
	* Your IE CSS file must be in the /css/ directory in your subtheme.
	*/
	$ie_files = array(
		'lte IE 7' => 'ie-lte-7.css',
	);
	load_subtheme_ie_styles($ie_files, 'gladstone'); 

}


function gladstone_process_page(&$vars) {
	$title_classes = array();
	$page_classes = array();
	
	
	$page_classes[] = 'container';
	
	$page_manager = page_manager_get_current_page();
	
	$vars['is_panel'] = (!empty($page_manager)) ? TRUE : FALSE; 
	
	if ($vars['is_panel']) {
		$title_classes[] = "element-invisible";
		$page_classes[] = "panel-page";
	} elseif (!$vars['is_panel']) {
		$page_classes[] = "not-panel";
	}
	
	$vars['title_classes'] = (isset($title_classes[0])) ? " class=\"".implode(" ",$title_classes)."\"" : FALSE;
	$vars['page_classes'] = (isset($page_classes[0])) ? " class=\"".implode(" ",$page_classes)."\"" : FALSE;
}


function gladstone_panels_default_style_render_region($vars) {
	$output = '';
//	$output .= '<div class="region region-' . $vars['region_id'] . '">';
	$output .= implode("\n", $vars['panes']);
//	$output .= '</div>';
	return $output;
}
