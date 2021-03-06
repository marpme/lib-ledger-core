// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#import "LGEventBus+Private.h"
#import "LGEventBus.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "LGEventReceiver+Private.h"
#import "LGExecutionContext+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface LGEventBus ()

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::EventBus>&)cppRef;

@end

@implementation LGEventBus {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ledger::core::api::EventBus>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::EventBus>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)subscribe:(nullable id<LGExecutionContext>)context
         receiver:(nullable id<LGEventReceiver>)receiver {
    try {
        _cppRefHandle.get()->subscribe(::djinni_generated::ExecutionContext::toCpp(context),
                                       ::djinni_generated::EventReceiver::toCpp(receiver));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)unsubscribe:(nullable id<LGEventReceiver>)receiver {
    try {
        _cppRefHandle.get()->unsubscribe(::djinni_generated::EventReceiver::toCpp(receiver));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto EventBus::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto EventBus::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<LGEventBus>(cpp);
}

}  // namespace djinni_generated

@end
