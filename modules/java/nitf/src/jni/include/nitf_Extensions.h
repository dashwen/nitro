/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class nitf_Extensions */

#ifndef _Included_nitf_Extensions
#define _Included_nitf_Extensions
#ifdef __cplusplus
extern "C" {
#endif
#undef nitf_Extensions_INVALID_ADDRESS
#define nitf_Extensions_INVALID_ADDRESS 0L
/*
 * Class:     nitf_Extensions
 * Method:    appendTRE
 * Signature: (Lnitf/TRE;)V
 */
JNIEXPORT void JNICALL Java_nitf_Extensions_appendTRE
  (JNIEnv *, jobject, jobject);

/*
 * Class:     nitf_Extensions
 * Method:    getTREsByName
 * Signature: (Ljava/lang/String;)Ljava/util/Collection;
 */
JNIEXPORT jobject JNICALL Java_nitf_Extensions_getTREsByName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     nitf_Extensions
 * Method:    removeTREsByName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_nitf_Extensions_removeTREsByName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     nitf_Extensions
 * Method:    exists
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_nitf_Extensions_exists
  (JNIEnv *, jobject, jstring);

/*
 * Class:     nitf_Extensions
 * Method:    getAll
 * Signature: ()Ljava/util/Collection;
 */
JNIEXPORT jobject JNICALL Java_nitf_Extensions_getAll
  (JNIEnv *, jobject);

/*
 * Class:     nitf_Extensions
 * Method:    computeLength
 * Signature: (Lnitf/Version;)J
 */
JNIEXPORT jlong JNICALL Java_nitf_Extensions_computeLength
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
