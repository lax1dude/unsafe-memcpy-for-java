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

public class UnsafeMemcpy {

	static {
		UnsafeUtils.loadNatives();
	}

	public static native void memcpy(long dstAddress, long srcAddress, int byteLength);

	public static native void memcpy(long dstAddress, long srcAddress, long byteLength);

	public static native void memcpy(Buffer dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpy(Buffer dstAddress, long dstOffset, long srcAddress, long byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpy(byte[] dstAddress, long dstOffset, long srcAddress, long byteLength);

	public static native void memcpy(short[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpy(short[] dstAddress, long dstOffset, long srcAddress, long byteLength);

	public static native void memcpy(char[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpy(char[] dstAddress, long dstOffset, long srcAddress, long byteLength);

	public static native void memcpy(int[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpy(int[] dstAddress, long dstOffset, long srcAddress, long byteLength);

	public static native void memcpy(long[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpy(long[] dstAddress, long dstOffset, long srcAddress, long byteLength);

	public static native void memcpy(double[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpy(double[] dstAddress, long dstOffset, long srcAddress, long byteLength);

	public static native void memcpy(float[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpy(float[] dstAddress, long dstOffset, long srcAddress, long byteLength);

	public static native void memcpy(long dstAddress, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long dstAddress, Buffer srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(Buffer dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(Buffer dstAddress, long dstOffset, Buffer srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(byte[] dstAddress, long dstOffset, Buffer srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(short[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(short[] dstAddress, long dstOffset, Buffer srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(char[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(char[] dstAddress, long dstOffset, Buffer srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(int[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(int[] dstAddress, long dstOffset, Buffer srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long[] dstAddress, long dstOffset, Buffer srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(double[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(double[] dstAddress, long dstOffset, Buffer srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(float[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(float[] dstAddress, long dstOffset, Buffer srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long dstAddress, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long dstAddress, byte[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(Buffer dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(Buffer dstAddress, long dstOffset, byte[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(byte[] dstAddress, long dstOffset, byte[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(short[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(short[] dstAddress, long dstOffset, byte[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(char[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(char[] dstAddress, long dstOffset, byte[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(int[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(int[] dstAddress, long dstOffset, byte[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long[] dstAddress, long dstOffset, byte[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(double[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(double[] dstAddress, long dstOffset, byte[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(float[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(float[] dstAddress, long dstOffset, byte[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long dstAddress, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long dstAddress, short[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(Buffer dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(Buffer dstAddress, long dstOffset, short[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(byte[] dstAddress, long dstOffset, short[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(short[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(short[] dstAddress, long dstOffset, short[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(char[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(char[] dstAddress, long dstOffset, short[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(int[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(int[] dstAddress, long dstOffset, short[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long[] dstAddress, long dstOffset, short[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(double[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(double[] dstAddress, long dstOffset, short[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(float[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(float[] dstAddress, long dstOffset, short[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long dstAddress, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long dstAddress, char[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(Buffer dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(Buffer dstAddress, long dstOffset, char[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(byte[] dstAddress, long dstOffset, char[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(short[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(short[] dstAddress, long dstOffset, char[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(char[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(char[] dstAddress, long dstOffset, char[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(int[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(int[] dstAddress, long dstOffset, char[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long[] dstAddress, long dstOffset, char[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(double[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(double[] dstAddress, long dstOffset, char[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(float[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(float[] dstAddress, long dstOffset, char[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long dstAddress, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long dstAddress, int[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(Buffer dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(Buffer dstAddress, long dstOffset, int[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(byte[] dstAddress, long dstOffset, int[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(short[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(short[] dstAddress, long dstOffset, int[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(char[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(char[] dstAddress, long dstOffset, int[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(int[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(int[] dstAddress, long dstOffset, int[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long[] dstAddress, long dstOffset, int[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(double[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(double[] dstAddress, long dstOffset, int[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(float[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(float[] dstAddress, long dstOffset, int[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long dstAddress, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long dstAddress, long[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(Buffer dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(Buffer dstAddress, long dstOffset, long[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(byte[] dstAddress, long dstOffset, long[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(short[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(short[] dstAddress, long dstOffset, long[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(char[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(char[] dstAddress, long dstOffset, long[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(int[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(int[] dstAddress, long dstOffset, long[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long[] dstAddress, long dstOffset, long[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(double[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(double[] dstAddress, long dstOffset, long[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(float[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(float[] dstAddress, long dstOffset, long[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long dstAddress, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long dstAddress, double[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(Buffer dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(Buffer dstAddress, long dstOffset, double[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(byte[] dstAddress, long dstOffset, double[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(short[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(short[] dstAddress, long dstOffset, double[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(char[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(char[] dstAddress, long dstOffset, double[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(int[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(int[] dstAddress, long dstOffset, double[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long[] dstAddress, long dstOffset, double[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(double[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(double[] dstAddress, long dstOffset, double[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(float[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(float[] dstAddress, long dstOffset, double[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long dstAddress, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long dstAddress, float[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(Buffer dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(Buffer dstAddress, long dstOffset, float[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(byte[] dstAddress, long dstOffset, float[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(short[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(short[] dstAddress, long dstOffset, float[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(char[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(char[] dstAddress, long dstOffset, float[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(int[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(int[] dstAddress, long dstOffset, float[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(long[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(long[] dstAddress, long dstOffset, float[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(double[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(double[] dstAddress, long dstOffset, float[] srcAddress, long srcOffset, long byteLength);

	public static native void memcpy(float[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(float[] dstAddress, long dstOffset, float[] srcAddress, long srcOffset, long byteLength);

}
