// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#include "ConfigurationDefaults.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

ConfigurationDefaults::ConfigurationDefaults() : ::djinni::JniInterface<::ledger::core::api::ConfigurationDefaults, ConfigurationDefaults>("ConfigurationDefaults$CppProxy") {}

ConfigurationDefaults::~ConfigurationDefaults() = default;


CJNIEXPORT void JNICALL Java_ConfigurationDefaults_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::ConfigurationDefaults>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
