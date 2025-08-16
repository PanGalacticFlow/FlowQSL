#ifndef GALACTIC_AES_H
#define GALACTIC_AES_H
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// AES-256 CBC (PKCS#7 padding expected to be handled by caller or provide streaming API later)
int galactic_aes256_cbc_encrypt(uint8_t *out, size_t *outlen,
                                const uint8_t *in, size_t inlen,
                                const uint8_t key[32], const uint8_t iv[16]);

int galactic_aes256_cbc_decrypt(uint8_t *out, size_t *outlen,
                                const uint8_t *in, size_t inlen,
                                const uint8_t key[32], const uint8_t iv[16]);

// Optional: AES-256 GCM (AEAD)
int galactic_aes256_gcm_encrypt(uint8_t *out, size_t *outlen,
                                uint8_t tag[16],
                                const uint8_t *in, size_t inlen,
                                const uint8_t *aad, size_t aadlen,
                                const uint8_t key[32], const uint8_t iv[12]);

int galactic_aes256_gcm_decrypt(uint8_t *out, size_t *outlen,
                                const uint8_t *in, size_t inlen,
                                const uint8_t *aad, size_t aadlen,
                                const uint8_t key[32], const uint8_t iv[12],
                                const uint8_t tag[16]);

#ifdef __cplusplus
}
#endif
#endif
