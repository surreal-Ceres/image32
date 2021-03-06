# Image32
# Copyright (C) 2020-2021  surreal-Ceres
#
# Used this library under the terms of MIT license
# Read LICENSE for more information

include(CheckIfDefined)

if(MSVC)
   add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

set(SKIP_INSTALL_ALL ON)

#===================================================
# libjpeg
#===================================================
if(IMG32_BUILD_LIBJPEG)
   set(JPEG_LIBRARIES libjpeg
      CACHE INTERNAL "")
   set(JPEG_INCLUDE_DIRS
      ${CMAKE_CURRENT_SOURCE_DIR}/libjpeg CACHE PATH "")
   add_subdirectory(libjpeg)
endif()

#===================================================
# zlib
#===================================================
if(IMG32_BUILD_ZLIB)
   set(ZLIB_TEST OFF CACHE BOOL "Build zlib test")
   set(ZLIB_INCLUDE_DIRS
      ${CMAKE_CURRENT_SOURCE_DIR}/zlib
      ${CMAKE_CURRENT_BINARY_DIR}/zlib CACHE PATH "")
   set(ZLIB_LIBRARIES
      zlibstatic CACHE INTERNAL "")
   add_subdirectory(zlib)
endif()

#===================================================
# libpng
#===================================================
if(IMG32_BUILD_LIBPNG)
   set(PNG_LIBRARIES
      png_static CACHE INTERNAL "")
   set(PNG_INCLUDE_DIRS
      ${CMAKE_CURRENT_SOURCE_DIR}/libpng
      ${CMAKE_CURRENT_BINARY_DIR}/libpng CACHE PATH "")

   set(PNG_SHARED OFF CACHE BOOL "Build shared lib")
   set(PNG_STATIC ON CACHE BOOL "Build static lib")
   set(PNG_TESTS OFF CACHE BOOL "Build libpng tests")
   set(PNG_BUILD_ZLIB ON CACHE BOOL "Custom zlib Location, else find_package is used")
   add_subdirectory(libpng)
endif()

check_if_defined(JPEG_INCLUDE_DIRS)
check_if_defined(JPEG_LIBRARIES)
check_if_defined(ZLIB_INCLUDE_DIRS)
check_if_defined(ZLIB_LIBRARIES)
check_if_defined(PNG_LIBRARIES)
check_if_defined(PNG_INCLUDE_DIRS)