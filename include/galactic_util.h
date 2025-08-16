#ifndef GALACTIC_UTIL_H
#define GALACTIC_UTIL_H
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void galactic_secure_zero(void *v, size_t n);
int galactic_memcmp_const(const void *a, const void *b, size_t n);

#ifdef __cplusplus
}
#endif
#endif
