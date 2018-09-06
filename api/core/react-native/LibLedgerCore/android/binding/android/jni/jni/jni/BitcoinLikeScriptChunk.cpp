// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_script.djinni

#include "BitcoinLikeScriptChunk.hpp"  // my header
#include "BitcoinLikeOperator.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikeScriptChunk::BitcoinLikeScriptChunk() : ::djinni::JniInterface<::ledger::core::api::BitcoinLikeScriptChunk, BitcoinLikeScriptChunk>("BitcoinLikeScriptChunk$CppProxy") {}

BitcoinLikeScriptChunk::~BitcoinLikeScriptChunk() = default;


CJNIEXPORT void JNICALL Java_BitcoinLikeScriptChunk_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::BitcoinLikeScriptChunk>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_BitcoinLikeScriptChunk_00024CppProxy_native_1isOperator(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeScriptChunk>(nativeRef);
        auto r = ref->isOperator();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_BitcoinLikeScriptChunk_00024CppProxy_native_1isPushedData(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeScriptChunk>(nativeRef);
        auto r = ref->isPushedData();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_BitcoinLikeScriptChunk_00024CppProxy_native_1getOperator(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeScriptChunk>(nativeRef);
        auto r = ref->getOperator();
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni_generated::BitcoinLikeOperator>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jbyteArray JNICALL Java_BitcoinLikeScriptChunk_00024CppProxy_native_1getPushedData(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeScriptChunk>(nativeRef);
        auto r = ref->getPushedData();
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni::Binary>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_BitcoinLikeScriptChunk_00024CppProxy_native_1next(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeScriptChunk>(nativeRef);
        auto r = ref->next();
        return ::djinni::release(::djinni_generated::BitcoinLikeScriptChunk::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_BitcoinLikeScriptChunk_00024CppProxy_native_1hasNext(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeScriptChunk>(nativeRef);
        auto r = ref->hasNext();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated