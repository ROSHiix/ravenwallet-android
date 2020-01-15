# Sets the minimum version of CMake required to build your native library.
# This ensures that a certain set of CMake features is available to
# your build.

cmake_minimum_required(VERSION 3.4.1)

# Specifies a library name, specifies whether the library is STATIC or
# SHARED, and provides relative paths to the source code. You can
# define multiple libraries by adding multiple add_library() commands,
# and CMake builds them for you. When you build your app, Gradle
# automatically packages shared libraries with your APK.

# now build app's shared lib
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -DANDROID_STL=gnustl_static -DANDROID_TOOLCHAIN=clang")

# -Wimplicit-function-declaration
# -Wno-missing-prototypes -Werror=return-type -Wdocumentation -Wunreachable-code-aggressive -Wno-missing-braces
# -Wparentheses -Wswitch -Wno-unused-function -Wunused-label -Wno-unused-parameter -Wunused-variable -Wunused-value -Wempty-body
# -Wconditional-uninitialized -Wno-unknown-pragmas -pedantic -Wshadow -Wfour-char-constants -Wno-conversion -Wconstant-conversion
# -Wint-conversion -Wbool-conversion -Wenum-conversion -Wassign-enum -Wno-shorten-64-to-32 -Wpointer-sign -Wnewline-eof
# -Wdeprecated-declarations -Wno-sign-conversion

add_library( # The name of the library.
             core

             # Shared library.
             SHARED

             # Core files
             spv/core/BRAddress.c
             spv/core/BRAddress.h
             spv/core/BRArray.h
             spv/core/BRBase58.c
             spv/core/BRBase58.h
             spv/core/BRBIP44Sequence.c
             spv/core/BRBIP44Sequence.h
             spv/core/BRBIP38Key.c
             spv/core/BRBIP38Key.h
             spv/core/BRBIP39Mnemonic.c
             spv/core/BRBIP39Mnemonic.h
             spv/core/BRBIP39WordsEn.h
             spv/core/BRBloomFilter.c
             spv/core/BRBloomFilter.h
             spv/core/BRChainParams.h
             spv/core/BRCrypto.c
             spv/core/BRCrypto.h
             spv/core/BRInt.h
             spv/core/BRKey.c
             spv/core/BRKey.h
             spv/core/BRMerkleBlock.c
             spv/core/BRMerkleBlock.h
             spv/core/BRPaymentProtocol.c
             spv/core/BRPaymentProtocol.h
             spv/core/BRPeer.c
             spv/core/BRPeer.h
             spv/core/BRPeerManager.c
             spv/core/BRPeerManager.h
             spv/core/BRSet.c
             spv/core/BRSet.h
             spv/core/BRTransaction.c
             spv/core/BRTransaction.h
             spv/core/BRWallet.c
             spv/core/BRWallet.h
             spv/core/BRAssets.c
             spv/core/BRAssets.h
             spv/core/BRScript.c
             spv/core/BRScript.h
             spv/core/ChainParams.h

            # X16r files
			spv/core/crypto/blake.c
			spv/core/crypto/bmw.c
			spv/core/crypto/cubehash.c
			spv/core/crypto/echo.c
			spv/core/crypto/groestl.c
			spv/core/crypto/jh.c
			spv/core/crypto/keccak.c
			spv/core/crypto/luffa.c
			spv/core/crypto/shavite.c
			spv/core/crypto/simd.c
			spv/core/crypto/skein.c
			spv/core/crypto/sph_blake.h
			spv/core/crypto/sph_bmw.h
			spv/core/crypto/sph_cubehash.h
			spv/core/crypto/sph_echo.h
			spv/core/crypto/sph_fugue.c
			spv/core/crypto/sph_fugue.h
			spv/core/crypto/sph_groestl.h
			spv/core/crypto/sph_hamsi.c
			spv/core/crypto/sph_hamsi.h
			spv/core/crypto/sph_hamsi_helper.c
			spv/core/crypto/sph_jh.h
			spv/core/crypto/sph_keccak.h
			spv/core/crypto/sph_luffa.h
			spv/core/crypto/sph_sha2.c
			spv/core/crypto/sph_sha2.h
			spv/core/crypto/sph_sha512.c
			spv/core/crypto/sph_shabal.c
			spv/core/crypto/sph_shabal.h
			spv/core/crypto/sph_shavite.h
			spv/core/crypto/sph_simd.h
			spv/core/crypto/sph_skein.h
			spv/core/crypto/sph_types.h
			spv/core/crypto/sph_whirlpool.c
			spv/core/crypto/sph_whirlpool.h

             # Core JNI files
             spv/BRCoreJni.h
             spv/BRCoreJni.c
             spv/com_ravencoin_core_BRCoreJniReference.c
             spv/com_ravencoin_core_BRCoreJniReference.h
             spv/com_ravencoin_core_BRCoreAddress.c
             spv/com_ravencoin_core_BRCoreAddress.h
             spv/com_ravencoin_core_BRCoreChainParams.c
             spv/com_ravencoin_core_BRCoreChainParams.h
             spv/com_ravencoin_core_BRCorePeer.c
             spv/com_ravencoin_core_BRCorePeer.h
             spv/com_ravencoin_core_BRCoreMasterPubKey.c
             spv/com_ravencoin_core_BRCoreMasterPubKey.h
             spv/com_ravencoin_core_BRCoreKey.h
             spv/com_ravencoin_core_BRCoreKey.c
             spv/com_ravencoin_core_BRCoreMerkleBlock.c
             spv/com_ravencoin_core_BRCoreMerkleBlock.h
             spv/com_ravencoin_core_BRCorePeerManager.c
             spv/com_ravencoin_core_BRCorePeerManager.h
             spv/com_ravencoin_core_BRCoreTransaction.c
             spv/com_ravencoin_core_BRCoreTransaction.h
             spv/com_ravencoin_core_BRCoreTransactionInput.c
             spv/com_ravencoin_core_BRCoreTransactionInput.h
             spv/com_ravencoin_core_BRCoreTransactionOutput.c
             spv/com_ravencoin_core_BRCoreTransactionOutput.h
             spv/com_ravencoin_core_BRCorePaymentProtocol.c
             spv/com_ravencoin_core_BRCorePaymentProtocol.h
             spv/com_ravencoin_core_BRCoreWallet.c
             spv/com_ravencoin_core_BRCoreWallet.h
             spv/com_ravencoin_core_BRCoreTransactionAsset.c
             spv/com_ravencoin_core_BRCoreTransactionAsset.h
 		)

include_directories(spv/)
include_directories(spv/core/)
include_directories(spv/core/secp256k1/include)
include_directories(spv/core/secp256k1/src)
include_directories(spv/core/secp256k1)
include_directories(/System/Library/Frameworks/JavaVM.framework/Headers)

# add lib dependencies
target_link_libraries(
    core
    android
    log)
