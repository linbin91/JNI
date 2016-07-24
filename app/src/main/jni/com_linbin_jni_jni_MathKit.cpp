//
// Created by Administrator on 2016/7/23.
//

#include <com_linbin_jni_jni_MathKit.h>
#include <android/log.h>
#include <stdio.h>

#define LOG_TAG "hellondk"
#define LOGI(...)  __android_log_print (ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)

#define LOGE(...)  __android_log_print (ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
JNIEXPORT jint JNICALL Java_com_linbin_jni_jni_MathKit_square
  (JNIEnv *, jclass, jint num){
  int ret = num * 3;
  LOGI("ret=%d",ret);
LOGE("num=%d",num);
return ret;
  }