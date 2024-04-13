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

public class UnsafeUtils {

	private static boolean hasLoadedNatives = false;

	static {
		loadNatives();
	}

	public static void loadNatives() {
		if(!hasLoadedNatives) {
			hasLoadedNatives = true;
			if(System.getProperty("os.name").toLowerCase().contains("windows")) {
				System.loadLibrary("UnsafeMemcpy");
			}else {
				System.loadLibrary("unsafememcpy");
			}
			int major = getVersionMajor();
			int minor = getVersionMinor();
			if(major != 1 || minor < 0) {
				throw new UnsatisfiedLinkError("Invalid UnsafeMemcpy native library version: " + major + "." + minor + " (expected: 1.0)");
			}
		}
	}

	public static native int getVersionMajor();

	public static native int getVersionMinor();

	public static native ByteBuffer makeDirectBuffer(long address, int size);

	public static native ByteBuffer makeDirectBuffer(long address, long size);

	public static native long getAddress(Buffer buffer);

	public static native byte getMemByte(long address);

	public static native short getMemShort(long address);

	public static native char getMemChar(long address);

	public static native int getMemInt(long address);

	public static native long getMemLong(long address);

	public static native double getMemDouble(long address);

	public static native float getMemFloat(long address);

	public static native void setMemByte(long address, byte value);

	public static native void setMemShort(long address, short value);

	public static native void setMemChar(long address, char value);

	public static native void setMemInt(long address, int value);

	public static native void setMemLong(long address, long value);

	public static native void setMemDouble(long address, double value);

	public static native void setMemFloat(long address, float value);

}
