/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class uk_co_mmscomputing_device_sane_jsane */

#ifndef _Included_uk_co_mmscomputing_device_sane_jsane
#define _Included_uk_co_mmscomputing_device_sane_jsane
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_uk_co_mmscomputing_device_sane_jsane_init
  (JNIEnv *, jclass);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    exit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_uk_co_mmscomputing_device_sane_jsane_exit
  (JNIEnv *, jclass);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    getDevices
 * Signature: (Z)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_uk_co_mmscomputing_device_sane_jsane_getDevices
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    open
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_uk_co_mmscomputing_device_sane_jsane_open
  (JNIEnv *, jclass, jstring);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    close
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_uk_co_mmscomputing_device_sane_jsane_close
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    getOptionDescriptor
 * Signature: (II)Luk/co/mmscomputing/device/sane/OptionDescriptor;
 */
JNIEXPORT jobject JNICALL Java_uk_co_mmscomputing_device_sane_jsane_getOptionDescriptor
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    getControlOption
 * Signature: (II[B)V
 */
JNIEXPORT void JNICALL Java_uk_co_mmscomputing_device_sane_jsane_getControlOption
  (JNIEnv *, jclass, jint, jint, jbyteArray);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    setControlOption
 * Signature: (II[B)I
 */
JNIEXPORT jint JNICALL Java_uk_co_mmscomputing_device_sane_jsane_setControlOption
  (JNIEnv *, jclass, jint, jint, jbyteArray);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    setAutoControlOption
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_uk_co_mmscomputing_device_sane_jsane_setAutoControlOption
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    getParameters
 * Signature: (ILuk/co/mmscomputing/device/sane/Parameters;)V
 */
JNIEXPORT void JNICALL Java_uk_co_mmscomputing_device_sane_jsane_getParameters
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    start
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_uk_co_mmscomputing_device_sane_jsane_start
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    read
 * Signature: (I[BII)I
 */
JNIEXPORT jint JNICALL Java_uk_co_mmscomputing_device_sane_jsane_read
  (JNIEnv *, jclass, jint, jbyteArray, jint, jint);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    cancel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_uk_co_mmscomputing_device_sane_jsane_cancel
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    setIOMode
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_uk_co_mmscomputing_device_sane_jsane_setIOMode
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    getSelectFD
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_co_mmscomputing_device_sane_jsane_getSelectFD
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    strStatus
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_uk_co_mmscomputing_device_sane_jsane_strStatus
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    getVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_co_mmscomputing_device_sane_jsane_getVersion
  (JNIEnv *, jclass);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    getWordControlOption
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_co_mmscomputing_device_sane_jsane_getWordControlOption
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    setWordControlOption
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_uk_co_mmscomputing_device_sane_jsane_setWordControlOption
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    getWordArrayControlOption
 * Signature: (II[I)V
 */
JNIEXPORT void JNICALL Java_uk_co_mmscomputing_device_sane_jsane_getWordArrayControlOption
  (JNIEnv *, jclass, jint, jint, jintArray);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    setWordArrayControlOption
 * Signature: (II[I)I
 */
JNIEXPORT jint JNICALL Java_uk_co_mmscomputing_device_sane_jsane_setWordArrayControlOption
  (JNIEnv *, jclass, jint, jint, jintArray);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    getStringControlOption
 * Signature: (III)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_uk_co_mmscomputing_device_sane_jsane_getStringControlOption
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     uk_co_mmscomputing_device_sane_jsane
 * Method:    setStringControlOption
 * Signature: (IIILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_uk_co_mmscomputing_device_sane_jsane_setStringControlOption
  (JNIEnv *, jclass, jint, jint, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
