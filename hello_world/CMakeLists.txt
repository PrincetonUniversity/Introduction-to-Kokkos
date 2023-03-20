cmake_minimum_required (VERSION 3.10)
project (IntroductionToKokkos)

# Install Kokkos as a dependency
## TODO: Add options for on utilizing in house builds
include(FetchContent)
FetchContent_Declare(
  kokkos
  URL https://github.com/kokkos/kokkos/archive/refs/tags/3.6.01.zip
)
FetchContent_MakeAvailable(kokkos)

Message(" Compiling Hello World Program ")

add_executable(hello_world hello_world.cpp)
target_link_libraries(hello_world Kokkos::kokkos)