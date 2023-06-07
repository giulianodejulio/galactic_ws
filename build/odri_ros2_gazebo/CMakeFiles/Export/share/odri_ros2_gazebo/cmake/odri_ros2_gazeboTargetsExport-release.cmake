#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "odri_ros2_gazebo::odri_gazebo_plugin" for configuration "Release"
set_property(TARGET odri_ros2_gazebo::odri_gazebo_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(odri_ros2_gazebo::odri_gazebo_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libodri_gazebo_plugin.so"
  IMPORTED_SONAME_RELEASE "libodri_gazebo_plugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS odri_ros2_gazebo::odri_gazebo_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_odri_ros2_gazebo::odri_gazebo_plugin "${_IMPORT_PREFIX}/lib/libodri_gazebo_plugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
