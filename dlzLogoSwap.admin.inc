<?php


function dlzLogoSwap_admin_settings_form($form, &$form_state, $nid = 0) {
	die("frog");
	$form = array();
	$form['mailfish_types'] = array(
		'#title' => t('The content types to enable Mailfish subscriptions for'),
		'#description' => t('On the specified node types, a Mailfish subscription option will be available and can be enabled while that node is being edited.'),
		'#type' => 'checkboxes',
		'#options' => node_type_get_names(),
		'#default_value' => variable_get('mailfish_types', array())
	);
	return system_settings_form($form);
}