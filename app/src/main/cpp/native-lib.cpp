#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_dmrik_testing_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
