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

#include "utils.h"

#define UNSAFE_ARRAYS_GET_ELEMENTS_IMPL(jniHandle, array, elementType, getElementsFunction)\
	elementType* srcArray = (*jniHandle)->getElementsFunction(jniHandle, array, NULL);\
	if(!srcArray) {\
		unsafeThrowOutOfMemory(jniHandle);\
		return 0;\
	}\
	return (jlong)srcArray;\

#define UNSAFE_ARRAYS_GET_ELEMENTS_IMPL_IS_COPY(jniHandle, array, elementType, getElementsFunction, isCopy)\
	jboolean wasCopied;\
	elementType* srcArray = (*jniHandle)->getElementsFunction(jniHandle, array, NULL);\
	if(isCopy) {\
		(*jniHandle)->SetBooleanArrayRegion(jniHandle, isCopy, 0, 1, &wasCopied);\
	}\
	if(!srcArray) {\
		unsafeThrowOutOfMemory(jniHandle);\
		return 0;\
	}\
	return (jlong)srcArray;\

#define UNSAFE_ARRAYS_RELEASE_ELEMENTS_IMPL(jniHandle, array, ptr, elementType, releaseElementsFunction, mode)\
	(*jniHandle)->releaseElementsFunction(jniHandle, array, (elementType*)ptr, mode);
