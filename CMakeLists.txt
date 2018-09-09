cmake_minimum_required(VERSION 3.1)

project (LIBPRACH)

add_subdirectory(googletest-master)

include_directories(${gtest_source_dir}/include ${COMMON_INCLUDES})

add_library (libprachinfo src/unrestricted_set.cpp src/prach_info.cpp)

target_include_directories (libprachinfo PUBLIC include)

add_executable (libprachinfo_ut src/mainTests.cpp)

target_link_libraries (libprachinfo_ut LINK_PUBLIC libprachinfo)
target_link_libraries (libprachinfo_ut LINK_PUBLIC gtest)