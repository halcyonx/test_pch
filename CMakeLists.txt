cmake_minimum_required(VERSION 3.19)
set(target_name "test_pch")
project(${target_name})

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_VERBOSE_MAKEFILE OFF)

add_executable(test_pch src/main.cpp src/Component.cpp src/Component.h src/Entity.cpp src/Entity.h src/System.cpp src/System.h)

## Set global property (all targets are impacted)
#set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CMAKE_COMMAND} -E time")
## Set property for my_target only
#set_property(TARGET ${target_name} PROPERTY RULE_LAUNCH_COMPILE "${CMAKE_COMMAND} -E time")
