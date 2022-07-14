project(pybind-test)

set (CMAKE_CXX_STANDARD 17)

# find Qt
find_package(Qt5 COMPONENTS Core REQUIRED)

# create the library
add_library(cxxtest SHARED api.h cxxtest.h cxxtest.cpp)
target_link_libraries(cxxtest PRIVATE Qt5::Core)
target_include_directories(cxxtest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
