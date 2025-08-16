#ifndef GALACTIC_RSA_H
#define GALACTIC_RSA_H
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    GAL_RSA_2048 = 2048,
    GAL_RSA_3072 = 3072,
    GAL_RSA_4096 = 4096
} gal_rsa_bits_t;

int galactic_rsa_keygen(uint8_t *pk, size_t *pk_len,
                        uint8_t *sk, size_t *sk_len,
                        gal_rsa_bits_t bits);

int galactic_rsa_sign_pkcs1v15(uint8_t *sig, size_t *siglen,
                               const uint8_t *msg, size_t msglen,
                               const uint8_t *sk, size_t sk_len,
                               int hash_id);

int galactic_rsa_verify_pkcs1v15(const uint8_t *msg, size_t msglen,
                                 const uint8_t *sig, size_t siglen,
                                 const uint8_t *pk, size_t pk_len,
                                 int hash_id);

#ifdef __cplusplus
}
#endif
#endif
