cmake_minimum_required(VERSION 3.19)
project(miru-sdk-example)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(MIRU_FETCH_BOOST ON)
include(FetchContent)

FetchContent_Declare(
    miru
    GIT_REPOSITORY https://github.com/miruml/cpp-sdk.git 
    GIT_TAG main
)

set(MIRU_BUILD_TESTS OFF)
set(MIRU_BUILD_EXAMPLES OFF)

FetchContent_MakeAvailable(miru)

add_executable(development-example examples/development/main.cpp)
target_link_libraries(development-example PRIVATE miru::miru)