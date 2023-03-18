#include <iostream>
// #include <Kokkos_Core.hpp>

int main() {

    int n = 5;
    int process_id [n] = { 0, 1, 2, 3, 4, 5 };

    for (int i = 0; i < n; i++){
        std::cout << "Hello from process " << i << std::endl;
    }
}