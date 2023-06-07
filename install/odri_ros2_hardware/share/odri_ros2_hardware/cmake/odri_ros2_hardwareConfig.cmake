# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_odri_ros2_hardware_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED odri_ros2_hardware_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(odri_ros2_hardware_FOUND FALSE)
  elseif(NOT odri_ros2_hardware_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(odri_ros2_hardware_FOUND FALSE)
  endif()
  return()
endif()
set(_odri_ros2_hardware_CONFIG_INCLUDED TRUE)

# output package information
if(NOT odri_ros2_hardware_FIND_QUIETLY)
  message(STATUS "Found odri_ros2_hardware: 0.0.0 (${odri_ros2_hardware_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'odri_ros2_hardware' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${odri_ros2_hardware_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(odri_ros2_hardware_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${odri_ros2_hardware_DIR}/${_extra}")
endforeach()
