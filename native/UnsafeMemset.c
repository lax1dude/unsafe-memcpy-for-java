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

#include "UnsafeMemsetImpl.h"

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset__JII
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jint value, jint byteLength) {
	UNSAFE_MEMSET_IMPL(address, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset__JIJ
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jint value, jlong byteLength) {
	UNSAFE_MEMSET_IMPL(address, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: (Ljava/nio/Buffer;III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset__Ljava_nio_Buffer_2III
  (JNIEnv * jniHandle, jclass jniClass, jobject address, jint offset, jint value, jint byteLength) {
	UNSAFE_MEMSET_BUFFER_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: (Ljava/nio/Buffer;JIJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset__Ljava_nio_Buffer_2JIJ
  (JNIEnv * jniHandle, jclass jniClass, jobject address, jlong offset, jint value, jlong byteLength) {
	UNSAFE_MEMSET_BUFFER_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([BIII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3BIII
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray address, jint offset, jint value, jint byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([BJIJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3BJIJ
  (JNIEnv * jniHandle, jclass jniClass, jbyteArray address, jlong offset, jint value, jlong byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([SIII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3SIII
  (JNIEnv * jniHandle, jclass jniClass, jshortArray address, jint offset, jint value, jint byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([SJIJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3SJIJ
  (JNIEnv * jniHandle, jclass jniClass, jshortArray address, jlong offset, jint value, jlong byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([CIII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3CIII
  (JNIEnv * jniHandle, jclass jniClass, jcharArray address, jint offset, jint value, jint byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([CJIJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3CJIJ
  (JNIEnv * jniHandle, jclass jniClass, jcharArray address, jlong offset, jint value, jlong byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([IIII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3IIII
  (JNIEnv * jniHandle, jclass jniClass, jintArray address, jint offset, jint value, jint byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([IJIJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3IJIJ
  (JNIEnv * jniHandle, jclass jniClass, jintArray address, jlong offset, jint value, jlong byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([JIII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3JIII
  (JNIEnv * jniHandle, jclass jniClass, jlongArray address, jint offset, jint value, jint byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([JJIJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3JJIJ
  (JNIEnv * jniHandle, jclass jniClass, jlongArray address, jlong offset, jint value, jlong byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([DIII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3DIII
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray address, jint offset, jint value, jint byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([DJIJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3DJIJ
  (JNIEnv * jniHandle, jclass jniClass, jdoubleArray address, jlong offset, jint value, jlong byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([FIII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3FIII
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray address, jint offset, jint value, jint byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMemset
 * Method:    memset
 * Signature: ([FJIJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMemset_memset___3FJIJ
  (JNIEnv * jniHandle, jclass jniClass, jfloatArray address, jlong offset, jint value, jlong byteLength) {
	UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength);
}

