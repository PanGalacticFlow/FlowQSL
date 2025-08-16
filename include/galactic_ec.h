#ifndef GALACTIC_EC_H
#define GALACTIC_EC_H
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    GAL_EC_P256 = 256,
    GAL_EC_P384 = 384,
    GAL_EC_P521 = 521
} gal_ec_curve_t;

int galactic_ecdsa_keygen(uint8_t *pk, size_t *pk_len,
                          uint8_t *sk, size_t *sk_len,
                          gal_ec_curve_t curve);

int galactic_ecdsa_sign(uint8_t *sig, size_t *siglen,
                        const uint8_t *msg, size_t msglen,
                        const uint8_t *sk, size_t sk_len,
                        gal_ec_curve_t curve);

int galactic_ecdsa_verify(const uint8_t *msg, size_t msglen,
                          const uint8_t *sig, size_t siglen,
                          const uint8_t *pk, size_t pk_len,
                          gal_ec_curve_t curve);

int galactic_ecdh(uint8_t *shared, size_t *shared_len,
                  const uint8_t *peer_pk, size_t peer_pk_len,
                  const uint8_t *sk, size_t sk_len,
                  gal_ec_curve_t curve);

#ifdef __cplusplus
}
#endif
#endif
