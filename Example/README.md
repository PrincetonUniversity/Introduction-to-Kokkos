# Vector Matrix Vector inner product

This example is kokkos implementation of vector-matrix-vector inner product. The code is based on [kokkos-tutorials](https://github.com/kokkos/kokkos-tutorials). There are minor modifications to the original code.

## Installation

#### REQUIREMENTS
- cmake3
- Valid C++ compiler with atleast C++17 capability supporting OpenMP
- Nvidia compiler if compiling for CUDA architecture (nvcc)

The code can also be compiled for other architectures, however for brewity, this documentation only considers NVIDIA GPUS (specifically Ampere architecture). For more information visit [kokkos documentation page](https://kokkos.github.io/kokkos-core-wiki/).

#### Compilation Instructions

Loading required modules:

If working on Princeton University clusters, for example Della, you'd need to load required dependencies before you can compile your code (i.e. cmake, C++ compiler & NVIDIA cuda compiler). Use the following modules to do this:

```
    module load cudatoolkit/11.7
```

Compiling for CPUs

- Compiling without parallelization (serial version)
```
    cmake3 -S . -B build
    cmake3 --build build    
```

- Compiling with OpenMP (threading)
```
    cmake3 -S . -B build -DKokkos_ENABLE_OPENMP=ON
    cmake3 --build build
```

- Compiling with CUDA enabled (NVIDIA AMPERE GPUs)
```
    cmake3 -S . -B build -DKokkos_ENABLE_CUDA=ON -DKokkos_ARCH_AMPERE80=ON  -DKokkos_ENABLE_CUDA_LAMBDA=ON
    cmake3 --build build
```

## Running the code

Make sure you have an NVIDIA GPU visible if you compiled with CUDA enabled. In case of using OpenMP, set OMP_PROC_BIND=true and OMP_PLACES=threads for best performance. 

Execute the application with default rows and columns using 

```
./build/matmul
```

To change the number of rows and columns

```
./build/matmul -N <number-of-rows> -M <number-of-columns>
```

You can view other available options using 
```
./build/matmul -h
```

Test the peformance by changing the number of rows, columns, view layout, execution space etc.

## Contributors

Rohit Kakodkar