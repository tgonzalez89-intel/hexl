// Copyright (C) 2020-2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0

#ifdef HEXL_CPU
#include "hexl/experimental/seal/ckks-multiply.hpp"
#include "hexl/experimental/seal/ckks-multiply-cpu.hpp"

#include <cstring>

#include "hexl/eltwise/eltwise-add-mod.hpp"
#include "hexl/eltwise/eltwise-mult-mod.hpp"
#include "hexl/number-theory/number-theory.hpp"
#include "hexl/util/aligned-allocator.hpp"
#include "hexl/util/check.hpp"
#include "util/cpu-features.hpp"

namespace intel {
namespace hexl {

void CkksMultiply(uint64_t* result, const uint64_t* operand1,
                  const uint64_t* operand2, uint64_t n, const uint64_t* moduli,
                  uint64_t num_moduli) {
  intel::hexl::cpu::CKKSMultiply(result, operand1, operand2, n, moduli,
                                 num_moduli);
}

}  // namespace hexl
}  // namespace intel
#endif
