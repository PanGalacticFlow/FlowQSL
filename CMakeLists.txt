cmake_minimum_required(VERSION 3.10)
project(galacticqsl C)
set(CMAKE_C_STANDARD 99)

file(GLOB_RECURSE SRC_FILES "src/*.c")
add_library(galacticqsl STATIC ${SRC_FILES})
target_include_directories(galacticqsl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

option(GALQSL_BUILD_EXAMPLES "Build example programs" ON)
if(GALQSL_BUILD_EXAMPLES)
    add_executable(pqc_kem_demo examples/pqc_kem_demo.c)
    target_link_libraries(pqc_kem_demo galacticqsl)

    add_executable(pqc_sig_demo examples/pqc_sig_demo.c)
    target_link_libraries(pqc_sig_demo galacticqsl)

    add_executable(hybrid_tls_demo examples/hybrid_tls_demo.c)
    target_link_libraries(hybrid_tls_demo galacticqsl)

    add_executable(qkd_integration_demo examples/qkd_integration_demo.c)
    target_link_libraries(qkd_integration_demo galacticqsl)

    add_executable(blockchain_wallet_demo examples/blockchain_wallet_demo.c)
    target_link_libraries(blockchain_wallet_demo galacticqsl)
endif()

install(TARGETS galacticqsl ARCHIVE DESTINATION lib)
install(DIRECTORY include/ DESTINATION include)
