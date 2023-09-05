#ifndef TACHYON_C_MATH_ELLIPTIC_CURVES_MSM_MSM_GPU_H_
#define TACHYON_C_MATH_ELLIPTIC_CURVES_MSM_MSM_GPU_H_

#include <stddef.h>

#include "tachyon/c/math/elliptic_curves/bls/bls12_381/fr.h"
#include "tachyon/c/math/elliptic_curves/bls/bls12_381/g1.h"
#include "tachyon/c/math/elliptic_curves/bn/bn254/fr.h"
#include "tachyon/c/math/elliptic_curves/bn/bn254/g1.h"

#ifdef __cplusplus
extern "C" {
#endif

TACHYON_C_EXPORT void tachyon_init_msm_gpu(uint8_t degree);

TACHYON_C_EXPORT void tachyon_release_msm_gpu();

TACHYON_C_EXPORT tachyon_bn254_g1_jacobian* tachyon_bn254_g1_point2_msm_gpu(
    const tachyon_bn254_g1_point2* bases, size_t bases_len,
    const tachyon_bn254_fr* scalars, size_t scalars_len);

TACHYON_C_EXPORT tachyon_bn254_g1_jacobian* tachyon_bn254_g1_affine_msm_gpu(
    const tachyon_bn254_g1_affine* bases, size_t bases_len,
    const tachyon_bn254_fr* scalars, size_t scalars_len);

/*
TODO(chokobole): Enable this after cuzk implementation.
TACHYON_C_EXPORT tachyon_bls12_381_g1_jacobian*
tachyon_bls12_381_g1_point2_msm_gpu(const tachyon_bls12_381_g1_point2* bases,
                                    size_t bases_len,
                                    const tachyon_bls12_381_fr* scalars,
                                    size_t scalars_len);

TACHYON_C_EXPORT tachyon_bls12_381_g1_jacobian*
tachyon_bls12_381_g1_affine_msm_gpu(const tachyon_bls12_381_g1_affine* bases,
                                    size_t bases_len,
                                    const tachyon_bls12_381_fr* scalars,
                                    size_t scalars_len);
*/

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // TACHYON_C_MATH_ELLIPTIC_CURVES_MSM_MSM_GPU_H_
