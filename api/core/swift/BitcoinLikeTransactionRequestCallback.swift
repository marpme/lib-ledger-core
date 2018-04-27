// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni
import Foundation

final class BitcoinLikeTransactionRequestCallback: NSObject, LGBitcoinLikeTransactionRequestCallback {
    private var onCallbackBlock: ((LGBitcoinLikeTransactionRequest?, LGError?) -> Void)?

    func setOnCallback(_ block: @escaping (LGBitcoinLikeTransactionRequest?, LGError?) -> Void) -> BitcoinLikeTransactionRequestCallback {
        self.onCallbackBlock = block
        return self
    }

    func onCallback(_ result: LGBitcoinLikeTransactionRequest?, error: LGError?) -> Void {
        self.onCallbackBlock?(result, error)
    }
}