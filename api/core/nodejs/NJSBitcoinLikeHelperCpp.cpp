// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeHelperCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeHelper::scriptToOutput) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBitcoinLikeHelper::scriptToOutput needs 2 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }

    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_1 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_1,0));
    if(!njs_ptr_arg_1)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_1 = njs_ptr_arg_1->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeHelper* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeHelper>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeHelper::scriptToOutput : implementation of BitcoinLikeHelper is not valid");
    }

    auto result = cpp_impl->scriptToOutput(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSBitcoinLikeOutput::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSBitcoinLikeHelper::addressToOutput) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBitcoinLikeHelper::addressToOutput needs 2 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_1 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_1,0));
    if(!njs_ptr_arg_1)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_1 = njs_ptr_arg_1->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeHelper* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeHelper>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeHelper::addressToOutput : implementation of BitcoinLikeHelper is not valid");
    }

    auto result = cpp_impl->addressToOutput(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSBitcoinLikeOutput::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSBitcoinLikeHelper::serializeTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeHelper::serializeTransaction needs 1 arguments");
    }

    //Check if parameters have correct types

    auto field_arg_0_1 = Nan::Get(info[0]->ToObject(), Nan::New<String>("version").ToLocalChecked()).ToLocalChecked();
    auto arg_0_1 = Nan::To<int32_t>(field_arg_0_1).FromJust();

    auto field_arg_0_2 = Nan::Get(info[0]->ToObject(), Nan::New<String>("inputs").ToLocalChecked()).ToLocalChecked();
    vector<std::shared_ptr<BitcoinLikeOutput>> arg_0_2;
    Local<Array> arg_0_2_container = Local<Array>::Cast(field_arg_0_2);
    for(uint32_t arg_0_2_id = 0; arg_0_2_id < arg_0_2_container->Length(); arg_0_2_id++)
    {
        if(arg_0_2_container->Get(arg_0_2_id)->IsObject())
        {
            Local<Object> njs_arg_0_2_elem = arg_0_2_container->Get(arg_0_2_id)->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
            NJSBitcoinLikeOutput *njs_ptr_arg_0_2_elem = static_cast<NJSBitcoinLikeOutput *>(Nan::GetInternalFieldPointer(njs_arg_0_2_elem,0));
            if(!njs_ptr_arg_0_2_elem)
            {
                return Nan::ThrowError("NodeJs Object to NJSBitcoinLikeOutput failed");
            }
            auto arg_0_2_elem = njs_ptr_arg_0_2_elem->getCppImpl();

            arg_0_2.emplace_back(arg_0_2_elem);
        }
    }


    auto field_arg_0_3 = Nan::Get(info[0]->ToObject(), Nan::New<String>("paths").ToLocalChecked()).ToLocalChecked();
    vector<std::string> arg_0_3;
    Local<Array> arg_0_3_container = Local<Array>::Cast(field_arg_0_3);
    for(uint32_t arg_0_3_id = 0; arg_0_3_id < arg_0_3_container->Length(); arg_0_3_id++)
    {
        if(arg_0_3_container->Get(arg_0_3_id)->IsString())
        {
            String::Utf8Value string_arg_0_3_elem(arg_0_3_container->Get(arg_0_3_id)->ToString());
            auto arg_0_3_elem = std::string(*string_arg_0_3_elem);
            arg_0_3.emplace_back(arg_0_3_elem);
        }
    }


    auto field_arg_0_4 = Nan::Get(info[0]->ToObject(), Nan::New<String>("outputs").ToLocalChecked()).ToLocalChecked();
    vector<std::shared_ptr<BitcoinLikeOutput>> arg_0_4;
    Local<Array> arg_0_4_container = Local<Array>::Cast(field_arg_0_4);
    for(uint32_t arg_0_4_id = 0; arg_0_4_id < arg_0_4_container->Length(); arg_0_4_id++)
    {
        if(arg_0_4_container->Get(arg_0_4_id)->IsObject())
        {
            Local<Object> njs_arg_0_4_elem = arg_0_4_container->Get(arg_0_4_id)->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
            NJSBitcoinLikeOutput *njs_ptr_arg_0_4_elem = static_cast<NJSBitcoinLikeOutput *>(Nan::GetInternalFieldPointer(njs_arg_0_4_elem,0));
            if(!njs_ptr_arg_0_4_elem)
            {
                return Nan::ThrowError("NodeJs Object to NJSBitcoinLikeOutput failed");
            }
            auto arg_0_4_elem = njs_ptr_arg_0_4_elem->getCppImpl();

            arg_0_4.emplace_back(arg_0_4_elem);
        }
    }


    auto field_arg_0_5 = Nan::Get(info[0]->ToObject(), Nan::New<String>("lockTime").ToLocalChecked()).ToLocalChecked();
    auto arg_0_5 = Nan::To<int32_t>(field_arg_0_5).FromJust();
    BitcoinLikePreparedTransaction arg_0(arg_0_1, arg_0_2, arg_0_3, arg_0_4, arg_0_5);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeHelper* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeHelper>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeHelper::serializeTransaction : implementation of BitcoinLikeHelper is not valid");
    }

    auto result = cpp_impl->serializeTransaction(arg_0);

    //Wrap result in node object
    Local<Array> arg_1 = Nan::New<Array>();
    for(size_t arg_1_id = 0; arg_1_id < result.size(); arg_1_id++)
    {
        auto arg_1_elem = Nan::New<Uint32>(result[arg_1_id]);
        arg_1->Set((int)arg_1_id,arg_1_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeHelper::parseTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeHelper::parseTransaction needs 1 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeHelper* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeHelper>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeHelper::parseTransaction : implementation of BitcoinLikeHelper is not valid");
    }

    auto result = cpp_impl->parseTransaction(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBitcoinLikeTransaction::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}

NAN_METHOD(NJSBitcoinLikeHelper::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeHelper function can only be called as constructor (use New)");
    }
    NJSBitcoinLikeHelper *node_instance = new NJSBitcoinLikeHelper(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeHelper::BitcoinLikeHelper_prototype;

Handle<Object> NJSBitcoinLikeHelper::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeHelper> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeHelper_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSBitcoinLikeHelper *new_obj = new NJSBitcoinLikeHelper(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeHelper::wrap: object template not valid");
    }
    return obj;
}

void NJSBitcoinLikeHelper::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeHelper::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeHelper").ToLocalChecked());

    //SetPrototypeMethod all methods
    //Set object prototype
    BitcoinLikeHelper_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeHelper").ToLocalChecked(), func_template->GetFunction());
}
