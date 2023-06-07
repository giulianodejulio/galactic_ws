# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_offline_trajectory_publisher_state_machine_interface_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED offline_trajectory_publisher_state_machine_interface_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(offline_trajectory_publisher_state_machine_interface_FOUND FALSE)
  elseif(NOT offline_trajectory_publisher_state_machine_interface_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(offline_trajectory_publisher_state_machine_interface_FOUND FALSE)
  endif()
  return()
endif()
set(_offline_trajectory_publisher_state_machine_interface_CONFIG_INCLUDED TRUE)

# output package information
if(NOT offline_trajectory_publisher_state_machine_interface_FIND_QUIETLY)
  message(STATUS "Found offline_trajectory_publisher_state_machine_interface: 0.0.0 (${offline_trajectory_publisher_state_machine_interface_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'offline_trajectory_publisher_state_machine_interface' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${offline_trajectory_publisher_state_machine_interface_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(offline_trajectory_publisher_state_machine_interface_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${offline_trajectory_publisher_state_machine_interface_DIR}/${_extra}")
endforeach()
