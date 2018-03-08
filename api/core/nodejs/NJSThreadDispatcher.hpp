// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

#ifndef DJINNI_GENERATED_NJSTHREADDISPATCHER_HPP
#define DJINNI_GENERATED_NJSTHREADDISPATCHER_HPP


#include "../../../core/src/api/ExecutionContext.hpp"
#include "../../../core/src/api/Lock.hpp"
#include "NJSExecutionContext.hpp"
#include "NJSLock.hpp"
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/ThreadDispatcher.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSThreadDispatcher: public Nan::ObjectWrap, public ledger::core::api::ThreadDispatcher {
public:

    static void Initialize(Local<Object> target);
    ~NJSThreadDispatcher()
    {
        njs_impl.Reset();
    };
    NJSThreadDispatcher(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    std::shared_ptr<ExecutionContext> getSerialExecutionContext(const std::string & name);

    std::shared_ptr<ExecutionContext> getThreadPoolExecutionContext(const std::string & name);

    std::shared_ptr<ExecutionContext> getMainExecutionContext();

    std::shared_ptr<Lock> newLock();

private:
    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSTHREADDISPATCHER_HPP
