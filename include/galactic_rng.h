#ifndef GALACTIC_RNG_H
#define GALACTIC_RNG_H
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// DRBG instantiation with optional personalization string
int galactic_drbg_instantiate(const uint8_t *entropy, size_t entropy_len,
                              const uint8_t *nonce, size_t nonce_len,
                              const uint8_t *pers, size_t pers_len);

int galactic_drbg_reseed(const uint8_t *entropy, size_t entropy_len,
                         const uint8_t *additional, size_t add_len);

int galactic_drbg_generate(uint8_t *out, size_t outlen,
                           const uint8_t *additional, size_t add_len);

// QRNG integration: fetch raw quantum entropy and inject to DRBG
int galactic_qrng_get(uint8_t *buf, size_t len);
int galactic_qrng_healthcheck(void);

#ifdef __cplusplus
}
#endif
#endif
