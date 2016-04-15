project(CppCore)
cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)

include(conanbuildinfo.cmake)
conan_basic_setup()

#option(BUILD_TEST "Build the tests" FALSE)

add_library(core
        src/displayer.h
        src/platform_config.h
        src/point.h
        src/rect.h)
target_link_libraries(core ${CONAN_LIBS})

#IF(BUILD_TEST)
#    add_executable(test_logger test/test_logger.cpp)
#    target_link_libraries(test_logger logger ${CONAN_LIBS})
#ENDIF()