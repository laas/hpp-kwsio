# Requires at least CMake 2.6 to configure the package.
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

SET(CXX_DISABLE_WERROR TRUE)
INCLUDE(cmake/base.cmake)
INCLUDE(cmake/boost.cmake)

SET(PROJECT_NAME hpp-kwsio)
SET(PROJECT_DESCRIPTION
  "Input and Output helper functions for KineoWorks(tm) package.")
SET(PROJECT_URL "")

# Where to compile shared objects
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

SET(${PROJECT_NAME}_HEADERS
  include/hpp/kwsio/configuration.hh
  include/hpp/kwsio/device.hh
  include/hpp/kwsio/interface.hh
  include/hpp/kwsio/mat.hh
  include/hpp/kwsio/path.hh
  )

SETUP_PROJECT()

# Declare dependencies
SEARCH_FOR_BOOST()
ADD_REQUIRED_DEPENDENCY("KineoController >= 2.07")

PKG_CONFIG_APPEND_LIBS(${PROJECT_NAME})

ADD_SUBDIRECTORY(src)

SETUP_PROJECT_FINALIZE()
