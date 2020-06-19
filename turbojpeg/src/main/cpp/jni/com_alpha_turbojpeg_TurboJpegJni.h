/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_alpha_turbojpeg_TurboJpegJni */

#ifndef _Included_com_alpha_turbojpeg_TurboJpegJni
#define _Included_com_alpha_turbojpeg_TurboJpegJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjInitCompress
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjInitCompress
        (JNIEnv *, jobject);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjCompress2
 * Signature: (J[BIIIILcom/alpha/turbojpeg/ImageBuf;II)I
 */
JNIEXPORT jint JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjCompress2
        (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jint, jint, jobject, jint, jint, jint);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjCompressFromYUV
 * Signature: (J[BIIIILcom/alpha/turbojpeg/ImageBuf;II)I
 */
JNIEXPORT jint JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjCompressFromYUV
        (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jint, jint, jobject, jint, jint);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjBufSize
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjBufSize
        (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjBufSizeYUV2
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjBufSizeYUV2
        (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjEncodeYUV3
 * Signature: (J[BIIIILcom/alpha/turbojpeg/ImageBuf;III)I
 */
JNIEXPORT jint JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjEncodeYUV3
        (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jint, jint, jobject, jint, jint, jint);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjInitDecompress
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjInitDecompress
        (JNIEnv *, jobject);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjDecompressHeader3
 * Signature: (J[BJLcom/alpha/turbojpeg/JpegHeader;)I
 */
JNIEXPORT jint JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjDecompressHeader3
        (JNIEnv *, jobject, jlong, jbyteArray, jobject);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjDecompress2
 * Signature: (J[BJLcom/alpha/turbojpeg/ImageBuf;IIIII)I
 */
JNIEXPORT jint JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjDecompress2
        (JNIEnv *, jobject, jlong, jbyteArray, jobject, jint, jint, jint, jint, jint);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjDecompressToYUV2
 * Signature: (J[BJLcom/alpha/turbojpeg/ImageBuf;IIII)I
 */
JNIEXPORT jint JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjDecompressToYUV2
        (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray, jint, jint, jint, jint);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjDecodeYUV
 * Signature: (J[BIILcom/alpha/turbojpeg/ImageBuf;IIIII)I
 */
JNIEXPORT jint JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjDecodeYUV
        (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jobject, jint, jint, jint, jint, jint);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjInitTransform
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjInitTransform
        (JNIEnv *, jobject);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjTransform
 * Signature: (J[BJLcom/alpha/turbojpeg/ImageBuf;Lcom/alpha/turbojpeg/TjTransform;I)I
 */
JNIEXPORT jint JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjTransform
        (JNIEnv *, jobject, jlong, jbyteArray, jint, jobject, jobject, jint);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjDeDestroy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjDestroy
        (JNIEnv *, jobject, jlong);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjGetErrorStr2
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjGetErrorStr2
        (JNIEnv *, jobject, jlong);

/*
 * Class:     com_alpha_turbojpeg_TurboJpegJni
 * Method:    tjGetErrorCode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_alpha_turbojpeg_TurboJpegJni_tjGetErrorCode
        (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
