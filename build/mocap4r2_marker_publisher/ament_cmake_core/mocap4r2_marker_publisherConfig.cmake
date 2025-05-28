# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_mocap4r2_marker_publisher_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED mocap4r2_marker_publisher_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(mocap4r2_marker_publisher_FOUND FALSE)
  elseif(NOT mocap4r2_marker_publisher_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(mocap4r2_marker_publisher_FOUND FALSE)
  endif()
  return()
endif()
set(_mocap4r2_marker_publisher_CONFIG_INCLUDED TRUE)

# output package information
if(NOT mocap4r2_marker_publisher_FIND_QUIETLY)
  message(STATUS "Found mocap4r2_marker_publisher: 0.0.7 (${mocap4r2_marker_publisher_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'mocap4r2_marker_publisher' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${mocap4r2_marker_publisher_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(mocap4r2_marker_publisher_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${mocap4r2_marker_publisher_DIR}/${_extra}")
endforeach()
