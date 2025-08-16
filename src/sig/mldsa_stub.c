#include "galactic_sig.h"
int galactic_mldsa_keypair(uint8_t *pk, size_t *pk_len, uint8_t *sk, size_t *sk_len, gal_mldsa_level_t level){(void)pk;(void)pk_len;(void)sk;(void)sk_len;(void)level;return -1;}
int galactic_mldsa_sign(uint8_t *sig, size_t *sig_len, const uint8_t *msg, size_t msg_len, const uint8_t *sk, size_t sk_len, gal_mldsa_level_t level){(void)sig;(void)*sig_len;(void)msg;(void)msg_len;(void)sk;(void)sk_len;(void)level;return -1;}
int galactic_mldsa_verify(const uint8_t *msg, size_t msg_len, const uint8_t *sig, size_t sig_len, const uint8_t *pk, size_t pk_len, gal_mldsa_level_t level){(void)msg;(void)msg_len;(void)sig;(void)sig_len;(void)pk;(void)pk_len;(void)level;return -1;}
