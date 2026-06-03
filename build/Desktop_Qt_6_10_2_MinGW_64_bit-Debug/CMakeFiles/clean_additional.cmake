# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MidPointD_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MidPointD_autogen.dir\\ParseCache.txt"
  "MidPointD_autogen"
  )
endif()
