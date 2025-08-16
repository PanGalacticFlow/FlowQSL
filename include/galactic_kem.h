#ifndef GALACTIC_KEM_H
#define GALACTIC_KEM_H
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    GAL_MLKEM_512 = 512,
    GAL_MLKEM_768 = 768,
    GAL_MLKEM_1024 = 1024
} gal_mlkem_level_t;

// Sizes are placeholders; replace with spec-accurate constants during implementation.
#define GAL_MLKEM_PUBLICKEY_MAX  16384
#define GAL_MLKEM_SECRETKEY_MAX  32768
#define GAL_MLKEM_CIPHERTEXT_MAX 16384
#define GAL_MLKEM_SHAREDKEY_MAX  64

int galactic_kem_keypair(uint8_t *pk, size_t *pk_len,
                         uint8_t *sk, size_t *sk_len,
                         gal_mlkem_level_t level);

int galactic_kem_encaps(uint8_t *ct, size_t *ct_len,
                        uint8_t *ss, size_t *ss_len,
                        const uint8_t *pk, size_t pk_len,
                        gal_mlkem_level_t level);

int galactic_kem_decaps(uint8_t *ss, size_t *ss_len,
                        const uint8_t *ct, size_t ct_len,
                        const uint8_t *sk, size_t sk_len,
                        gal_mlkem_level_t level);

#ifdef __cplusplus
}
#endif
#endif
