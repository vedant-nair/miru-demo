cmake_minimum_required(VERSION 3.16)
project(miru-sdk-example)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# use FetchContent to download and build miru
set(MIRU_FETCH_BOOST ON)
set(MIRU_BUILD_TESTS OFF)
set(MIRU_BUILD_EXAMPLES OFF)

include(FetchContent)
FetchContent_Declare(
    miru
    GIT_REPOSITORY https://github.com/miruml/cpp-sdk.git 
    GIT_TAG rename # replace with desired tag/branch/commit
)
FetchContent_MakeAvailable(miru)

# build the examples copied from the miru repository
add_subdirectory(examples)