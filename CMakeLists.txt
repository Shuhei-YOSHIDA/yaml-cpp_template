cmake_minimum_required(VERSION 3.0.2)
project(main)
set(CMAKE_CXX_STANDARD, 11)
find_package(yaml-cpp)

add_executable(main main.cpp)
target_link_libraries(main ${YAML_CPP_LIBRARIES})
