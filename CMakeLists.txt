# Image32
# Copyright (C) 2020-2021  surreal-Ceres
#
# Used this library under the terms of MIT license
# Read LICENSE for more information

cmake_minimum_required(VERSION 3.2)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(CMAKE_SHARED_LIBRARY_PREFIX "")
set(CMAKE_STATIC_LIBRARY_PREFIX "")
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)

project(image32 CXX C)

option(IMG32_EXAMPLES "Allow building examples?" ON)
option(IMG32_BUILD_ZLIB "Allow zlib build" ON)
option(IMG32_BUILD_LIBPNG "Allow libpng build" ON)
option(IMG32_BUILD_LIBJPEG "Allow libjpeg build" ON)

add_subdirectory(3rd_party)
add_subdirectory(src)
add_subdirectory(examples)