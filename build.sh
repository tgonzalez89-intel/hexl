#!/usr/bin/env bash

rm -rf build install

cmake -S . -B build \
-DCMAKE_C_COMPILER=gcc \
-DCMAKE_CXX_COMPILER=g++ \
-DCMAKE_BUILD_TYPE=Release \
-DCMAKE_INSTALL_PREFIX=install \
-DCMAKE_PREFIX_PATH="$(realpath ${PWD}/../hexl-fpga/install)" \
-DHEXL_TESTING=OFF \
-DHEXL_BENCHMARK=OFF \
-DHEXL_EXPERIMENTAL=ON \
-DHEXL_SHARED_LIB=ON \
-DHEXL_FPGA=ON

cmake --build build -j
cmake --install build
