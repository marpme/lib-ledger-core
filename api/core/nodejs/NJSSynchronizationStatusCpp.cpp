// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "NJSSynchronizationStatusCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSSynchronizationStatus::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSSynchronizationStatus function can only be called as constructor (use New)");
    }
    NJSSynchronizationStatus *node_instance = new NJSSynchronizationStatus(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSSynchronizationStatus::SynchronizationStatus_prototype;

Handle<Object> NJSSynchronizationStatus::wrap(const std::shared_ptr<ledger::core::api::SynchronizationStatus> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(SynchronizationStatus_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSSynchronizationStatus *new_obj = new NJSSynchronizationStatus(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSSynchronizationStatus::wrap: object template not valid");
    }
    return obj;
}

void NJSSynchronizationStatus::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSSynchronizationStatus::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSSynchronizationStatus").ToLocalChecked());

    //SetPrototypeMethod all methods
    //Set object prototype
    SynchronizationStatus_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSSynchronizationStatus").ToLocalChecked(), func_template->GetFunction());
}
