#include <string.h>
#include "galactic_util.h"

void galactic_secure_zero(void *v, size_t n) {
    volatile unsigned char *p = (volatile unsigned char*)v;
    while (n--) *p++ = 0;
}

int galactic_memcmp_const(const void *a, const void *b, size_t n) {
    const unsigned char *x = (const unsigned char*)a;
    const unsigned char *y = (const unsigned char*)b;
    unsigned char r = 0;
    for (size_t i = 0; i < n; i++) r |= x[i] ^ y[i];
    return r;
}
