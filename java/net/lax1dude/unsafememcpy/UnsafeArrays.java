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

public class UnsafeArrays {

	static {
		UnsafeUtils.loadNatives();
	}

	public static final int JNI_COMMIT = 1;
	public static final int JNI_ABORT = 2;

	public static native long getBooleanArrayElements(boolean[] array);

	public static native long getByteArrayElements(byte[] array);

	public static native long getCharArrayElements(char[] array);

	public static native long getShortArrayElements(short[] array);

	public static native long getIntArrayElements(int[] array);

	public static native long getLongArrayElements(long[] array);

	public static native long getFloatArrayElements(float[] array);

	public static native long getDoubleArrayElements(double[] array);

	public static native long getBooleanArrayElements(boolean[] array, boolean[] isCopy);

	public static native long getByteArrayElements(byte[] array, boolean[] isCopy);

	public static native long getCharArrayElements(char[] array, boolean[] isCopy);

	public static native long getShortArrayElements(short[] array, boolean[] isCopy);

	public static native long getIntArrayElements(int[] array, boolean[] isCopy);

	public static native long getLongArrayElements(long[] array, boolean[] isCopy);

	public static native long getFloatArrayElements(float[] array, boolean[] isCopy);

	public static native long getDoubleArrayElements(double[] array, boolean[] isCopy);

	public static native void releaseBooleanArrayElements(boolean[] array, long ptr, int mode);

	public static native void releaseByteArrayElements(byte[] array, long ptr, int mode);

	public static native void releaseCharArrayElements(char[] array, long ptr, int mode);

	public static native void releaseShortArrayElements(short[] array, long ptr, int mode);

	public static native void releaseIntArrayElements(int[] array, long ptr, int mode);

	public static native void releaseLongArrayElements(long[] array, long ptr, int mode);

	public static native void releaseFloatArrayElements(float[] array, long ptr, int mode);

	public static native void releaseDoubleArrayElements(double[] array, long ptr, int mode);

}