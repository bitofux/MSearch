/*
 * PROJECT : MSEARCH
 * FILE    : 1_test_noncopyable.cc
 * AUTHOR  : bitofux
 * DATE    : 2026-06-23
 * BRIEF   : 禁止拷贝类(noncopyable)的测试
 */
#include "msearch/base/noncopyable.hpp"

#include <type_traits>
#include <iostream>

class Test : private msearch::Noncopyable {
public:
    Test() = default;
    ~Test() = default;

    void use() const { std::cout << "Test:use()" << std::endl; }
};

int main() {
    Test t1;
    t1.use();

    // 编译期检查
    // Test不应该被拷贝构造
    static_assert(!std::is_copy_constructible<Test>::value,
                  "Test should not be copy constructible");

    // Test不应该被赋值
    static_assert(!std::is_copy_assignable<Test>::value, "Test should not be copy assignable");

    std::cout << "test_noncopyable passed" << std::endl;

    return 0;
}
