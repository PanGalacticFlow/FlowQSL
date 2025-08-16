# GalacticQSL – Quantum-Safe Cryptographic Library (Skeleton)

Defence-grade crypto suite combining PQC + classical + QKD interfaces.

## Standards & References
- FIPS 203 – ML-KEM: https://csrc.nist.gov/pubs/fips/203/final
- FIPS 204 – ML-DSA: https://csrc.nist.gov/pubs/fips/204/final
- FIPS 205 – SLH-DSA: https://csrc.nist.gov/pubs/fips/205/final
- FIPS 186-5 – DSS (RSA, ECDSA): https://csrc.nist.gov/pubs/fips/186-5/final
- SP 800-56A Rev.3 – ECDH: https://csrc.nist.gov/pubs/sp/800/56a/rev-3/final
- SP 800-90A Rev.1 – DRBGs: https://csrc.nist.gov/pubs/sp/800/90a/rev-1/final
- SP 800-38A – Block Cipher Modes: https://csrc.nist.gov/pubs/sp/800/38a/final
- FIPS 197 – AES: https://csrc.nist.gov/pubs/fips/197/final
- FIPS 202 – SHA-3 & SHAKE: https://csrc.nist.gov/pubs/fips/202/final
- FIPS 180-4 – SHA-2: https://csrc.nist.gov/pubs/fips/180-4/final
- ETSI QKD: https://www.etsi.org/technologies/qkd
- ITU-T Y.3800 QKD: https://www.itu.int/rec/T-REC-Y.3800/en

## Build (CMake)
```bash
mkdir build && cd build
cmake ..
make
```

## Status
This is a stubbed v0.1 skeleton: all functions currently return -1.
Replace stubs with bindings to PQClean/liboqs/OpenSSL FIPS/AWS-LC, etc.
