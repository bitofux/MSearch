/*
 * PROJECT : MSEARCH
 * FILE    : error_code.cc
 * AUTHOR  : bitofux
 * DATE    : 2026-06-23
 * BRIEF   : 错误码
 */
#include "msearch/base/error_code.hpp"

namespace msearch {
const char* ToString(ErrorCode code) {
    switch (code) {
        case ErrorCode::kOk:
            return "OK";

        // 通用错误
        case ErrorCode::kInvalidArgument:
            return "kInvalidArgument";
        case ErrorCode::kNotFound:
            return "NotFound";
        case ErrorCode::kInternalError:
            return "InternalError";

        // 配置模块错误
        case ErrorCode::kConfigFileNotFound:
            return "ConfigFileNotFound";
        case ErrorCode::kConfigParseError:
            return "ConfigParseError";
        case ErrorCode::kConfigKeyNotFound:
            return "ConfigKeyNotFound";
        case ErrorCode::kConfigInvalidValue:
            return "ConfigInvalidValue";

        // 协议模块错误
        case ErrorCode::kInvalidMagic:
            return "InvalidMagic";
        case ErrorCode::kUnsupportedVersion:
            return "UnsupportedVersion";
        case ErrorCode::kUnknownCommand:
            return "UnknownCommand";
        case ErrorCode::kBodyTooLarge:
            return "BodyTooLarge";
        case ErrorCode::kJsonParseError:
            return "JsonParseError";

        // 索引模块错误
        case ErrorCode::kIndexNotReady:
            return "IndexNotReady";
        case ErrorCode::kIndexLoadFailed:
            return "IndexLoadFailed";

        default:
            return "UnknownError";
    }
}
}  // namespace msearch
