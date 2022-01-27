#!/usr/bin/env bash

rm -rf build install

cmake -S . -B build \
-DCMAKE_C_COMPILER=gcc \
-DCMAKE_CXX_COMPILER=g++ \
-DCMAKE_BUILD_TYPE=Release \
-DHEXL_TESTING=OFF \
-DHEXL_BENCHMARK=OFF \
-DHEXL_EXPERIMENTAL=ON \
-DHEXL_SHARED_LIB=ON \
-DHEXL_DUMP_JSON=ON

cmake --build build -j
#cmake --install build
