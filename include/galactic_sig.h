#ifndef GALACTIC_SIG_H
#define GALACTIC_SIG_H
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    GAL_MLDSA_44 = 44,   // Dilithium2
    GAL_MLDSA_65 = 65,   // Dilithium3
    GAL_MLDSA_87 = 87    // Dilithium5 (defence-grade)
} gal_mldsa_level_t;

typedef enum {
    GAL_SLH_128F,
    GAL_SLH_128S,
    GAL_SLH_192F,
    GAL_SLH_192S,
    GAL_SLH_256F,
    GAL_SLH_256S
} gal_slh_profile_t;

// ML-DSA APIs
int galactic_mldsa_keypair(uint8_t *pk, size_t *pk_len,
                           uint8_t *sk, size_t *sk_len,
                           gal_mldsa_level_t level);

int galactic_mldsa_sign(uint8_t *sig, size_t *sig_len,
                        const uint8_t *msg, size_t msg_len,
                        const uint8_t *sk, size_t sk_len,
                        gal_mldsa_level_t level);

int galactic_mldsa_verify(const uint8_t *msg, size_t msg_len,
                          const uint8_t *sig, size_t sig_len,
                          const uint8_t *pk, size_t pk_len,
                          gal_mldsa_level_t level);

// SLH-DSA (SPHINCS+) APIs
int galactic_slh_keypair(uint8_t *pk, size_t *pk_len,
                         uint8_t *sk, size_t *sk_len,
                         gal_slh_profile_t profile);

int galactic_slh_sign(uint8_t *sig, size_t *sig_len,
                      const uint8_t *msg, size_t msg_len,
                      const uint8_t *sk, size_t sk_len,
                      gal_slh_profile_t profile);

int galactic_slh_verify(const uint8_t *msg, size_t msg_len,
                        const uint8_t *sig, size_t sig_len,
                        const uint8_t *pk, size_t pk_len,
                        gal_slh_profile_t profile);

#ifdef __cplusplus
}
#endif
#endif
