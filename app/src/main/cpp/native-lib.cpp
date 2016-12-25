#include <jni.h>
#include <string>

extern "C"

jstring
Java_com_anver_keyborad_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /*this*/ ) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());

}

jstring
Java_com_anver_keyborad_MainActivity_getStringFromJNI(
    JNIEnv* env,
    jobject ){
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

jstring charlist;
void
Java_com_anver_keyborad_MainActivity_putCharToJNI(
    JNIEnv* env,
    jobject ,
    jchar cha){

 }
