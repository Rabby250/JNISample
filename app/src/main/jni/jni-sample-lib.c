#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_rabby250_jnisample_MainActivity_getMsgFromJni
        (JNIEnv *env, jobject instance) {
    return (*env)->NewStringUTF(env, "JNI connection success");
}