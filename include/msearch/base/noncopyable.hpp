/*
 * PROJECT : MSEARCH
 * FILE    : noncopyable.hpp
 * AUTHOR  : bitofux
 * DATE    : 2026-06-23
 * BRIEF   : 禁止拷贝类
 */

#ifndef NONCOPYABLE_HPP
#define NONCOPYABLE_HPP

namespace msearch {
class Noncopyable {
protected:
    Noncopyable() = default;
    ~Noncopyable() = default;

private:
    // 禁止拷贝和赋值
    Noncopyable(const Noncopyable&) = delete;
    Noncopyable& operator=(const Noncopyable&) = delete;
};
}  // namespace msearch

#endif  // NONCOPYABLE_HPP
