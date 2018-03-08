// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSWALLET_HPP
#define DJINNI_GENERATED_NJSWALLET_HPP


#include "../../../core/src/api/AccountCreationInfo.hpp"
#include "../../../core/src/api/BitcoinLikeNetworkParameters.hpp"
#include "../../../core/src/api/Currency.hpp"
#include "../../../core/src/api/CurrencyUnit.hpp"
#include "../../../core/src/api/ExtendedKeyAccountCreationInfo.hpp"
#include "../../../core/src/api/WalletType.hpp"
#include "NJSAccountCallback.hpp"
#include "NJSAccountCreationInfoCallback.hpp"
#include "NJSAccountListCallback.hpp"
#include "NJSBitcoinLikeWalletCpp.hpp"
#include "NJSBlockCallback.hpp"
#include "NJSEventBusCpp.hpp"
#include "NJSExtendedKeyAccountCreationInfoCallback.hpp"
#include "NJSI32Callback.hpp"
#include "NJSLoggerCpp.hpp"
#include "NJSPreferencesCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/Wallet.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSWallet: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSWallet() {};
    NJSWallet(const std::shared_ptr<ledger::core::api::Wallet> &iWallet):_Wallet(iWallet){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::Wallet> &object);
    static Nan::Persistent<ObjectTemplate> Wallet_prototype;
    std::shared_ptr<ledger::core::api::Wallet> getCppImpl(){return _Wallet;};

private:
    static NAN_METHOD(getName);

    static NAN_METHOD(getAccount);

    static NAN_METHOD(getAccountCount);

    static NAN_METHOD(getAccounts);

    static NAN_METHOD(getNextAccountIndex);

    static NAN_METHOD(getEventBus);

    static NAN_METHOD(isSynchronizing);

    static NAN_METHOD(synchronize);

    static NAN_METHOD(getPreferences);

    static NAN_METHOD(getLogger);

    static NAN_METHOD(getAccountPreferences);

    /**
     * asBitcoinLikeWallet(): Callback<BitcoinLikeWallet>;
     * asEthereumLikeWallet(): Callback<EthereumLikeWallet>;
     * asRippleLikeWallet(): Callback<RippleLikeWallet>;
     */
    static NAN_METHOD(asBitcoinLikeWallet);

    static NAN_METHOD(getCurrency);

    static NAN_METHOD(isInstanceOfBitcoinLikeWallet);

    static NAN_METHOD(isInstanceOfEthereumLikeWallet);

    static NAN_METHOD(isInstanceOfRippleLikeWallet);

    static NAN_METHOD(getWalletType);

    static NAN_METHOD(getLastBlock);

    static NAN_METHOD(getAccountCreationInfo);

    static NAN_METHOD(getExtendedKeyAccountCreationInfo);

    static NAN_METHOD(getNextAccountCreationInfo);

    static NAN_METHOD(getNextExtendedKeyAccountCreationInfo);

    static NAN_METHOD(newAccountWithInfo);

    static NAN_METHOD(newAccountWithExtendedKeyInfo);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::Wallet> _Wallet;
};
#endif //DJINNI_GENERATED_NJSWALLET_HPP
