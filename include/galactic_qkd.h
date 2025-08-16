#ifndef GALACTIC_QKD_H
#define GALACTIC_QKD_H
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Abstract QKD interface. Implementation may talk to ETSI/ITU QKD controllers.
int galactic_qkd_fetch_key(uint8_t *key, size_t keylen, const char *channel_id);
int galactic_qkd_healthcheck(const char *channel_id);

#ifdef __cplusplus
}
#endif
#endif
