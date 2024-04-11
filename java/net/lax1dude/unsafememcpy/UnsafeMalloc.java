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

package net.lax1dude.unsafememcpy;

import java.nio.Buffer;
import java.nio.ByteBuffer;

public class UnsafeMalloc {

	static {
		UnsafeUtils.loadNatives();
	}

	public static native long malloc(int size);

	public static native long malloc(long size);

	public static native long calloc(int num, int size);

	public static native long calloc(long num, long size);

	public static native long realloc(long oldPtr, int size);

	public static native long realloc(long oldPtr, long size);

	public static native void free(long ptr);

	public static native ByteBuffer mallocBuffer(int size);

	public static native ByteBuffer mallocBuffer(long size);

	public static native ByteBuffer callocBuffer(int num, int size);

	public static native ByteBuffer callocBuffer(long num, long size);

	public static native ByteBuffer reallocBuffer(long oldPtr, int size);

	public static native ByteBuffer reallocBuffer(long oldPtr, long size);

	public static native ByteBuffer reallocBuffer(Buffer oldBuffer, int size);

	public static native ByteBuffer reallocBuffer(Buffer oldBuffer, long size);

	public static native void freeBuffer(Buffer buffer);

}
