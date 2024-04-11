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

#include "UnsafeMallocImpl.h"

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    malloc
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_malloc__I
  (JNIEnv * jniHandle, jclass jniClass, jint size) {
	return (jlong)UNSAFE_MALLOC_IMPL(size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    malloc
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_malloc__J
  (JNIEnv * jniHandle, jclass jniClass, jlong size) {
	return (jlong)UNSAFE_MALLOC_IMPL(size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    calloc
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_calloc__II
  (JNIEnv * jniHandle, jclass jniClass, jint num, jint size) {
	return (jlong)UNSAFE_CALLOC_IMPL(num, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    calloc
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_calloc__JJ
  (JNIEnv * jniHandle, jclass jniClass, jlong num, jlong size) {
	return (jlong)UNSAFE_CALLOC_IMPL(num, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    realloc
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_realloc__JI
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jint size) {
	return (jlong)UNSAFE_REALLOC_IMPL(address, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    realloc
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_realloc__JJ
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jlong size) {
	return (jlong)UNSAFE_REALLOC_IMPL(address, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_free
  (JNIEnv * jniHandle, jclass jniClass, jlong address) {
	UNSAFE_FREE_IMPL(address);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    mallocBuffer
 * Signature: (I)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_mallocBuffer__I
  (JNIEnv * jniHandle, jclass jniClass, jint size) {
	void* ret = UNSAFE_MALLOC_IMPL(size);
	if(!ret) {
		return NULL;
	}
	return (*jniHandle)->NewDirectByteBuffer(jniHandle, ret, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    mallocBuffer
 * Signature: (J)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_mallocBuffer__J
  (JNIEnv * jniHandle, jclass jniClass, jlong size) {
	void* ret = UNSAFE_MALLOC_IMPL(size);
	if(!ret) {
		return NULL;
	}
	return (*jniHandle)->NewDirectByteBuffer(jniHandle, ret, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    callocBuffer
 * Signature: (II)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_callocBuffer__II
  (JNIEnv * jniHandle, jclass jniClass, jint num, jint size) {
	void* ret = UNSAFE_CALLOC_IMPL(num, size);
	if(!ret) {
		return NULL;
	}
	return (*jniHandle)->NewDirectByteBuffer(jniHandle, ret, num * size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    callocBuffer
 * Signature: (JJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_callocBuffer__JJ
  (JNIEnv * jniHandle, jclass jniClass, jlong num, jlong size) {
	void* ret = UNSAFE_CALLOC_IMPL(num, size);
	if(!ret) {
		return NULL;
	}
	return (*jniHandle)->NewDirectByteBuffer(jniHandle, ret, num * size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    reallocBuffer
 * Signature: (JI)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_reallocBuffer__JI
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jint size) {
	void* ret = UNSAFE_REALLOC_IMPL(address, size);
	if(!ret) {
		return NULL;
	}
	return (*jniHandle)->NewDirectByteBuffer(jniHandle, ret, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    reallocBuffer
 * Signature: (JJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_reallocBuffer__JJ
  (JNIEnv * jniHandle, jclass jniClass, jlong address, jlong size) {
	void* ret = UNSAFE_REALLOC_IMPL(address, size);
	if(!ret) {
		return NULL;
	}
	return (*jniHandle)->NewDirectByteBuffer(jniHandle, ret, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    reallocBuffer
 * Signature: (Ljava/nio/Buffer;I)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_reallocBuffer__Ljava_nio_Buffer_2I
  (JNIEnv * jniHandle, jclass jniClass, jobject buffer, jint size) {
	void* srcBuffer = (*jniHandle)->GetDirectBufferAddress(jniHandle, buffer);
	if(srcBuffer == NULL) {
		unsafeThrowNotDirectBuffer(jniHandle);
		return NULL;
	}
	void* ret = UNSAFE_REALLOC_IMPL(srcBuffer, size);
	if(!ret) {
		return NULL;
	}
	return (*jniHandle)->NewDirectByteBuffer(jniHandle, ret, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    reallocBuffer
 * Signature: (Ljava/nio/Buffer;J)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_reallocBuffer__Ljava_nio_Buffer_2J
  (JNIEnv * jniHandle, jclass jniClass, jobject buffer, jlong size) {
	void* srcBuffer = (*jniHandle)->GetDirectBufferAddress(jniHandle, buffer);
	if(srcBuffer == NULL) {
		unsafeThrowNotDirectBuffer(jniHandle);
		return NULL;
	}
	void* ret = UNSAFE_REALLOC_IMPL(srcBuffer, size);
	if(!ret) {
		return NULL;
	}
	return (*jniHandle)->NewDirectByteBuffer(jniHandle, ret, size);
}

/*
 * Class:     net_lax1dude_unsafememcpy_UnsafeMalloc
 * Method:    freeBuffer
 * Signature: (Ljava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_unsafememcpy_UnsafeMalloc_freeBuffer
  (JNIEnv * jniHandle, jclass jniClass, jobject buffer) {
	void* srcBuffer = (*jniHandle)->GetDirectBufferAddress(jniHandle, buffer);
	if(srcBuffer == NULL) {
		unsafeThrowNotDirectBuffer(jniHandle);
		return;
	}
	UNSAFE_FREE_IMPL(srcBuffer);
}
