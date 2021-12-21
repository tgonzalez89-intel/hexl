#!/usr/bin/env bash

export RUN_CHOICE=1
export FPGA_ENABLE_NTT=1
export FPGA_ENABLE_INTT=1
export FPGA_DEBUG=1
cd build
./example
