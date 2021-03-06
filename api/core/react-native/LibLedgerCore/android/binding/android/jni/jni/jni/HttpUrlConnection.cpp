// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#include "HttpUrlConnection.hpp"  // my header
#include "HttpReadBodyResult.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

HttpUrlConnection::HttpUrlConnection() : ::djinni::JniInterface<::ledger::core::api::HttpUrlConnection, HttpUrlConnection>() {}

HttpUrlConnection::~HttpUrlConnection() = default;

HttpUrlConnection::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

HttpUrlConnection::JavaProxy::~JavaProxy() = default;

int32_t HttpUrlConnection::JavaProxy::getStatusCode() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::HttpUrlConnection>::get();
    auto jret = jniEnv->CallIntMethod(Handle::get().get(), data.method_getStatusCode);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::I32::toCpp(jniEnv, jret);
}
std::string HttpUrlConnection::JavaProxy::getStatusText() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::HttpUrlConnection>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_getStatusText);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}
std::unordered_map<std::string, std::string> HttpUrlConnection::JavaProxy::getHeaders() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::HttpUrlConnection>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getHeaders);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Map<::djinni::String, ::djinni::String>::toCpp(jniEnv, jret);
}
::ledger::core::api::HttpReadBodyResult HttpUrlConnection::JavaProxy::readBody() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::HttpUrlConnection>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_readBody);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::HttpReadBodyResult::toCpp(jniEnv, jret);
}

}  // namespace djinni_generated
