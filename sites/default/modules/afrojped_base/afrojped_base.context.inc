<?php
/**
 * @file
 * afrojped_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function afrojped_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-page';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/1' => 'node/1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-founders-block' => array(
          'module' => 'views',
          'delta' => 'founders-block',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-founders-block_1' => array(
          'module' => 'views',
          'delta' => 'founders-block_1',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['about-page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'index_page';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slidershow-block' => array(
          'module' => 'views',
          'delta' => 'slidershow-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-slidershow-block_1' => array(
          'module' => 'views',
          'delta' => 'slidershow-block_1',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'views-services-block_2' => array(
          'module' => 'views',
          'delta' => 'services-block_2',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
        'views-services-block_1' => array(
          'module' => 'views',
          'delta' => 'services-block_1',
          'region' => 'postscript_fourth',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['index_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['sitewide'] = $context;

  return $export;
}
