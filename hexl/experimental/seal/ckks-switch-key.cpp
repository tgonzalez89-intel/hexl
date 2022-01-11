// Copyright (C) 2020-2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0

// #ifdef HEXL_CPU
#include "hexl/experimental/seal/ckks-switch-key.hpp"

#include "hexl/experimental/seal/ckks-switch-key-cpu.hpp"

namespace intel {
namespace hexl {

void CkksSwitchKey(uint64_t* result, const uint64_t* t_target_iter_ptr,
                   uint64_t n, uint64_t decomp_modulus_size,
                   uint64_t key_modulus_size, uint64_t rns_modulus_size,
                   uint64_t key_component_count, uint64_t* moduli,
                   const uint64_t** k_switch_keys,
                   uint64_t* modswitch_factors) {
  intel::hexl::cpu::CkksSwitchKey(result, t_target_iter_ptr, n,
                                  decomp_modulus_size, key_modulus_size,
                                  rns_modulus_size, key_component_count, moduli,
                                  k_switch_keys, modswitch_factors);
}

}  // namespace hexl
}  // namespace intel
// #endif
