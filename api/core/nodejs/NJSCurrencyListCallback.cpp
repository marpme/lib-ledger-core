// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSCurrencyListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSCurrencyListCallback::onCallback(const std::experimental::optional<std::vector<Currency>> & result, const std::experimental::optional<Error> & error)
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < (*result).size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<Object>();
        auto arg_0_elem_1 = Nan::New<Integer>((int)(*result)[arg_0_id].walletType);
        Nan::DefineOwnProperty(arg_0_elem, Nan::New<String>("walletType").ToLocalChecked(), arg_0_elem_1);
        auto arg_0_elem_2 = Nan::New<String>((*result)[arg_0_id].name).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_elem, Nan::New<String>("name").ToLocalChecked(), arg_0_elem_2);
        auto arg_0_elem_3 = Nan::New<Int32>((*result)[arg_0_id].bip44CoinType);
        Nan::DefineOwnProperty(arg_0_elem, Nan::New<String>("bip44CoinType").ToLocalChecked(), arg_0_elem_3);
        auto arg_0_elem_4 = Nan::New<String>((*result)[arg_0_id].paymentUriScheme).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_elem, Nan::New<String>("paymentUriScheme").ToLocalChecked(), arg_0_elem_4);
        Local<Array> arg_0_elem_5 = Nan::New<Array>();
        for(size_t arg_0_elem_5_id = 0; arg_0_elem_5_id < (*result)[arg_0_id].units.size(); arg_0_elem_5_id++)
        {
            auto arg_0_elem_5_elem = Nan::New<Object>();
            auto arg_0_elem_5_elem_1 = Nan::New<String>((*result)[arg_0_id].units[arg_0_elem_5_id].name).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_elem_5_elem, Nan::New<String>("name").ToLocalChecked(), arg_0_elem_5_elem_1);
            auto arg_0_elem_5_elem_2 = Nan::New<String>((*result)[arg_0_id].units[arg_0_elem_5_id].symbol).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_elem_5_elem, Nan::New<String>("symbol").ToLocalChecked(), arg_0_elem_5_elem_2);
            auto arg_0_elem_5_elem_3 = Nan::New<String>((*result)[arg_0_id].units[arg_0_elem_5_id].code).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_elem_5_elem, Nan::New<String>("code").ToLocalChecked(), arg_0_elem_5_elem_3);
            auto arg_0_elem_5_elem_4 = Nan::New<Int32>((*result)[arg_0_id].units[arg_0_elem_5_id].numberOfDecimal);
            Nan::DefineOwnProperty(arg_0_elem_5_elem, Nan::New<String>("numberOfDecimal").ToLocalChecked(), arg_0_elem_5_elem_4);

            arg_0_elem_5->Set((int)arg_0_elem_5_id,arg_0_elem_5_elem);
        }

        Nan::DefineOwnProperty(arg_0_elem, Nan::New<String>("units").ToLocalChecked(), arg_0_elem_5);
        auto arg_0_elem_6 = Nan::New<Object>();
        auto arg_0_elem_6_1 = Nan::New<String>((*(*result)[arg_0_id].bitcoinLikeNetworkParameters).Identifier).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_elem_6, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_elem_6_1);
        Local<Array> arg_0_elem_6_2 = Nan::New<Array>();
        for(size_t arg_0_elem_6_2_id = 0; arg_0_elem_6_2_id < (*(*result)[arg_0_id].bitcoinLikeNetworkParameters).P2PKHVersion.size(); arg_0_elem_6_2_id++)
        {
            auto arg_0_elem_6_2_elem = Nan::New<Uint32>((*(*result)[arg_0_id].bitcoinLikeNetworkParameters).P2PKHVersion[arg_0_elem_6_2_id]);
            arg_0_elem_6_2->Set((int)arg_0_elem_6_2_id,arg_0_elem_6_2_elem);
        }

        Nan::DefineOwnProperty(arg_0_elem_6, Nan::New<String>("P2PKHVersion").ToLocalChecked(), arg_0_elem_6_2);
        Local<Array> arg_0_elem_6_3 = Nan::New<Array>();
        for(size_t arg_0_elem_6_3_id = 0; arg_0_elem_6_3_id < (*(*result)[arg_0_id].bitcoinLikeNetworkParameters).P2SHVersion.size(); arg_0_elem_6_3_id++)
        {
            auto arg_0_elem_6_3_elem = Nan::New<Uint32>((*(*result)[arg_0_id].bitcoinLikeNetworkParameters).P2SHVersion[arg_0_elem_6_3_id]);
            arg_0_elem_6_3->Set((int)arg_0_elem_6_3_id,arg_0_elem_6_3_elem);
        }

        Nan::DefineOwnProperty(arg_0_elem_6, Nan::New<String>("P2SHVersion").ToLocalChecked(), arg_0_elem_6_3);
        Local<Array> arg_0_elem_6_4 = Nan::New<Array>();
        for(size_t arg_0_elem_6_4_id = 0; arg_0_elem_6_4_id < (*(*result)[arg_0_id].bitcoinLikeNetworkParameters).XPUBVersion.size(); arg_0_elem_6_4_id++)
        {
            auto arg_0_elem_6_4_elem = Nan::New<Uint32>((*(*result)[arg_0_id].bitcoinLikeNetworkParameters).XPUBVersion[arg_0_elem_6_4_id]);
            arg_0_elem_6_4->Set((int)arg_0_elem_6_4_id,arg_0_elem_6_4_elem);
        }

        Nan::DefineOwnProperty(arg_0_elem_6, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_elem_6_4);
        auto arg_0_elem_6_5 = Nan::New<Integer>((int)(*(*result)[arg_0_id].bitcoinLikeNetworkParameters).FeePolicy);
        Nan::DefineOwnProperty(arg_0_elem_6, Nan::New<String>("FeePolicy").ToLocalChecked(), arg_0_elem_6_5);
        auto arg_0_elem_6_6 = Nan::New<Number>((*(*result)[arg_0_id].bitcoinLikeNetworkParameters).DustAmount);
        Nan::DefineOwnProperty(arg_0_elem_6, Nan::New<String>("DustAmount").ToLocalChecked(), arg_0_elem_6_6);
        auto arg_0_elem_6_7 = Nan::New<String>((*(*result)[arg_0_id].bitcoinLikeNetworkParameters).MessagePrefix).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_elem_6, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_elem_6_7);
        auto arg_0_elem_6_8 = Nan::New<Boolean>((*(*result)[arg_0_id].bitcoinLikeNetworkParameters).UsesTimestampedTransaction);
        Nan::DefineOwnProperty(arg_0_elem_6, Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked(), arg_0_elem_6_8);

        Nan::DefineOwnProperty(arg_0_elem, Nan::New<String>("bitcoinLikeNetworkParameters").ToLocalChecked(), arg_0_elem_6);

        arg_0->Set((int)arg_0_id,arg_0_elem);
    }

    auto arg_1 = Nan::New<Object>();
    auto arg_1_1 = Nan::New<Integer>((int)(*error).code);
    Nan::DefineOwnProperty(arg_1, Nan::New<String>("code").ToLocalChecked(), arg_1_1);
    auto arg_1_2 = Nan::New<String>((*error).message).ToLocalChecked();
    Nan::DefineOwnProperty(arg_1, Nan::New<String>("message").ToLocalChecked(), arg_1_2);

    auto local_resolver = Nan::New<Promise::Resolver>(pers_resolver);
    if(error)
    {
        auto rejected = local_resolver->Reject(Nan::GetCurrentContext(), arg_1);
        rejected.FromJust();
    }
    else
    {
        auto resolve = local_resolver->Resolve(Nan::GetCurrentContext(), arg_0);
        resolve.FromJust();
    }
}

NAN_METHOD(NJSCurrencyListCallback::addRef) {

    NJSCurrencyListCallback *obj = Nan::ObjectWrap::Unwrap<NJSCurrencyListCallback>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSCurrencyListCallback::removeRef) {

    NJSCurrencyListCallback *obj = Nan::ObjectWrap::Unwrap<NJSCurrencyListCallback>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSCurrencyListCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSCurrencyListCallback function can only be called as constructor (use New)");
    }

    NJSCurrencyListCallback *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSCurrencyListCallback(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSCurrencyListCallback::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSCurrencyListCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSCurrencyListCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSCurrencyListCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSCurrencyListCallback").ToLocalChecked(), func_template->GetFunction());
}
