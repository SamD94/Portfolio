# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/calculatorTut_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/calculatorTut_autogen.dir/ParseCache.txt"
  "calculatorTut_autogen"
  )
endif()
