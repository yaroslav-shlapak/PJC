cmake_minimum_required(VERSION 3.24)
project(pjc)

set(CMAKE_CXX_STANDARD 20)

add_executable(pjc01 lab01/lab0102.cpp)
add_executable(pjc02 lab02/lab0201.cpp)
add_executable(pjc03 lab03/lab0301.cpp)
add_executable(pjc0302 lab03/lab0302.cpp)
add_executable(pjc0303 lab03/lab0303.cpp)
add_executable(pjc04test lab04/lab04test.cpp)
add_executable(pjc0401 lab04/lab0401.cpp)
add_executable(pjc0501 lab05/lab0501.cpp)
add_executable(user-defined-types lab05/user-defined-types.cpp)
add_executable(pjc06test lab06/lab06test.cpp)
add_executable(pjc05homework01 lab05/lab05homework01.cpp)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY  https://github.com/fmtlib/fmt
        GIT_TAG         a33701196adfad74917046096bf5a2aa0ab0bb50
)
FetchContent_MakeAvailable(fmt)
target_link_libraries(pjc01 fmt)
target_link_libraries(pjc02 fmt)
target_link_libraries(pjc03 fmt)
target_link_libraries(pjc0302 fmt)
target_link_libraries(pjc0303 fmt)
target_link_libraries(pjc04test fmt)
target_link_libraries(pjc0401 fmt)
target_link_libraries(pjc0501 fmt)
target_link_libraries(user-defined-types fmt)
target_link_libraries(pjc06test fmt)
target_link_libraries(pjc05homework01 fmt)