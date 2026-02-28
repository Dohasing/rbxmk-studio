# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "CMakeFiles/rbxmk-studio_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/rbxmk-studio_autogen.dir/ParseCache.txt"
  "rbxmk-studio_autogen"
  )
endif()
