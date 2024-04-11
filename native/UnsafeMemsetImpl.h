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
#include <stdlib.h>
#include <stdint.h>

#include "utils.h"

#define UNSAFE_MEMSET_IMPL(address, value, byteLength)\
	memset((void*)(address), (int)(value), (size_t)(byteLength));

#define UNSAFE_MEMSET_BUFFER_IMPL(jniHandle, address, offset, value, byteLength)\
	uint64_t dstBuffer = (uint64_t)(*jniHandle)->GetDirectBufferAddress(jniHandle, address);\
	if(!dstBuffer) {\
		unsafeThrowNotDirectBuffer(jniHandle);\
		return;\
	}\
	UNSAFE_MEMSET_IMPL(dstBuffer + offset, value, byteLength);

#define UNSAFE_MEMSET_ARRAY_IMPL(jniHandle, address, offset, value, byteLength)\
	uint64_t dstArray = (uint64_t)(*jniHandle)->GetPrimitiveArrayCritical(jniHandle, address, NULL);\
	if(!dstArray) {\
		unsafeThrowOutOfMemory(jniHandle);\
		return;\
	}\
	UNSAFE_MEMSET_IMPL(dstArray + offset, value, byteLength);\
	(*jniHandle)->ReleasePrimitiveArrayCritical(jniHandle, address, (void*)dstArray, JNI_COMMIT);
