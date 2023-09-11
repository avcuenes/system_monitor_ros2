# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_systemmonitor_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED systemmonitor_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(systemmonitor_FOUND FALSE)
  elseif(NOT systemmonitor_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(systemmonitor_FOUND FALSE)
  endif()
  return()
endif()
set(_systemmonitor_CONFIG_INCLUDED TRUE)

# output package information
if(NOT systemmonitor_FIND_QUIETLY)
  message(STATUS "Found systemmonitor: 0.0.0 (${systemmonitor_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'systemmonitor' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${systemmonitor_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(systemmonitor_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${systemmonitor_DIR}/${_extra}")
endforeach()
