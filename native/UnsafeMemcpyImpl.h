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

#pragma once

#include <jni.h>
#include <string.h>
#include <stdint.h>

#include "utils.h"

#define UNSAFE_MEMCPY_IMPL(dst, src, len) memcpy((void*)(dst), (const void*)(src), (size_t)(len))

#define UNSAFE_MEMCPY_ARRAY_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength)\
	uint64_t srcArray = (uint64_t)(*jniHandle)->GetPrimitiveArrayCritical(jniHandle, srcAddress, NULL);\
	if(!srcArray) {\
		unsafeThrowOutOfMemory(jniHandle);\
		return;\
	}\
	UNSAFE_MEMCPY_IMPL(dstAddress, srcArray + srcOffset, byteLength);\
	(*jniHandle)->ReleasePrimitiveArrayCritical(jniHandle, srcAddress, (void*)srcArray, JNI_ABORT);

#define UNSAFE_MEMCPY_BUFFER_TO_NATIVE_IMPL(jniHandle, dstAddress, srcAddress, srcOffset, byteLength)\
	uint64_t srcBuffer = (uint64_t)(*jniHandle)->GetDirectBufferAddress(jniHandle, srcAddress);\
	if(!srcBuffer) {\
		unsafeThrowNotDirectBuffer(jniHandle);\
		return;\
	}\
	UNSAFE_MEMCPY_IMPL(dstAddress, srcBuffer + srcOffset, byteLength);

#define UNSAFE_MEMCPY_NATIVE_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength)\
	uint64_t dstBuffer = (uint64_t)(*jniHandle)->GetDirectBufferAddress(jniHandle, dstAddress);\
	if(!dstBuffer) {\
		unsafeThrowNotDirectBuffer(jniHandle);\
		return;\
	}\
	UNSAFE_MEMCPY_IMPL(dstBuffer + dstOffset, srcAddress, byteLength);

#define UNSAFE_MEMCPY_BUFFER_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength)\
	uint64_t dstBuffer = (uint64_t)(*jniHandle)->GetDirectBufferAddress(jniHandle, dstAddress);\
	if(!dstBuffer) {\
		unsafeThrowNotDirectBuffer(jniHandle);\
		return;\
	}\
	uint64_t srcBuffer = (uint64_t)(*jniHandle)->GetDirectBufferAddress(jniHandle, srcAddress);\
	if(!srcBuffer) {\
		unsafeThrowNotDirectBuffer(jniHandle);\
		return;\
	}\
	UNSAFE_MEMCPY_IMPL(dstBuffer + dstOffset, srcBuffer + srcOffset, byteLength);

#define UNSAFE_MEMCPY_ARRAY_TO_BUFFER_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength)\
	uint64_t dstBuffer = (uint64_t)(*jniHandle)->GetDirectBufferAddress(jniHandle, dstAddress);\
	if(!dstBuffer) {\
		unsafeThrowNotDirectBuffer(jniHandle);\
		return;\
	}\
	uint64_t srcArray = (uint64_t)(*jniHandle)->GetPrimitiveArrayCritical(jniHandle, srcAddress, NULL);\
	if(!srcArray) {\
		unsafeThrowOutOfMemory(jniHandle);\
		return;\
	}\
	UNSAFE_MEMCPY_IMPL(dstBuffer + dstOffset, srcArray + srcOffset, byteLength);\
	(*jniHandle)->ReleasePrimitiveArrayCritical(jniHandle, srcAddress, (void*)srcArray, JNI_ABORT);

#define UNSAFE_MEMCPY_NATIVE_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, byteLength)\
	uint64_t dstArray = (uint64_t)(*jniHandle)->GetPrimitiveArrayCritical(jniHandle, dstAddress, NULL);\
	if(!dstArray) {\
		unsafeThrowOutOfMemory(jniHandle);\
		return;\
	}\
	UNSAFE_MEMCPY_IMPL(dstArray + dstOffset, srcAddress, byteLength);\
	(*jniHandle)->ReleasePrimitiveArrayCritical(jniHandle, dstAddress, (void*)dstArray, JNI_COMMIT);

#define UNSAFE_MEMCPY_BUFFER_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength)\
	uint64_t srcBuffer = (uint64_t)(*jniHandle)->GetDirectBufferAddress(jniHandle, srcAddress);\
	if(!srcBuffer) {\
		unsafeThrowNotDirectBuffer(jniHandle);\
		return;\
	}\
	uint64_t dstArray = (uint64_t)(*jniHandle)->GetPrimitiveArrayCritical(jniHandle, dstAddress, NULL);\
	if(!dstArray) {\
		unsafeThrowOutOfMemory(jniHandle);\
		return;\
	}\
	UNSAFE_MEMCPY_IMPL(dstArray + dstOffset, srcBuffer + srcOffset, byteLength);\
	(*jniHandle)->ReleasePrimitiveArrayCritical(jniHandle, dstAddress, (void*)dstArray, JNI_COMMIT);

#define UNSAFE_MEMCPY_ARRAY_TO_ARRAY_IMPL(jniHandle, dstAddress, dstOffset, srcAddress, srcOffset, byteLength)\
	uint64_t srcArray = (uint64_t)(*jniHandle)->GetPrimitiveArrayCritical(jniHandle, srcAddress, NULL);\
	if(!srcArray) {\
		unsafeThrowOutOfMemory(jniHandle);\
		return;\
	}\
	uint64_t dstArray = (uint64_t)(*jniHandle)->GetPrimitiveArrayCritical(jniHandle, dstAddress, NULL);\
	if(!dstArray) {\
		(*jniHandle)->ReleasePrimitiveArrayCritical(jniHandle, srcAddress, (void*)srcArray, JNI_ABORT);\
		unsafeThrowOutOfMemory(jniHandle);\
		return;\
	}\
	UNSAFE_MEMCPY_IMPL(dstArray + dstOffset, srcArray + srcOffset, byteLength);\
	(*jniHandle)->ReleasePrimitiveArrayCritical(jniHandle, dstAddress, (void*)dstArray, JNI_COMMIT);\
	(*jniHandle)->ReleasePrimitiveArrayCritical(jniHandle, srcAddress, (void*)srcArray, JNI_ABORT);
