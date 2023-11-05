# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/notepadTut_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/notepadTut_autogen.dir/ParseCache.txt"
  "notepadTut_autogen"
  )
endif()
