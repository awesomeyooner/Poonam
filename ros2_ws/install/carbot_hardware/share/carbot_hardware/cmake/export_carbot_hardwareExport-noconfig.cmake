#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "carbot_hardware::carbot_hardware" for configuration ""
set_property(TARGET carbot_hardware::carbot_hardware APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(carbot_hardware::carbot_hardware PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcarbot_hardware.so"
  IMPORTED_SONAME_NOCONFIG "libcarbot_hardware.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS carbot_hardware::carbot_hardware )
list(APPEND _IMPORT_CHECK_FILES_FOR_carbot_hardware::carbot_hardware "${_IMPORT_PREFIX}/lib/libcarbot_hardware.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
