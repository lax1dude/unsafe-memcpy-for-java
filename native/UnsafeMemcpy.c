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
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__JJJ
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jlong srcAddress, jlong byteLength) {
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
 * Signature: (Ljava/nio/Buffer;JJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2JJJ
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jlong dstOffset, jlong srcAddress, jlong byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BIJI
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BJJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BJJJ
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jlong dstOffset, jlong srcAddress, jlong byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SIJI
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SJJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SJJJ
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jlong dstOffset, jlong srcAddress, jlong byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CIJI
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CJJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CJJJ
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jlong dstOffset, jlong srcAddress, jlong byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([IIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3IIJI
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([IJJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3IJJJ
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jlong dstOffset, jlong srcAddress, jlong byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JIJI
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JJJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JJJJ
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jlong dstOffset, jlong srcAddress, jlong byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DIJI
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DJJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DJJJ
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jlong dstOffset, jlong srcAddress, jlong byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FIJI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FIJI
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jlong srcAddress, jint byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FJJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FJJJ
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jlong dstOffset, jlong srcAddress, jlong byteLength) {
	UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength);
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
 * Signature: (JLjava/nio/Buffer;JJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__JLjava_nio_Buffer_2JJ
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jobject srcAddress, jlong srcOffset, jlong byteLength) {
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
 * Signature: (Ljava/nio/Buffer;JLjava/nio/Buffer;JJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2JLjava_nio_Buffer_2JJ
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jlong dstOffset, jobject srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BJLjava/nio/Buffer;JJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BJLjava_nio_Buffer_2JJ
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jlong dstOffset, jobject srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SJLjava/nio/Buffer;JJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SJLjava_nio_Buffer_2JJ
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jlong dstOffset, jobject srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CJLjava/nio/Buffer;JJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CJLjava_nio_Buffer_2JJ
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jlong dstOffset, jobject srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([IILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3IILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([IJLjava/nio/Buffer;JJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3IJLjava_nio_Buffer_2JJ
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jlong dstOffset, jobject srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JJLjava/nio/Buffer;JJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JJLjava_nio_Buffer_2JJ
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jlong dstOffset, jobject srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DJLjava/nio/Buffer;JJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DJLjava_nio_Buffer_2JJ
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jlong dstOffset, jobject srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FILjava_nio_Buffer_2II
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jobject srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FJLjava/nio/Buffer;JJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FJLjava_nio_Buffer_2JJ
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jlong dstOffset, jobject srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3BII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[BJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3BJJ
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jbyteArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;I[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2I_3BII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;J[BJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2J_3BJJ
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jlong dstOffset, jbyteArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BJ[BJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BJ_3BJJ
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jlong dstOffset, jbyteArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SJ[BJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SJ_3BJJ
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jlong dstOffset, jbyteArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CJ[BJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CJ_3BJJ
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jlong dstOffset, jbyteArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([II[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3II_3BII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([IJ[BJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3IJ_3BJJ
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jlong dstOffset, jbyteArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JJ[BJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JJ_3BJJ
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jlong dstOffset, jbyteArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DJ[BJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DJ_3BJJ
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jlong dstOffset, jbyteArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FI[BII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FI_3BII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jbyteArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FJ[BJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FJ_3BJJ
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jlong dstOffset, jbyteArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3SII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[SJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3SJJ
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jshortArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;I[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2I_3SII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;J[SJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2J_3SJJ
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jlong dstOffset, jshortArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BJ[SJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BJ_3SJJ
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jlong dstOffset, jshortArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SJ[SJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SJ_3SJJ
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jlong dstOffset, jshortArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CJ[SJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CJ_3SJJ
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jlong dstOffset, jshortArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([II[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3II_3SII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([IJ[SJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3IJ_3SJJ
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jlong dstOffset, jshortArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JJ[SJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JJ_3SJJ
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jlong dstOffset, jshortArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DJ[SJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DJ_3SJJ
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jlong dstOffset, jshortArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FI[SII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FI_3SII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jshortArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FJ[SJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FJ_3SJJ
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jlong dstOffset, jshortArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3CII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[CJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3CJJ
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jcharArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;I[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2I_3CII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;J[CJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2J_3CJJ
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jlong dstOffset, jcharArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BJ[CJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BJ_3CJJ
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jlong dstOffset, jcharArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SJ[CJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SJ_3CJJ
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jlong dstOffset, jcharArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CJ[CJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CJ_3CJJ
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jlong dstOffset, jcharArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([II[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3II_3CII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([IJ[CJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3IJ_3CJJ
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jlong dstOffset, jcharArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JJ[CJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JJ_3CJJ
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jlong dstOffset, jcharArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DJ[CJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DJ_3CJJ
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jlong dstOffset, jcharArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FI[CII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FI_3CII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jcharArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FJ[CJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FJ_3CJJ
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jlong dstOffset, jcharArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3III
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[IJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3IJJ
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jintArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;I[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2I_3III
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;J[IJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2J_3IJJ
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jlong dstOffset, jintArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BI_3III
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BJ[IJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BJ_3IJJ
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jlong dstOffset, jintArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SI_3III
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SJ[IJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SJ_3IJJ
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jlong dstOffset, jintArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CI_3III
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CJ[IJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CJ_3IJJ
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jlong dstOffset, jintArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([II[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3II_3III
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([IJ[IJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3IJ_3IJJ
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jlong dstOffset, jintArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JI_3III
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JJ[IJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JJ_3IJJ
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jlong dstOffset, jintArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DI_3III
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DJ[IJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DJ_3IJJ
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jlong dstOffset, jintArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FI[III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FI_3III
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jintArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FJ[IJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FJ_3IJJ
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jlong dstOffset, jintArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3JII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[JJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3JJJ
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jlongArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;I[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2I_3JII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;J[JJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2J_3JJJ
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jlong dstOffset, jlongArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BJ[JJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BJ_3JJJ
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jlong dstOffset, jlongArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SJ[JJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SJ_3JJJ
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jlong dstOffset, jlongArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CJ[JJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CJ_3JJJ
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jlong dstOffset, jlongArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([II[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3II_3JII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([IJ[JJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3IJ_3JJJ
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jlong dstOffset, jlongArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JJ[JJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JJ_3JJJ
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jlong dstOffset, jlongArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DJ[JJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DJ_3JJJ
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jlong dstOffset, jlongArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FI[JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FI_3JII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jlongArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FJ[JJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FJ_3JJJ
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jlong dstOffset, jlongArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3DII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[DJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3DJJ
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jdoubleArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;I[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2I_3DII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;J[DJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2J_3DJJ
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jlong dstOffset, jdoubleArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BJ[DJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BJ_3DJJ
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jlong dstOffset, jdoubleArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SJ[DJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SJ_3DJJ
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jlong dstOffset, jdoubleArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CJ[DJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CJ_3DJJ
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jlong dstOffset, jdoubleArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([II[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3II_3DII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([IJ[DJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3IJ_3DJJ
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jlong dstOffset, jdoubleArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JJ[DJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JJ_3DJJ
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jlong dstOffset, jdoubleArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DJ[DJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DJ_3DJJ
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jlong dstOffset, jdoubleArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FI[DII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FI_3DII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jdoubleArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FJ[DJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FJ_3DJJ
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jlong dstOffset, jdoubleArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3FII
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (J[FJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__J_3FJJ
  (JNIEnv * jniHandle, jclass jniClass, jlong dstAddress, jfloatArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;I[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2I_3FII
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: (Ljava/nio/Buffer;J[FJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy__Ljava_nio_Buffer_2J_3FJJ
  (JNIEnv * jniHandle, jclass jniClass, jobject dstAddress, jlong dstOffset, jfloatArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([BJ[FJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3BJ_3FJJ
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray dstAddress, jlong dstOffset, jfloatArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([SJ[FJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3SJ_3FJJ
  (JNIEnv * jniHandle, jclass jniClass, jshortArray dstAddress, jlong dstOffset, jfloatArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([CJ[FJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3CJ_3FJJ
  (JNIEnv * jniHandle, jclass jniClass, jcharArray dstAddress, jlong dstOffset, jfloatArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([II[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3II_3FII
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([IJ[FJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3IJ_3FJJ
  (JNIEnv * jniHandle, jclass jniClass, jintArray dstAddress, jlong dstOffset, jfloatArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([JJ[FJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3JJ_3FJJ
  (JNIEnv * jniHandle, jclass jniClass, jlongArray dstAddress, jlong dstOffset, jfloatArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([DJ[FJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3DJ_3FJJ
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray dstAddress, jlong dstOffset, jfloatArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FI[FII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FI_3FII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jint dstOffset, jfloatArray srcAddress, jint srcOffset, jint byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemcpy
 * Method:    memcpy
 * Signature: ([FJ[FJJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemcpy_memcpy___3FJ_3FJJ
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray dstAddress, jlong dstOffset, jfloatArray srcAddress, jlong srcOffset, jlong byteLength) {
	UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength);
}

