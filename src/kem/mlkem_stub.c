#include "galactic_kem.h"
int galactic_kem_keypair(uint8_t *pk, size_t *pk_len, uint8_t *sk, size_t *sk_len, gal_mlkem_level_t level) { (void)pk;(void)pk_len;(void)sk;(void)sk_len;(void)level; return -1; }
int galactic_kem_encaps(uint8_t *ct, size_t *ct_len, uint8_t *ss, size_t *ss_len, const uint8_t *pk, size_t pk_len, gal_mlkem_level_t level) { (void)ct;(void)ct_len;(void)ss;(void)ss_len;(void)pk;(void)pk_len;(void)level; return -1; }
int galactic_kem_decaps(uint8_t *ss, size_t *ss_len, const uint8_t *ct, size_t ct_len, const uint8_t *sk, size_t sk_len, gal_mlkem_level_t level) { (void)ss;(void)ss_len;(void)ct;(void)ct_len;(void)sk;(void)sk_len;(void)level; return -1; }
