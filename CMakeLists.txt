cmake_minimum_required(VERSION 3.2)
project(ApiSkylix)

file(GLOB_RECURSE SOURCE_FILES src/*.cc src/*.h)

add_executable(server ${SOURCE_FILES})
