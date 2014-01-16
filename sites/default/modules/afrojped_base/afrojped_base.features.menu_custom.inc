<?php
/**
 * @file
 * afrojped_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function afrojped_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'menus at the footer of the website',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Features');
  t('Footer menu');
  t('Main menu');
  t('Menu items for any enabled features.');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('menus at the footer of the website');


  return $menus;
}
