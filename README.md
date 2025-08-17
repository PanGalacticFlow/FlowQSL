# GalacticQSL – Quantum-Safe Cryptographic Library (Skeleton)

Defence-grade crypto suite combining PQC + classical + QKD interfaces.

# FlowQSL – File Structure (API names use `galactic_*`)

```
FlowQSL/
├── include/                     # Public API headers
│   ├── galactic_kem.h           # ML-KEM (Kyber) PQC
│   ├── galactic_sig.h           # ML-DSA (Dilithium), SLH-DSA
│   ├── galactic_hash.h          # SHA2, SHA3, SHAKE
│   ├── galactic_aes.h           # AES-256 CBC + GCM
│   ├── galactic_rng.h           # DRBG + QRNG integration
│   ├── galactic_ec.h            # ECDSA, ECDH (FIPS 186-5)
│   ├── galactic_rsa.h           # RSA (2048/3072/4096, FIPS-approved)
│   ├── galactic_qkd.h           # QKD integration API (ETSI/ITU)
│   ├── galactic_util.h          # Const-time ops, zeroization
│   └── galactic_version.h       # Versioning (API & library version)
│
├── src/                         # Internal implementations
│   ├── kem/                     # PQC KEMs (ML-KEM)
│   ├── sig/                     # PQC Signatures (ML-DSA, SLH-DSA)
│   ├── hash/                    # SHA-2, SHA-3, SHAKE
│   ├── aes/                     # AES-256 CBC/GCM
│   ├── rng/                     # DRBG + QRNG connectors
│   ├── ec/                      # ECDSA + ECDH
│   ├── rsa/                     # RSA
│   ├── qkd/                     # QKD drivers/adapters
│   └── util/                    # Secure wipe, timing-safe compare, helpers
│
├── tests/                       # Validation & Self-tests
│   ├── kat/                     # Known Answer Tests (NIST vectors)
│   ├── rng_tests/               # RNG/QRNG health tests
│   ├── ec_tests/                # ECDSA/ECDH tests
│   ├── qkd_tests/               # QKD integration tests
│   └── fips_selftests.c         # FIPS 140-3 startup & power-on self-tests
│
├── examples/                    # Demo programs
│   ├── pqc_kem_demo.c           # ML-KEM key exchange demo
│   ├── pqc_sig_demo.c           # ML-DSA signing demo
│   ├── hybrid_tls_demo.c        # PQC + ECDH hybrid TLS handshake
│   ├── qkd_integration_demo.c   # QKD-fed key exchange demo
│   └── blockchain_wallet_demo.c # ECDSA + PQC hybrid wallet demo
│
├── docs/                        # Documentation
│   ├── roadmap.md               # Compliance & development roadmap
│   ├── file_structure.md        # This file (developer map)
│   ├── FIPS203-MLKEM.txt        # Placeholder: drop official PDF
│   ├── FIPS204-MLDSA.txt        # Placeholder: drop official PDF
│   ├── FIPS205-SLHDSA.txt       # Placeholder: drop official PDF
│   ├── FIPS186-5-DSS.txt        # Placeholder: drop official PDF
│   ├── SP800-56A-ECDH.txt       # Placeholder: drop official PDF
│   ├── SP800-90A-RNG.txt        # Placeholder: drop official PDF
│   ├── ETSI-GS-QKD-014.txt      # QKD standard reference
│   └── ITU-Y3800.txt            # ITU-T QKD framework reference
│
├── cmake/                       # Build system extensions (toolchains, modules)
│
├── CMakeLists.txt               # Root CMake build file
├── LICENSE                      # License (Apache 2.0)
├── README.md                    # Project intro, build, references
└── .gitignore                   # Ignore build artifacts, IDE files, etc.
```

---

## Developer Rules of Thumb

- **Public headers (`include/`)** are stable API. Everything else is private.  
- **`src/` is implementation-only.** No app should include from here.  
- **All algorithms get their own folder.** Never mix PQC, classical, or QKD code.  
- **Every feature must have tests in `tests/`.** Use NIST vectors where available.  
- **All new features must have a demo in `examples/`.**  
- **Docs folder must mirror standards.** Drop PDFs or links so compliance traceability is obvious.  

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
