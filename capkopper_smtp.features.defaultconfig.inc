<?php
/**
 * @file
 * capkopper_smtp.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function capkopper_smtp_defaultconfig_features() {
  return array(
    'capkopper_smtp' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function capkopper_smtp_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swiftmailer_character_set';
  $strongarm->value = 'UTF-8';
  $export['swiftmailer_character_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swiftmailer_convert_mode';
  $strongarm->value = 1;
  $export['swiftmailer_convert_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swiftmailer_format';
  $strongarm->value = 'text/html';
  $export['swiftmailer_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swiftmailer_path';
  $strongarm->value = 'profiles/capkopper_multilingual/libraries/swiftmailer';
  $export['swiftmailer_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swiftmailer_respect_format';
  $strongarm->value = 0;
  $export['swiftmailer_respect_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swiftmailer_smtp_encryption';
  $strongarm->value = 'tls';
  $export['swiftmailer_smtp_encryption'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swiftmailer_smtp_host';
  $strongarm->value = 'smtp-gw.capkopper.fr';
  $export['swiftmailer_smtp_host'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swiftmailer_smtp_port';
  $strongarm->value = '587';
  $export['swiftmailer_smtp_port'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swiftmailer_transport';
  $strongarm->value = 'smtp';
  $export['swiftmailer_transport'] = $strongarm;

  return $export;
}
