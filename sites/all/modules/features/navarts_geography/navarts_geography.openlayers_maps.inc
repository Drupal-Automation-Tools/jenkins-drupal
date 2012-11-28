<?php
/**
 * @file
 * navarts_geography.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function navarts_geography_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'geofield_widget_map_1';
  $openlayers_maps->title = 'Geofield Widget Map 1';
  $openlayers_maps->description = 'A Map Used for Geofield Input';
  $openlayers_maps->data = array(
    'width' => '600px',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-75.145040463677, 39.952551510063',
        'zoom' => '18',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 'path',
          'polygon' => 'polygon',
        ),
        'allow_edit' => 1,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'google_normal' => 'google_normal',
      'osm_mapnik' => 'osm_mapnik',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_styles' => array(
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['geofield_widget_map_1'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'geofield_widget_map_locations';
  $openlayers_maps->title = 'Locations';
  $openlayers_maps->description = 'A Map Used for Locations';
  $openlayers_maps->data = array(
    'width' => '600px',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-73.649878738941, 40.70502524438',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 'path',
          'polygon' => 'polygon',
        ),
        'allow_edit' => 1,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'geofield_formatter' => 'geofield_formatter',
        ),
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'google_normal' => 'google_normal',
      'osm_mapnik' => 'osm_mapnik',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'navarts_openlayers_locator_proximity_search_openlayers_1' => '0',
      'navarts_locations_map_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_styles' => array(
      'openlayers_geojson_picture_this' => '0',
      'navarts_locations_map_openlayers_1' => '0',
      'navarts_openlayers_locator_proximity_search_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'geofield_formatter' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'openlayers_geojson_picture_this' => '0',
      'navarts_locations_map_openlayers_1' => '0',
      'navarts_openlayers_locator_proximity_search_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'openlayers_geojson_picture_this' => 0,
      'navarts_locations_map_openlayers_1' => 0,
      'navarts_openlayers_locator_proximity_search_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'navarts_locations_map_openlayers_1' => 0,
      'navarts_openlayers_locator_proximity_search_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['geofield_widget_map_locations'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'ol_locator_proximity_search_map_navarts';
  $openlayers_maps->title = 'Navarts OpenLayers Locator Proximity Search Map';
  $openlayers_maps->description = 'This is the Navarts proxmity search map that comes with the OpenLayers Locator module.';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 1,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-77.343728620092, 40.713944250966',
        'zoom' => '4',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_argparser' => array(
        'anchor' => 0,
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'ol_locator_proximity_search_openlayers_1' => 'ol_locator_proximity_search_openlayers_1',
          'geofield_formatter' => 0,
        ),
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'ol_locator_proximity_search_openlayers_1',
        'point_zoom_level' => '14',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'ol_locator_proximity_search_openlayers_1' => 'ol_locator_proximity_search_openlayers_1',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'ol_locator_proximity_search_openlayers_1' => '0',
      'geofield_formatter' => '0',
      'navarts_openlayers_locator_proximity_search_openlayers_1' => '0',
      'navarts_locations_map_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_styles' => array(
      'openlayers_geojson_picture_this' => '0',
      'navarts_locations_map_openlayers_1' => '0',
      'navarts_openlayers_locator_proximity_search_openlayers_1' => '0',
      'geofield_formatter' => 'default_marker_red',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'openlayers_geojson_picture_this' => '0',
      'navarts_locations_map_openlayers_1' => '0',
      'navarts_openlayers_locator_proximity_search_openlayers_1' => '0',
      'geofield_formatter' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'ol_locator_proximity_search_openlayers_1' => 'ol_locator_proximity_search_openlayers_1',
      'openlayers_geojson_picture_this' => 0,
      'navarts_locations_map_openlayers_1' => 0,
      'navarts_openlayers_locator_proximity_search_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'openlayers_geojson_picture_this' => 0,
      'navarts_locations_map_openlayers_1' => 0,
      'navarts_openlayers_locator_proximity_search_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['ol_locator_proximity_search_map_navarts'] = $openlayers_maps;

  return $export;
}
