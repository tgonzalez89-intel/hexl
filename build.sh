#!/usr/bin/env bash

rm -rf build install

cmake -S . -B build \
-DCMAKE_C_COMPILER=gcc \
-DCMAKE_CXX_COMPILER=g++ \
-DCMAKE_BUILD_TYPE=Release \
-DCMAKE_INSTALL_PREFIX=install \
-DHEXL_BENCHMARK=ON \
-DHEXL_TESTING=ON \
-DHEXL_EXPERIMENTAL=ON \
-DHEXL_SHARED_LIB=OFF \
-DHEXL_FPGA_COMPAT=OFF

cmake --build build -j
#cmake --install build
