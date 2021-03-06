/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class nitf_BlockingInfo */

#ifndef _Included_nitf_BlockingInfo
#define _Included_nitf_BlockingInfo
#ifdef __cplusplus
extern "C" {
#endif
#undef nitf_BlockingInfo_INVALID_ADDRESS
#define nitf_BlockingInfo_INVALID_ADDRESS 0LL
/*
 * Class:     nitf_BlockingInfo
 * Method:    construct
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nitf_BlockingInfo_construct
  (JNIEnv *, jobject);

/*
 * Class:     nitf_BlockingInfo
 * Method:    getNumBlocksPerRow
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_BlockingInfo_getNumBlocksPerRow
  (JNIEnv *, jobject);

/*
 * Class:     nitf_BlockingInfo
 * Method:    setNumBlocksPerRow
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_nitf_BlockingInfo_setNumBlocksPerRow
  (JNIEnv *, jobject, jint);

/*
 * Class:     nitf_BlockingInfo
 * Method:    getNumBlocksPerCol
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_BlockingInfo_getNumBlocksPerCol
  (JNIEnv *, jobject);

/*
 * Class:     nitf_BlockingInfo
 * Method:    setNumBlocksPerCol
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_nitf_BlockingInfo_setNumBlocksPerCol
  (JNIEnv *, jobject, jint);

/*
 * Class:     nitf_BlockingInfo
 * Method:    getNumRowsPerBlock
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_BlockingInfo_getNumRowsPerBlock
  (JNIEnv *, jobject);

/*
 * Class:     nitf_BlockingInfo
 * Method:    setNumRowsPerBlock
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_nitf_BlockingInfo_setNumRowsPerBlock
  (JNIEnv *, jobject, jint);

/*
 * Class:     nitf_BlockingInfo
 * Method:    getNumColsPerBlock
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_BlockingInfo_getNumColsPerBlock
  (JNIEnv *, jobject);

/*
 * Class:     nitf_BlockingInfo
 * Method:    setNumColsPerBlock
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_nitf_BlockingInfo_setNumColsPerBlock
  (JNIEnv *, jobject, jint);

/*
 * Class:     nitf_BlockingInfo
 * Method:    getLength
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_nitf_BlockingInfo_getLength
  (JNIEnv *, jobject);

/*
 * Class:     nitf_BlockingInfo
 * Method:    setLength
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_nitf_BlockingInfo_setLength
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
