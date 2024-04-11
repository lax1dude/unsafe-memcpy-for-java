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

#include <jni.h>

#include "utils.h"

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    getVersionMajor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_getVersionMajor
  (JNIEnv * jniHandle, jclass jniClass) {
	return NATIVE_LIBRARY_VERSION_MAJOR;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    getVersionMinor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_getVersionMinor
  (JNIEnv * jniHandle, jclass jniClass) {
	return NATIVE_LIBRARY_VERSION_MINOR;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    makeDirectBuffer
 * Signature: (JI)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_makeDirectBuffer__JI
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jint size) {
	return (*jniHandle)->NewDirectByteBuffer(jniHandle, (void*)address, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    makeDirectBuffer
 * Signature: (JJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_makeDirectBuffer__JJ
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jlong size) {
	return (*jniHandle)->NewDirectByteBuffer(jniHandle, (void*)address, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    getAddress
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_getAddress
  (JNIEnv * jniHandle, jclass jniClass, jobject buffer) {
	void* srcBuffer = (*jniHandle)->GetDirectBufferAddress(jniHandle, buffer);
	if(srcBuffer == NULL) {
		unsafeThrowNotDirectBuffer(jniHandle);
		return 0;
	}
	return (jlong)srcBuffer;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    getMemByte
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_getMemByte
  (JNIEnv * jniHandle, jclass jniClass, jlong address) {
	return *(jbyte*)address;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    getMemShort
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_getMemShort
  (JNIEnv * jniHandle, jclass jniClass, jlong address) {
	return *(jshort*)address;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    getMemChar
 * Signature: (J)C
 */
JNIEXPORT jchar JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_getMemChar
  (JNIEnv * jniHandle, jclass jniClass, jlong address) {
	return *(jchar*)address;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    getMemInt
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_getMemInt
  (JNIEnv * jniHandle, jclass jniClass, jlong address) {
	return *(jint*)address;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    getMemLong
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_getMemLong
  (JNIEnv * jniHandle, jclass jniClass, jlong address) {
	return *(jlong*)address;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    getMemDouble
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_getMemDouble
  (JNIEnv * jniHandle, jclass jniClass, jlong address) {
	return *(jdouble*)address;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    getMemFloat
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_getMemFloat
  (JNIEnv * jniHandle, jclass jniClass, jlong address) {
	return *(jfloat*)address;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    setMemByte
 * Signature: (JB)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_setMemByte
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jbyte value) {
	*(jbyte*)address = value;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    setMemShort
 * Signature: (JS)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_setMemShort
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jshort value) {
	*(jshort*)address = value;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    setMemChar
 * Signature: (JC)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_setMemChar
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jchar value) {
	*(jchar*)address = value;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    setMemInt
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_setMemInt
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jint value) {
	*(jint*)address = value;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    setMemLong
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_setMemLong
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jlong value) {
	*(jlong*)address = value;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    setMemDouble
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_setMemDouble
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jdouble value) {
	*(jdouble*)address = value;
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeUtils
 * Method:    setMemFloat
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeUtils_setMemFloat
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jfloat value) {
	*(jfloat*)address = value;
}
