cmake_minimum_required(VERSION 3.10)

project(kata LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

option(TESTS_ENABLED "Build the library tests" ON)

if(TESTS_ENABLED)
    enable_testing()
    #include(GoogleTest)
    add_subdirectory("${PROJECT_SOURCE_DIR}/externals/googletest" "externals/googletest")
    add_subdirectory(tests)
endif()

if(WIN32)
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
endif()
