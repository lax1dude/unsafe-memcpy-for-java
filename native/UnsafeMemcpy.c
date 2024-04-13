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

#include "UnsafeMemcpyImpl.h"

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__JJI
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_IMPL(dstAddress, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;IJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2IJI
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BIJI
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, byteLength, SetByteArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([SIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3SIJI
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([SIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3SIJI
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jlong srcAddress, jint length) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, length, SetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([CIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3CIJI
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([CIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3CIJI
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jlong srcAddress, jint length) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, length, SetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([IIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3IIJI
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([IIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3IIJI
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jlong srcAddress, jint length) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, length, SetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([JIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3JIJI
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([JIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3JIJI
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jlong srcAddress, jint length) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, length, SetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([DIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3DIJI
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([DIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3DIJI
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jlong srcAddress, jint length) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, length, SetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([FIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3FIJI
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([FIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3FIJI
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jlong srcAddress, jint length) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, length, SetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (JLjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__JLjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;ILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2ILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, byteLength, SetByteArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([SILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3SILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([SILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3SILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, length, SetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([CILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3CILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([CILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3CILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, length, SetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([IILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3IILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([IILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3IILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, length, SetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([JILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3JILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([JILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3JILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, length, SetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([DILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3DILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([DILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3DILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, length, SetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([FILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3FILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([FILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3FILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, length, SetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3BII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, byteLength, GetByteArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;I[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2I_3BII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, byteLength, GetByteArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, byteLength, GetByteArrayRegion, SetByteArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([SI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3SI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([SI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3SI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, length, SetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([CI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3CI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([CI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3CI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, length, SetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([II[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3II_3BII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([II[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3II_3BII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, length, SetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([JI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3JI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([JI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3JI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, length, SetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([DI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3DI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([DI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3DI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, length, SetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([FI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3FI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([FI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3FI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, length, SetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (J[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__J_3SII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (J[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__J_3SII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, GetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (Ljava/nio/Buffer;I[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__Ljava_nio_Buffer_2I_3SII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (Ljava/nio/Buffer;I[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__Ljava_nio_Buffer_2I_3SII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, GetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([BI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3BI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([BI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3BI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, GetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([SI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3SI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAligned
 * Signature: ([SI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAligned___3SI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, GetShortArrayRegion, SetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([SI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3SI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, GetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([SI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3SI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, SetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([CI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3CI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([CI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3CI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, GetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([CI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3CI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, SetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([II[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3II_3SII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([II[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3II_3SII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, GetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([II[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3II_3SII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, SetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([JI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3JI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([JI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3JI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, GetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([JI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3JI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, SetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([DI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3DI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([DI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3DI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, GetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([DI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3DI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, SetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([FI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3FI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([FI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3FI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, GetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([FI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3FI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, length, SetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (J[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__J_3CII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (J[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__J_3CII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, GetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (Ljava/nio/Buffer;I[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__Ljava_nio_Buffer_2I_3CII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (Ljava/nio/Buffer;I[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__Ljava_nio_Buffer_2I_3CII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, GetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([BI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3BI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([BI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3BI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, GetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([SI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3SI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([SI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3SI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, GetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([SI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3SI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, SetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([CI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3CI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAligned
 * Signature: ([CI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAligned___3CI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, GetCharArrayRegion, SetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([CI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3CI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, GetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([CI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3CI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, SetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([II[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3II_3CII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([II[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3II_3CII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, GetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([II[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3II_3CII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, SetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([JI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3JI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([JI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3JI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, GetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([JI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3JI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, SetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([DI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3DI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([DI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3DI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, GetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([DI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3DI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, SetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([FI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3FI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([FI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3FI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, GetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([FI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3FI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, length, SetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (J[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__J_3III
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (J[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__J_3III
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, GetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (Ljava/nio/Buffer;I[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__Ljava_nio_Buffer_2I_3III
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (Ljava/nio/Buffer;I[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__Ljava_nio_Buffer_2I_3III
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, GetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([BI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3BI_3III
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([BI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3BI_3III
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, GetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([SI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3SI_3III
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([SI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3SI_3III
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, GetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([SI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3SI_3III
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, SetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([CI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3CI_3III
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([CI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3CI_3III
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, GetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([CI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3CI_3III
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, SetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([II[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3II_3III
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAligned
 * Signature: ([II[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAligned___3II_3III
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, GetIntArrayRegion, SetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([II[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3II_3III
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, GetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([II[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3II_3III
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, SetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([JI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3JI_3III
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([JI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3JI_3III
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, GetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([JI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3JI_3III
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, SetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([DI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3DI_3III
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([DI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3DI_3III
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, GetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([DI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3DI_3III
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, SetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([FI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3FI_3III
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([FI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3FI_3III
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, GetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([FI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3FI_3III
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, length, SetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (J[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__J_3JII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (J[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__J_3JII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, GetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (Ljava/nio/Buffer;I[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__Ljava_nio_Buffer_2I_3JII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (Ljava/nio/Buffer;I[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__Ljava_nio_Buffer_2I_3JII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, GetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([BI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3BI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([BI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3BI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, GetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([SI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3SI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([SI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3SI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, GetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([SI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3SI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, SetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([CI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3CI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([CI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3CI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, GetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([CI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3CI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, SetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([II[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3II_3JII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([II[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3II_3JII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, GetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([II[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3II_3JII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, SetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([JI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3JI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAligned
 * Signature: ([JI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAligned___3JI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, GetLongArrayRegion, SetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([JI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3JI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, GetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([JI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3JI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, SetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([DI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3DI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([DI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3DI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, GetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([DI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3DI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, SetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([FI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3FI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([FI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3FI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, GetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([FI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3FI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, length, SetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (J[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__J_3DII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (J[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__J_3DII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, GetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (Ljava/nio/Buffer;I[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__Ljava_nio_Buffer_2I_3DII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (Ljava/nio/Buffer;I[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__Ljava_nio_Buffer_2I_3DII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, GetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([BI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3BI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([BI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3BI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, GetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([SI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3SI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([SI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3SI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, GetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([SI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3SI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, SetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([CI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3CI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([CI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3CI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, GetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([CI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3CI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, SetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([II[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3II_3DII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([II[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3II_3DII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, GetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([II[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3II_3DII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, SetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([JI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3JI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([JI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3JI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, GetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([JI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3JI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, SetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([DI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3DI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAligned
 * Signature: ([DI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAligned___3DI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, GetDoubleArrayRegion, SetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([DI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3DI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, GetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([DI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3DI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, SetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([FI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3FI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([FI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3FI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, GetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([FI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3FI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, length, SetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (J[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__J_3FII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (J[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__J_3FII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, GetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: (Ljava/nio/Buffer;I[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned__Ljava_nio_Buffer_2I_3FII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: (Ljava/nio/Buffer;I[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc__Ljava_nio_Buffer_2I_3FII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, GetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([BI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3BI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([BI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3BI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jbyte, GetByteArrayElements, ReleaseByteArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, GetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([SI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3SI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([SI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3SI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, GetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([SI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3SI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jshort, GetShortArrayElements, ReleaseShortArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, SetShortArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([CI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3CI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([CI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3CI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, GetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([CI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3CI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jchar, GetCharArrayElements, ReleaseCharArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, SetCharArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([II[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3II_3FII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([II[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3II_3FII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, GetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([II[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3II_3FII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jint, GetIntArrayElements, ReleaseIntArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, SetIntArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([JI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3JI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([JI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3JI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, GetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([JI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3JI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jlong, GetLongArrayElements, ReleaseLongArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, SetLongArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([DI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3DI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([DI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3DI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, GetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([DI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3DI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jdouble, GetDoubleArrayElements, ReleaseDoubleArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, SetDoubleArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyUnaligned
 * Signature: ([FI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyUnaligned___3FI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAligned
 * Signature: ([FI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAligned___3FI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, GetFloatArrayRegion, SetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignSrc
 * Signature: ([FI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignSrc___3FI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_ALIGN_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, GetFloatArrayRegion);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpyAlignDst
 * Signature: ([FI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpyAlignDst___3FI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint length) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_ALIGN_IMPL(jniHandle, dstAddress, dstOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, srcAddress, srcOffset, jfloat, GetFloatArrayElements, ReleaseFloatArrayElements, length, SetFloatArrayRegion);
}

