#ifndef GALACTIC_HASH_H
#define GALACTIC_HASH_H
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int galactic_sha256(uint8_t out[32], const uint8_t *in, size_t inlen);
int galactic_sha384(uint8_t out[48], const uint8_t *in, size_t inlen);
int galactic_sha512(uint8_t out[64], const uint8_t *in, size_t inlen);

int galactic_sha3_256(uint8_t out[32], const uint8_t *in, size_t inlen);
int galactic_sha3_512(uint8_t out[64], const uint8_t *in, size_t inlen);

// SHAKE XOF: outlen is arbitrary
int galactic_shake128(uint8_t *out, size_t outlen, const uint8_t *in, size_t inlen);
int galactic_shake256(uint8_t *out, size_t outlen, const uint8_t *in, size_t inlen);

#ifdef __cplusplus
}
#endif
#endif
