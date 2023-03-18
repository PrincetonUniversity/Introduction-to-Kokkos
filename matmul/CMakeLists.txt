cmake_minimum_required (VERSION 3.10)
project (KokkosTutorial03)

# Install Kokkos as a dependency
## TODO: Add options for on utilizing in house builds
include(FetchContent)
FetchContent_Declare(
  kokkos
  URL https://github.com/kokkos/kokkos/archive/refs/tags/3.6.01.zip
)
FetchContent_MakeAvailable(kokkos)


add_executable(matmul matmul.cpp)
target_link_libraries(matmul Kokkos::kokkos)


