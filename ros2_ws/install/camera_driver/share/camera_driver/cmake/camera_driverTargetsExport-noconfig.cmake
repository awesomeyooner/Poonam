#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "camera_driver::camera_driver_node" for configuration ""
set_property(TARGET camera_driver::camera_driver_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(camera_driver::camera_driver_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/camera_driver/camera_driver_node"
  )

list(APPEND _IMPORT_CHECK_TARGETS camera_driver::camera_driver_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_camera_driver::camera_driver_node "${_IMPORT_PREFIX}/lib/camera_driver/camera_driver_node" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
