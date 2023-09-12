cmake_minimum_required(VERSION 3.8)
project(system_monitor_core)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include_directories(
    include
)

add_library(${PROJECT_NAME} SHARED 
    src/system_monitor_core.cpp
    src/ram.cpp
    src/cpu.cpp
    src/ethernet.cpp
)

target_include_directories(
  ${PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

  set(PUBLIC_HEADER_DIRS
  "include/system_monitor_core/system_monitor_core.hpp"
  "include/system_monitor_core/ethernet.hpp"
  "include/system_monitor_core/cpu.hpp"
  "include/system_monitor_core/ram.hpp"
  "include/system_monitor_core/temp.hpp"
  "include/system_monitor_core/BaseClass.hpp"
)

string(REPLACE " " ";" PUBLIC_HEADER_DIRS_STRING "${PUBLIC_HEADER_DIRS}")

set_target_properties(
  ${PROJECT_NAME} PROPERTIES
  PUBLIC_HEADER "${PUBLIC_HEADER_DIRS_STRING}"
)

install(
  TARGETS ${PROJECT_NAME}
  EXPORT ${PROJECT_NAME}-config
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION include/${PROJECT_NAME})
install(EXPORT ${PROJECT_NAME}-config DESTINATION lib/cmake/${PROJECT_NAME})