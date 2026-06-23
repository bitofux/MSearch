/*
 * PROJECT : MSEARCH
 * FILE    : error_code.hpp
 * AUTHOR  : bitofux
 * DATE    : 2026-06-23
 * BRIEF   : 错误码(Error Code)
 */

#ifndef ERROR_CODE_HPP
#define ERROR_CODE_HPP

namespace msearch {
/* 错误类型 */
enum class ErrorCode {
    kOk = 0,

    // 通用错误
    kInvalidArgument,
    kNotFound,
    kInternalError,

    // 配置模块错误
    kConfigFileNotFound,
    kConfigParseError,
    kConfigKeyNotFound,
    kConfigInvalidValue,

    // 协议模块错误
    kInvalidMagic,
    kUnsupportedVersion,
    kUnknownCommand,
    kBodyTooLarge,
    kJsonParseError,

    // 索引模块错误
    kIndexNotReady,
    kIndexLoadFailed,
};

/*
 * ToString
 *
 * @brief 将错误码转换成字符串
 * @param code 错误码
 * @return 转换成功的字符串
 */
const char* ToString(ErrorCode code);
};  // namespace msearch

#endif  // ERROR_CODE_HPP
