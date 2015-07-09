find_package(Boost REQUIRED)
link_directories(${Boost_LIBRARY_DIRS})
include_directories(${Boost_INCLUDE_DIR})

add_executable(ci_appveyor main.cpp)