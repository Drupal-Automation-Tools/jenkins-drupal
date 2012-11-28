<?php
/**
 * @file
 * navarts_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function navarts_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events';
  $context->description = '';
  $context->tag = 'Events';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'navarts_events:navarts_calendar_page' => 'navarts_events:navarts_calendar_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-navarts_events-mini_calendar' => array(
          'module' => 'views',
          'delta' => 'navarts_events-mini_calendar',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'views-2d7fdb10657b08cce0bf2b35f89af330' => array(
          'module' => 'views',
          'delta' => '2d7fdb10657b08cce0bf2b35f89af330',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  $export['events'] = $context;

  return $export;
}
