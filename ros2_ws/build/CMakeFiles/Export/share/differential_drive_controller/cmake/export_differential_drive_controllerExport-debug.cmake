#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "differential_drive_controller::differential_drive_controller" for configuration "Debug"
set_property(TARGET differential_drive_controller::differential_drive_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(differential_drive_controller::differential_drive_controller PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "fmt::fmt"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libdifferential_drive_controller.so"
  IMPORTED_SONAME_DEBUG "libdifferential_drive_controller.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS differential_drive_controller::differential_drive_controller )
list(APPEND _IMPORT_CHECK_FILES_FOR_differential_drive_controller::differential_drive_controller "${_IMPORT_PREFIX}/lib/libdifferential_drive_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
