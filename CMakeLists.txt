cmake_minimum_required(VERSION 3.17.0)

project(protologic_fleet)


add_link_options(-fno-exceptions)

add_compile_options(-fno-exceptions)
add_compile_options(-Wno-deprecated-declarations)

include_directories("./src")
include_directories("./include")

file(GLOB_RECURSE SOURCES src/*.c src/*.cpp)

set(CMAKE_EXECUTABLE_SUFFIX ".wasm")
add_executable(fleet ${SOURCES})
