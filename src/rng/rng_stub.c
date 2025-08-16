#include "galactic_rng.h"
int galactic_drbg_instantiate(const uint8_t *entropy, size_t entropy_len, const uint8_t *nonce, size_t nonce_len, const uint8_t *pers, size_t pers_len){(void)entropy;(void)entropy_len;(void)nonce;(void)nonce_len;(void)pers;(void)pers_len;return -1;}
int galactic_drbg_reseed(const uint8_t *entropy, size_t entropy_len, const uint8_t *additional, size_t add_len){(void)entropy;(void)entropy_len;(void)additional;(void)add_len;return -1;}
int galactic_drbg_generate(uint8_t *out, size_t outlen, const uint8_t *additional, size_t add_len){(void)out;(void)outlen;(void)additional;(void)add_len;return -1;}
int galactic_qrng_get(uint8_t *buf, size_t len){(void)buf;(void)len;return -1;}
int galactic_qrng_healthcheck(void){return -1;}
