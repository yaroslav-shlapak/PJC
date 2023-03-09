cmake_minimum_required(VERSION 3.24)
project(pjc)

set(CMAKE_CXX_STANDARD 20)

add_executable(pjc lab01/lab0102.cpp)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY  https://github.com/fmtlib/fmt
        GIT_TAG         a33701196adfad74917046096bf5a2aa0ab0bb50
)
FetchContent_MakeAvailable(fmt)
target_link_libraries(pjc fmt)