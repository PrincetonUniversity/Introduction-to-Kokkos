#include <iostream>
// #include <Kokkos_Core.hpp>

int main(int argc, char* argv[]) {

    const int n = 5;
    int process_id [n] = { 0, 1, 2, 3, 4 };

    for (int i = 0; i < n; i++){
        std::cout << "Hello from process " << process_id[i] << std::endl;
    }
}