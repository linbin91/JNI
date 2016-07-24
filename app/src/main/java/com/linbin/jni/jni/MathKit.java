package com.linbin.jni.jni;

/**
 * Created by Administrator on 2016/7/23.
 */
public class MathKit {
    public static native int square(int num);

    static {
        System.loadLibrary("JniDemo");
    }
}
