project(kata_tests)

file(GLOB_RECURSE TESTING_SOURCES CONFIGURE_DEPENDS *.cpp *.hpp)

add_executable(${PROJECT_NAME} ${TESTING_SOURCES})

target_link_libraries(${PROJECT_NAME} kata_lib gtest gmock gtest_main)
