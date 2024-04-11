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

public class UnsafeMemset {

	static {
		UnsafeUtils.loadNatives();
	}

	public static native void memset(long address, int value, int byteLength);

	public static native void memset(long address, int value, long byteLength);

	public static native void memset(Buffer address, int offset, int value, int byteLength);

	public static native void memset(Buffer address, long offset, int value, long byteLength);

	public static native void memset(byte[] address, int offset, int value, int byteLength);

	public static native void memset(byte[] address, long offset, int value, long byteLength);

	public static native void memset(short[] address, int offset, int value, int byteLength);

	public static native void memset(short[] address, long offset, int value, long byteLength);

	public static native void memset(char[] address, int offset, int value, int byteLength);

	public static native void memset(char[] address, long offset, int value, long byteLength);

	public static native void memset(int[] address, int offset, int value, int byteLength);

	public static native void memset(int[] address, long offset, int value, long byteLength);

	public static native void memset(long[] address, int offset, int value, int byteLength);

	public static native void memset(long[] address, long offset, int value, long byteLength);

	public static native void memset(double[] address, int offset, int value, int byteLength);

	public static native void memset(double[] address, long offset, int value, long byteLength);

	public static native void memset(float[] address, int offset, int value, int byteLength);

	public static native void memset(float[] address, long offset, int value, long byteLength);

}
