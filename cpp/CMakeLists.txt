cmake_minimum_required(VERSION 3.16)
project(miru-sdk-example)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(MIRU_FETCH_BOOST ON)
set(MIRU_BUILD_TESTS OFF)
set(MIRU_BUILD_EXAMPLES OFF)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# use FetchContent to download and build miru
include(FetchContent)
FetchContent_Declare(
    miru
    GIT_REPOSITORY https://github.com/miruml/cpp-sdk.git 
    GIT_TAG main
)
FetchContent_MakeAvailable(miru)

# # use add_subdirectory to add miru as a subdirectory
# add_subdirectory("/home/ben/miru/sdk/cpp" "${CMAKE_BINARY_DIR}/miru")


# development example
add_executable(development-example examples/development/main.cpp)
target_link_libraries(development-example PRIVATE miru::miru Threads::Threads)

# production example
add_executable(production-example examples/production/main.cpp)
target_link_libraries(production-example PRIVATE miru::miru Threads::Threads)