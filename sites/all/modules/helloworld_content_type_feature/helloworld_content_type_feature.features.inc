<?php
/**
 * @file
 * helloworld_content_type_feature.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function helloworld_content_type_feature_node_info() {
  $items = array(
    'about_us_content' => array(
      'name' => t('About Us Content'),
      'base' => 'node_content',
      'description' => t('About Us Content Type'),
      'has_title' => '1',
      'title_label' => t('\'About Us\' Title'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'blog_content_type' => array(
      'name' => t('Blog Content Type'),
      'base' => 'node_content',
      'description' => t('Blog Content including news, events, updates, general weblogs, personal staff blogs, etc'),
      'has_title' => '1',
      'title_label' => t('Blog Content'),
      'help' => '',
    ),
    'donate_content_type' => array(
      'name' => t('Donate Content Type'),
      'base' => 'node_content',
      'description' => t('Donation page content'),
      'has_title' => '1',
      'title_label' => t('Donate Content'),
      'help' => '',
    ),
    'get_involved_content_type' => array(
      'name' => t('Get Involved Content Type'),
      'base' => 'node_content',
      'description' => t('\'Get Involved\' Content'),
      'has_title' => '1',
      'title_label' => t('Get Involved Content'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'projects_content_type' => array(
      'name' => t('Projects Content Type'),
      'base' => 'node_content',
      'description' => t('Projects Content'),
      'has_title' => '1',
      'title_label' => t('Projects Content'),
      'help' => '',
    ),
  );
  return $items;
}
