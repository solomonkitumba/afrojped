<?php
/**
 * @file
 * afrojped_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function afrojped_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_contact-us:node/3
  $menu_links['main-menu_contact-us:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'contact us',
    'options' => array(
      'identifier' => 'main-menu_contact-us:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_objectives:node/21
  $menu_links['main-menu_objectives:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Objectives',
    'options' => array(
      'identifier' => 'main-menu_objectives:node/21',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_our-mission:node/20
  $menu_links['main-menu_our-mission:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Our mission',
    'options' => array(
      'identifier' => 'main-menu_our-mission:node/20',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_services:services
  $menu_links['main-menu_services:services'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'services',
    'router_path' => 'services',
    'link_title' => 'services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_services:services',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_tutorials:tutorial
  $menu_links['main-menu_tutorials:tutorial'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tutorial',
    'router_path' => 'tutorial',
    'link_title' => 'Tutorials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tutorials:tutorial',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_who-we-are:node/1
  $menu_links['main-menu_who-we-are:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Who we are',
    'options' => array(
      'identifier' => 'main-menu_who-we-are:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_tutorials:tutorial
  $menu_links['menu-footer-menu_tutorials:tutorial'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'tutorial',
    'router_path' => 'tutorial',
    'link_title' => 'Tutorials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_tutorials:tutorial',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Objectives');
  t('Our mission');
  t('Tutorials');
  t('Who we are');
  t('contact us');
  t('services');


  return $menu_links;
}
