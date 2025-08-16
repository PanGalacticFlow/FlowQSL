#include "galactic_sig.h"
int galactic_slh_keypair(uint8_t *pk, size_t *pk_len, uint8_t *sk, size_t *sk_len, gal_slh_profile_t profile){(void)pk;(void)pk_len;(void)sk;(void)sk_len;(void)profile;return -1;}
int galactic_slh_sign(uint8_t *sig, size_t *sig_len, const uint8_t *msg, size_t msg_len, const uint8_t *sk, size_t sk_len, gal_slh_profile_t profile){(void)sig;(void)*sig_len;(void)msg;(void)msg_len;(void)sk;(void)sk_len;(void)profile;return -1;}
int galactic_slh_verify(const uint8_t *msg, size_t msg_len, const uint8_t *sig, size_t sig_len, const uint8_t *pk, size_t pk_len, gal_slh_profile_t profile){(void)msg;(void)msg_len;(void)sig;(void)sig_len;(void)pk;(void)pk_len;(void)profile;return -1;}
