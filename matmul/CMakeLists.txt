cmake_minimum_required (VERSION 3.10)
project (KokkosTutorial03)

# Install Kokkos as a dependency
## TODO: Add options for on utilizing in house builds
include(FetchContent)
FetchContent_Declare(
  kokkos
  URL https://github.com/kokkos/kokkos/archive/refs/tags/4.1.00.zip
)
FetchContent_MakeAvailable(kokkos)

# add_executable(question question.cpp)
# target_link_libraries(question Kokkos::kokkos)

add_executable(solution solution.cpp)
target_link_libraries(solution Kokkos::kokkos)