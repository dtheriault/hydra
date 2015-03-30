if(NOT LIBLIQUID_FOUND)
  pkg_check_modules (LIBLIQUID_PKG libliquid)
  find_path(LIBLIQUID_INCLUDE_DIR NAMES liquid.h
    PATHS
    ${LIBLIQUID_PKG_INCLUDE_DIRS}
    /usr/include/liquid
    /usr/include/liquid
    /usr/local/include/liquid
  )

#standard library name for libliquid
set(libliquid_library_names liquid)

  find_library(LIBLIQUID_LIBRARIES
    NAMES ${libliquid_library_names}
    PATHS
    ${LIBLIQUID_PKG_LIBRARY_DIRS}
    /usr/lib
    /usr/local/lib
  )

include(CheckFunctionExists)
if(LIBLIQUID_INCLUDE_DIRS)
    set(CMAKE_REQUIRED_INCLUDES ${LIBLIQUID_INCLUDE_DIRS})
endif()
if(LIBLIQUID_LIBRARIES)
    set(CMAKE_REQUIRED_LIBRARIES ${LIBLIQUID_LIBRARIES})
endif()

if(LIBLIQUID_INCLUDE_DIR AND LIBLIQUID_LIBRARIES)
  set(LIBLIQUID_FOUND TRUE CACHE INTERNAL "libliquid found")
  message(STATUS "Found libliquid: ${LIBLIQUID_INCLUDE_DIR}, ${LIBLIQUID_LIBRARIES}")
else(LIBLIQUID_INCLUDE_DIR AND LIBLIQUID_LIBRARIES)
  set(LIBLIQUID_FOUND FALSE CACHE INTERNAL "libliquid found")
  message(STATUS "libliquid not found.")
endif(LIBLIQUID_INCLUDE_DIR AND LIBLIQUID_LIBRARIES)

mark_as_advanced(LIBLIQUID_INCLUDE_DIR LIBLIQUID_LIBRARIES)

endif(NOT LIBLIQUID_FOUND)
