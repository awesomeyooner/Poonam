# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_depthai_driver_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED depthai_driver_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(depthai_driver_FOUND FALSE)
  elseif(NOT depthai_driver_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(depthai_driver_FOUND FALSE)
  endif()
  return()
endif()
set(_depthai_driver_CONFIG_INCLUDED TRUE)

# output package information
if(NOT depthai_driver_FIND_QUIETLY)
  message(STATUS "Found depthai_driver: 0.0.0 (${depthai_driver_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'depthai_driver' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${depthai_driver_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(depthai_driver_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${depthai_driver_DIR}/${_extra}")
endforeach()
