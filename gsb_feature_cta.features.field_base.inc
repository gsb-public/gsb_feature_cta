<?php
/**
 * @file
 * gsb_feature_cta.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gsb_feature_cta_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_cta_action'
  $field_bases['field_cta_action'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cta_action',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Access Database' => 'Access Database',
        'Apply' => 'Apply',
        'Ask Us' => 'Ask Us',
        'Attend' => 'Attend',
        'Browse' => 'Browse',
        'Contact' => 'Contact',
        'Discover' => 'Discover',
        'Email' => 'Email',
        'Explore' => 'Explore',
        'Follow' => 'Follow',
        'Learn about' => 'Learn about',
        'Learn more' => 'Learn more',
        'Make a reservation' => 'Make a reservation',
        'Media Inquiries' => 'Media Inquiries',
        'Participate' => 'Participate',
        'Personal Consultation' => 'Personal Consultation',
        'Plan' => 'Plan',
        'Renew' => 'Renew',
        'Request' => 'Request',
        'See' => 'See',
        'Subscribe' => 'Subscribe',
        'Stay in touch' => 'Stay in touch',
        'View' => 'View',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_cta_item'
  $field_bases['field_cta_item'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cta_item',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_cta_style'
  $field_bases['field_cta_style'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cta_style',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'cta-green' => 'Green',
        'cta-red' => 'Red',
        'cta-red-gradient' => 'Red gradient',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
