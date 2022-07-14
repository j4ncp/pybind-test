cmake_minimum_required(VERSION 3.18)

project(pybind-test)

set (CMAKE_CXX_STANDARD 17)

# pybind11 importieren
include(FetchContent)

FetchContent_Declare(
  pybind11
  GIT_REPOSITORY https://github.com/pybind/pybind11.git
  GIT_TAG        914c06fb252b6cc3727d0eedab6736e88a3fcb01  # v2.9.2
)


FetchContent_MakeAvailable(pybind11)

# create bindings
pybind11_add_module(cxxtestpy bindings.cpp)
target_link_libraries(cxxtestpy PRIVATE cxxtest)
