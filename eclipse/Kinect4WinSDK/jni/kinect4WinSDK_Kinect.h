/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class kinect4WinSDK_Kinect */

#ifndef _Included_kinect4WinSDK_Kinect
#define _Included_kinect4WinSDK_Kinect
#ifdef __cplusplus
extern "C" {
#endif
#undef kinect4WinSDK_Kinect_CNT
#define kinect4WinSDK_Kinect_CNT 5L
/*
 * Class:     kinect4WinSDK_Kinect
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_kinect4WinSDK_Kinect_init
  (JNIEnv *, jobject);

/*
 * Class:     kinect4WinSDK_Kinect
 * Method:    Nui_GetImage
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_kinect4WinSDK_Kinect_Nui_1GetImage
  (JNIEnv *, jobject);

/*
 * Class:     kinect4WinSDK_Kinect
 * Method:    Nui_GetDepth
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_kinect4WinSDK_Kinect_Nui_1GetDepth
  (JNIEnv *, jobject);

/*
 * Class:     kinect4WinSDK_Kinect
 * Method:    Nui_GetMask
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_kinect4WinSDK_Kinect_Nui_1GetMask
  (JNIEnv *, jobject);

/*
 * Class:     kinect4WinSDK_Kinect
 * Method:    getFigure
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_kinect4WinSDK_Kinect_getFigure
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
