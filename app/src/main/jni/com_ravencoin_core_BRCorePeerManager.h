/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ravencoin_core_BRCorePeerManager */

#ifndef _Included_com_ravencoin_core_BRCorePeerManager
#define _Included_com_ravencoin_core_BRCorePeerManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    getConnectStatusValue
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ravencoin_core_BRCorePeerManager_getConnectStatusValue
  (JNIEnv *, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    connect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ravencoin_core_BRCorePeerManager_connect
  (JNIEnv *, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    jniUseFixedPeer
 * Signature: (Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_ravencoin_core_BRCorePeerManager_jniUseFixedPeer
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    getCurrentPeerName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ravencoin_core_BRCorePeerManager_getCurrentPeerName
  (JNIEnv *, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    disconnect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ravencoin_core_BRCorePeerManager_disconnect
  (JNIEnv *, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    rescan
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ravencoin_core_BRCorePeerManager_rescan
  (JNIEnv *, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    getEstimatedBlockHeight
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_ravencoin_core_BRCorePeerManager_getEstimatedBlockHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    getLastBlockHeight
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_ravencoin_core_BRCorePeerManager_getLastBlockHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    getLastBlockTimestamp
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_ravencoin_core_BRCorePeerManager_getLastBlockTimestamp
  (JNIEnv *, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    getSyncProgress
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ravencoin_core_BRCorePeerManager_getSyncProgress
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    getPeerCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ravencoin_core_BRCorePeerManager_getPeerCount
  (JNIEnv *, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    getDownloadPeerName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ravencoin_core_BRCorePeerManager_getDownloadPeerName
  (JNIEnv *, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    publishTransactionWithListener
 * Signature: (Lcom/ravencoin/core/BRCoreTransaction;Lcom/ravencoin/core/BRCorePeerManager/Listener;)V
 */
JNIEXPORT void JNICALL Java_com_ravencoin_core_BRCorePeerManager_publishTransactionWithListener
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    getRelayCount
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_com_ravencoin_core_BRCorePeerManager_getRelayCount
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    testSaveBlocksCallback
 * Signature: (Z[Lcom/ravencoin/core/BRCoreMerkleBlock;)V
 */
JNIEXPORT void JNICALL Java_com_ravencoin_core_BRCorePeerManager_testSaveBlocksCallback
  (JNIEnv *, jobject, jboolean, jobjectArray);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    testSavePeersCallback
 * Signature: (Z[Lcom/ravencoin/core/BRCorePeer;)V
 */
JNIEXPORT void JNICALL Java_com_ravencoin_core_BRCorePeerManager_testSavePeersCallback
  (JNIEnv *, jobject, jboolean, jobjectArray);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    createCorePeerManager
 * Signature: (Lcom/ravencoin/core/BRCoreChainParams;Lcom/ravencoin/core/BRCoreWallet;D[Lcom/ravencoin/core/BRCoreMerkleBlock;[Lcom/ravencoin/core/BRCorePeer;)J
 */
JNIEXPORT jlong JNICALL Java_com_ravencoin_core_BRCorePeerManager_createCorePeerManager
  (JNIEnv *, jclass, jobject, jobject, jdouble, jobjectArray, jobjectArray);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    installListener
 * Signature: (Lcom/ravencoin/core/BRCorePeerManager/Listener;)V
 */
JNIEXPORT void JNICALL Java_com_ravencoin_core_BRCorePeerManager_installListener
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    disposeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ravencoin_core_BRCorePeerManager_disposeNative
  (JNIEnv *, jobject);

/*
 * Class:     com_ravencoin_core_BRCorePeerManager
 * Method:    initializeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ravencoin_core_BRCorePeerManager_initializeNative
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
