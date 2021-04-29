cmake_minimum_required(VERSION 3.18)

set(target_name "test_pch")

project(${target_name})

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_VERBOSE_MAKEFILE OFF)

set(src_files "src/main.cpp"
        "src/Component.cpp" "src/Component.h"
        "src/Entity.cpp" "src/Entity.h"
        "src/System.cpp" "src/System.h")

set(pch_src "src/pch.h")

add_executable(${target_name} ${src_files})

target_precompile_headers(${target_name} PRIVATE ${pch_src})

get_target_property(pch_headers ${target_name} PRECOMPILE_HEADERS)

message("pch_headers: " ${pch_headers})

get_target_property(pch_interface_headers ${target_name} INTERFACE_PRECOMPILE_HEADERS)

message("pch_interface_headers: " ${pch_interface_headers})

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${target_name})
