find_package(Boost COMPONENTS unit_test_framework REQUIRED)
link_directories(${Boost_LIBRARY_DIRS})
include_directories(${Boost_INCLUDE_DIR})

include_directories (../src)
add_executable (testapp test.cpp ../src/double_int.cpp) 

target_link_libraries(testapp
                      ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

enable_testing()
add_test(MyTestDouble testapp)