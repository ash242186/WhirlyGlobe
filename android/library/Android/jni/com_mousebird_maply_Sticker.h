/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_Sticker */

#ifndef _Included_com_mousebird_maply_Sticker
#define _Included_com_mousebird_maply_Sticker
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_Sticker
 * Method:    setLowerLeft
 * Signature: (DD)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sticker_setLowerLeft
  (JNIEnv *, jobject, jdouble, jdouble);

/*
 * Class:     com_mousebird_maply_Sticker
 * Method:    setUpperRight
 * Signature: (DD)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sticker_setUpperRight
  (JNIEnv *, jobject, jdouble, jdouble);

/*
 * Class:     com_mousebird_maply_Sticker
 * Method:    setRotation
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sticker_setRotation
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     com_mousebird_maply_Sticker
 * Method:    setCoordSys
 * Signature: (Lcom/mousebird/maply/CoordSystem;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sticker_setCoordSys
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_Sticker
 * Method:    setSampling
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sticker_setSampling
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_mousebird_maply_Sticker
 * Method:    setEpsilon
 * Signature: (DIIII)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sticker_setEpsilon
  (JNIEnv *, jobject, jdouble, jint, jint, jint, jint);

/*
 * Class:     com_mousebird_maply_Sticker
 * Method:    setImageFormatNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sticker_setImageFormatNative
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_Sticker
 * Method:    setImagesNative
 * Signature: ([J)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sticker_setImagesNative
  (JNIEnv *, jobject, jlongArray);

/*
 * Class:     com_mousebird_maply_Sticker
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sticker_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_Sticker
 * Method:    initialise
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sticker_initialise
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_Sticker
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sticker_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
