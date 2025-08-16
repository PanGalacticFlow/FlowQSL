#include "galactic_rsa.h"
int galactic_rsa_keygen(uint8_t *pk, size_t *pk_len, uint8_t *sk, size_t *sk_len, gal_rsa_bits_t bits){(void)pk;(void)pk_len;(void)sk;(void)sk_len;(void)bits;return -1;}
int galactic_rsa_sign_pkcs1v15(uint8_t *sig, size_t *siglen, const uint8_t *msg, size_t msglen, const uint8_t *sk, size_t sk_len, int hash_id){(void)sig;(void)siglen;(void)msg;(void)msglen;(void)sk;(void)sk_len;(void)hash_id;return -1;}
int galactic_rsa_verify_pkcs1v15(const uint8_t *msg, size_t msglen, const uint8_t *sig, size_t siglen, const uint8_t *pk, size_t pk_len, int hash_id){(void)msg;(void)msglen;(void)sig;(void)siglen;(void)pk;(void)pk_len;(void)hash_id;return -1;}
