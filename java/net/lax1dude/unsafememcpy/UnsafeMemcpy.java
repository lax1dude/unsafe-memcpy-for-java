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

	public static native void memcpy(Buffer dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpyUnaligned(short[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpyAlignDst(short[] dstAddress, int dstOffset, long srcAddress, int length);

	public static native void memcpyUnaligned(char[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpyAlignDst(char[] dstAddress, int dstOffset, long srcAddress, int length);

	public static native void memcpyUnaligned(int[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpyAlignDst(int[] dstAddress, int dstOffset, long srcAddress, int length);

	public static native void memcpyUnaligned(long[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpyAlignDst(long[] dstAddress, int dstOffset, long srcAddress, int length);

	public static native void memcpyUnaligned(double[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpyAlignDst(double[] dstAddress, int dstOffset, long srcAddress, int length);

	public static native void memcpyUnaligned(float[] dstAddress, int dstOffset, long srcAddress, int byteLength);

	public static native void memcpyAlignDst(float[] dstAddress, int dstOffset, long srcAddress, int length);

	public static native void memcpy(long dstAddress, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(Buffer dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpyUnaligned(short[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(short[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(char[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(char[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(int[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(int[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(long[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(double[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(double[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(float[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(float[] dstAddress, int dstOffset, Buffer srcAddress, int srcOffset, int length);

	public static native void memcpy(long dstAddress, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(Buffer dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpy(byte[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyUnaligned(short[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(short[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(char[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(char[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(int[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(int[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(long[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(double[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(double[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(float[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignDst(float[] dstAddress, int dstOffset, byte[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long dstAddress, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(long dstAddress, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(Buffer dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(Buffer dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(byte[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(byte[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(short[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAligned(short[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignSrc(short[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(short[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(char[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(char[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(char[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(int[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(int[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(int[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(long[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(long[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(double[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(double[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(double[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(float[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(float[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(float[] dstAddress, int dstOffset, short[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long dstAddress, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(long dstAddress, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(Buffer dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(Buffer dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(byte[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(byte[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(short[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(short[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(short[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(char[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAligned(char[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignSrc(char[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(char[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(int[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(int[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(int[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(long[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(long[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(double[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(double[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(double[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(float[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(float[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(float[] dstAddress, int dstOffset, char[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long dstAddress, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(long dstAddress, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(Buffer dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(Buffer dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(byte[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(byte[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(short[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(short[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(short[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(char[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(char[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(char[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(int[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAligned(int[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignSrc(int[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(int[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(long[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(long[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(double[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(double[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(double[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(float[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(float[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(float[] dstAddress, int dstOffset, int[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long dstAddress, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(long dstAddress, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(Buffer dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(Buffer dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(byte[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(byte[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(short[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(short[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(short[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(char[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(char[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(char[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(int[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(int[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(int[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAligned(long[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignSrc(long[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(long[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(double[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(double[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(double[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(float[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(float[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(float[] dstAddress, int dstOffset, long[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long dstAddress, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(long dstAddress, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(Buffer dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(Buffer dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(byte[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(byte[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(short[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(short[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(short[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(char[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(char[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(char[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(int[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(int[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(int[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(long[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(long[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(double[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAligned(double[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignSrc(double[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(double[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(float[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(float[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(float[] dstAddress, int dstOffset, double[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long dstAddress, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(long dstAddress, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(Buffer dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(Buffer dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(byte[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(byte[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(short[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(short[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(short[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(char[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(char[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(char[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(int[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(int[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(int[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(long[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(long[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(long[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(double[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAlignSrc(double[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(double[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyUnaligned(float[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int byteLength);

	public static native void memcpyAligned(float[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignSrc(float[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

	public static native void memcpyAlignDst(float[] dstAddress, int dstOffset, float[] srcAddress, int srcOffset, int length);

}
