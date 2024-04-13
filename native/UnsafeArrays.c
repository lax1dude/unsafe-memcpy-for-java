/*
 * Copyright (c) 2024 lax1dude
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS “AS IS”
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include "UnsafeArraysImpl.h"

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getBooleanArrayElements
 * Signature: ([Z)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getBooleanArrayElements___3Z
  (JNIEnv * jniHandle, jclass jniClass, jbooleanArray array) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL(jniHandle, array, jboolean, GetBooleanArrayElements);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getByteArrayElements
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getByteArrayElements___3B
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray array) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL(jniHandle, array, jbyte, GetByteArrayElements);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getCharArrayElements
 * Signature: ([C)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getCharArrayElements___3C
  (JNIEnv * jniHandle, jclass jniClass, jcharArray array) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL(jniHandle, array, jchar, GetCharArrayElements);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getShortArrayElements
 * Signature: ([S)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getShortArrayElements___3S
  (JNIEnv * jniHandle, jclass jniClass, jshortArray array) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL(jniHandle, array, jshort, GetShortArrayElements);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getIntArrayElements
 * Signature: ([I)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getIntArrayElements___3I
  (JNIEnv * jniHandle, jclass jniClass, jintArray array) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL(jniHandle, array, jint, GetIntArrayElements);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getLongArrayElements
 * Signature: ([J)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getLongArrayElements___3J
  (JNIEnv * jniHandle, jclass jniClass, jlongArray array) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL(jniHandle, array, jlong, GetLongArrayElements);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getFloatArrayElements
 * Signature: ([F)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getFloatArrayElements___3F
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray array) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL(jniHandle, array, jfloat, GetFloatArrayElements);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getDoubleArrayElements
 * Signature: ([D)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getDoubleArrayElements___3D
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray array) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL(jniHandle, array, jdouble, GetDoubleArrayElements);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getBooleanArrayElements
 * Signature: ([Z[Z)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getBooleanArrayElements___3Z_3Z
  (JNIEnv * jniHandle, jclass jniClass, jbooleanArray array, jbooleanArray isCopy) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL_IS_COPY(jniHandle, array, jboolean, GetBooleanArrayElements, isCopy);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getByteArrayElements
 * Signature: ([B[Z)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getByteArrayElements___3B_3Z
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray array, jbooleanArray isCopy) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL_IS_COPY(jniHandle, array, jbyte, GetByteArrayElements, isCopy);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getCharArrayElements
 * Signature: ([C[Z)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getCharArrayElements___3C_3Z
  (JNIEnv * jniHandle, jclass jniClass, jcharArray array, jbooleanArray isCopy) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL_IS_COPY(jniHandle, array, jchar, GetCharArrayElements, isCopy);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getShortArrayElements
 * Signature: ([S[Z)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getShortArrayElements___3S_3Z
  (JNIEnv * jniHandle, jclass jniClass, jshortArray array, jbooleanArray isCopy) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL_IS_COPY(jniHandle, array, jshort, GetShortArrayElements, isCopy);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getIntArrayElements
 * Signature: ([I[Z)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getIntArrayElements___3I_3Z
  (JNIEnv * jniHandle, jclass jniClass, jintArray array, jbooleanArray isCopy) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL_IS_COPY(jniHandle, array, jint, GetIntArrayElements, isCopy);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getLongArrayElements
 * Signature: ([J[Z)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getLongArrayElements___3J_3Z
  (JNIEnv * jniHandle, jclass jniClass, jlongArray array, jbooleanArray isCopy) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL_IS_COPY(jniHandle, array, jlong, GetLongArrayElements, isCopy);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getFloatArrayElements
 * Signature: ([F[Z)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getFloatArrayElements___3F_3Z
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray array, jbooleanArray isCopy) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL_IS_COPY(jniHandle, array, jfloat, GetFloatArrayElements, isCopy);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    getDoubleArrayElements
 * Signature: ([D[Z)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_getDoubleArrayElements___3D_3Z
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray array, jbooleanArray isCopy) {
	UNSAFE_ARRAYS_GET_ELEMENTS_IMPL_IS_COPY(jniHandle, array, jdouble, GetDoubleArrayElements, isCopy);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    releaseBooleanArrayElements
 * Signature: ([ZJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_releaseBooleanArrayElements
  (JNIEnv * jniHandle, jclass jniClass, jbooleanArray array, jlong ptr, jint mode) {
	UNSAFE_ARRAYS_RELEASE_ELEMENTS_IMPL(jniHandle, array, ptr, jboolean, ReleaseBooleanArrayElements, mode);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    releaseByteArrayElements
 * Signature: ([BJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_releaseByteArrayElements
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray array, jlong ptr, jint mode) {
	UNSAFE_ARRAYS_RELEASE_ELEMENTS_IMPL(jniHandle, array, ptr, jbyte, ReleaseByteArrayElements, mode);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    releaseCharArrayElements
 * Signature: ([CJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_releaseCharArrayElements
  (JNIEnv * jniHandle, jclass jniClass, jcharArray array, jlong ptr, jint mode) {
	UNSAFE_ARRAYS_RELEASE_ELEMENTS_IMPL(jniHandle, array, ptr, jchar, ReleaseCharArrayElements, mode);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    releaseShortArrayElements
 * Signature: ([SJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_releaseShortArrayElements
  (JNIEnv * jniHandle, jclass jniClass, jshortArray array, jlong ptr, jint mode) {
	UNSAFE_ARRAYS_RELEASE_ELEMENTS_IMPL(jniHandle, array, ptr, jshort, ReleaseShortArrayElements, mode);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    releaseIntArrayElements
 * Signature: ([IJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_releaseIntArrayElements
  (JNIEnv * jniHandle, jclass jniClass, jintArray array, jlong ptr, jint mode) {
	UNSAFE_ARRAYS_RELEASE_ELEMENTS_IMPL(jniHandle, array, ptr, jint, ReleaseIntArrayElements, mode);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    releaseLongArrayElements
 * Signature: ([JJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_releaseLongArrayElements
  (JNIEnv * jniHandle, jclass jniClass, jlongArray array, jlong ptr, jint mode) {
	UNSAFE_ARRAYS_RELEASE_ELEMENTS_IMPL(jniHandle, array, ptr, jlong, ReleaseLongArrayElements, mode);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    releaseFloatArrayElements
 * Signature: ([FJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_releaseFloatArrayElements
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray array, jlong ptr, jint mode) {
	UNSAFE_ARRAYS_RELEASE_ELEMENTS_IMPL(jniHandle, array, ptr, jfloat, ReleaseFloatArrayElements, mode);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeArrays
 * Method:    releaseDoubleArrayElements
 * Signature: ([DJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeArrays_releaseDoubleArrayElements
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray array, jlong ptr, jint mode) {
	UNSAFE_ARRAYS_RELEASE_ELEMENTS_IMPL(jniHandle, array, ptr, jdouble, ReleaseDoubleArrayElements, mode);
}
