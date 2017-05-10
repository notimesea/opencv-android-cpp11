#include <jni.h>
#include <string>

#include <opencv2/opencv.hpp>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_evgeny_testapp_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = std::to_string(17.7);

    return env->NewStringUTF(hello.c_str());
}
