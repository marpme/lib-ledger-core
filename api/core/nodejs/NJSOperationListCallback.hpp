// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSOPERATIONLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSOPERATIONLISTCALLBACK_HPP


#include "../../../core/src/api/../utils/optional.hpp"
#include "../../../core/src/api/Error.hpp"
#include "../../../core/src/api/Operation.hpp"
#include "NJSOperationCpp.hpp"
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/OperationListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSOperationListCallback: public Nan::ObjectWrap, public ledger::core::api::OperationListCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSOperationListCallback()
    {
        njs_impl.Reset();
        pers_resolver.Reset();
    };
    NJSOperationListCallback(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<Operation>>> & result, const std::experimental::optional<Error> & error);
    void SetPromise(Local<Promise::Resolver> resolver)
    {
        pers_resolver.Reset(resolver);
    }

private:
    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Object> njs_impl;
    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSOPERATIONLISTCALLBACK_HPP
