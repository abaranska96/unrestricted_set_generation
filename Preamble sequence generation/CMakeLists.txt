cmake_minimum_required(VERSION 3.1)

project (LIBPRACH)

add_subdirectory(googletest-master)

include_directories(${gtest_source_dir}/include ${COMMON_INCLUDES})

add_library (libprachinfo unrestricted_set.cpp prach_info.cpp)

target_include_directories (libprachinfo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable (libprachinfo_ut mainTests.cpp)

target_link_libraries (libprachinfo_ut LINK_PUBLIC libprachinfo)
target_link_libraries (libprachinfo_ut LINK_PUBLIC gtest)