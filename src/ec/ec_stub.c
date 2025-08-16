#include "galactic_ec.h"
int galactic_ecdsa_keygen(uint8_t *pk, size_t *pk_len, uint8_t *sk, size_t *sk_len, gal_ec_curve_t curve){(void)pk;(void)pk_len;(void)sk;(void)sk_len;(void)curve;return -1;}
int galactic_ecdsa_sign(uint8_t *sig, size_t *siglen, const uint8_t *msg, size_t msglen, const uint8_t *sk, size_t sk_len, gal_ec_curve_t curve){(void)sig;(void)siglen;(void)msg;(void)msglen;(void)sk;(void)sk_len;(void)curve;return -1;}
int galactic_ecdsa_verify(const uint8_t *msg, size_t msglen, const uint8_t *sig, size_t siglen, const uint8_t *pk, size_t pk_len, gal_ec_curve_t curve){(void)msg;(void)msglen;(void)sig;(void)siglen;(void)pk;(void)pk_len;(void)curve;return -1;}
int galactic_ecdh(uint8_t *shared, size_t *shared_len, const uint8_t *peer_pk, size_t peer_pk_len, const uint8_t *sk, size_t sk_len, gal_ec_curve_t curve){(void)shared;(void)shared_len;(void)peer_pk;(void)peer_pk_len;(void)sk;(void)sk_len;(void)curve;return -1;}
