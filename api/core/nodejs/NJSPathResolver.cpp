// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from path_resolver.djinni

#include "NJSPathResolver.hpp"

using namespace v8;
using namespace node;
using namespace std;

std::string NJSPathResolver::resolveDatabasePath(const std::string & path)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = Nan::New<String>(path).ToLocalChecked();
    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSPathResolver::resolveDatabasePath fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("resolveDatabasePath").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_resolveDatabasePath = Nan::CallAsFunction(calling_funtion->ToObject(),handle,1,args);
    if(result_resolveDatabasePath.IsEmpty())
    {
        Nan::ThrowError("NJSPathResolver::resolveDatabasePath call failed");
    }
    auto checkedResult_resolveDatabasePath = result_resolveDatabasePath.ToLocalChecked();
    String::Utf8Value string_fResult_resolveDatabasePath(checkedResult_resolveDatabasePath->ToString());
    auto fResult_resolveDatabasePath = std::string(*string_fResult_resolveDatabasePath);
    return fResult_resolveDatabasePath;
}

std::string NJSPathResolver::resolveLogFilePath(const std::string & path)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = Nan::New<String>(path).ToLocalChecked();
    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSPathResolver::resolveLogFilePath fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("resolveLogFilePath").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_resolveLogFilePath = Nan::CallAsFunction(calling_funtion->ToObject(),handle,1,args);
    if(result_resolveLogFilePath.IsEmpty())
    {
        Nan::ThrowError("NJSPathResolver::resolveLogFilePath call failed");
    }
    auto checkedResult_resolveLogFilePath = result_resolveLogFilePath.ToLocalChecked();
    String::Utf8Value string_fResult_resolveLogFilePath(checkedResult_resolveLogFilePath->ToString());
    auto fResult_resolveLogFilePath = std::string(*string_fResult_resolveLogFilePath);
    return fResult_resolveLogFilePath;
}

std::string NJSPathResolver::resolvePreferencesPath(const std::string & path)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = Nan::New<String>(path).ToLocalChecked();
    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSPathResolver::resolvePreferencesPath fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("resolvePreferencesPath").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_resolvePreferencesPath = Nan::CallAsFunction(calling_funtion->ToObject(),handle,1,args);
    if(result_resolvePreferencesPath.IsEmpty())
    {
        Nan::ThrowError("NJSPathResolver::resolvePreferencesPath call failed");
    }
    auto checkedResult_resolvePreferencesPath = result_resolvePreferencesPath.ToLocalChecked();
    String::Utf8Value string_fResult_resolvePreferencesPath(checkedResult_resolvePreferencesPath->ToString());
    auto fResult_resolvePreferencesPath = std::string(*string_fResult_resolvePreferencesPath);
    return fResult_resolvePreferencesPath;
}

NAN_METHOD(NJSPathResolver::addRef) {

    NJSPathResolver *obj = Nan::ObjectWrap::Unwrap<NJSPathResolver>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSPathResolver::removeRef) {

    NJSPathResolver *obj = Nan::ObjectWrap::Unwrap<NJSPathResolver>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSPathResolver::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSPathResolver function can only be called as constructor (use New)");
    }

    NJSPathResolver *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSPathResolver(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSPathResolver::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSPathResolver::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSPathResolver::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSPathResolver").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSPathResolver").ToLocalChecked(), func_template->GetFunction());
}
