// Copyright (C) 2020-2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0

#ifndef HEXL_FPGA_COMPAT
#include "hexl/experimental/seal/ckks-multiply.hpp"

#include "hexl/experimental/seal/ckks-multiply-cpu.hpp"

namespace intel {
namespace hexl {

void DyadicMultiply(uint64_t* result, const uint64_t* operand1,
                    const uint64_t* operand2, uint64_t n,
                    const uint64_t* moduli, uint64_t num_moduli) {
  intel::hexl::cpu::DyadicMultiply(result, operand1, operand2, n, moduli,
                                   num_moduli);
}

}  // namespace hexl
}  // namespace intel
#endif
