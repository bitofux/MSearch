# 编译
CXX ?= g++
CXXFLAGS := -std=c++14 -Wall -Wextra -Wpedantic -O2 -g -Iinclude

# 构建目录
BUILD_DIR := build
TESTS_DIR := $(BUILD_DIR)/tests

.PHONY: all test clean

all: test

# 测试
test: $(TESTS_DIR)/1_test_noncopyable
	./$(TESTS_DIR)/1_test_noncopyable

$(TESTS_DIR)/1_test_noncopyable: tests/unit/1_test_noncopyable.cc include/msearch/base/noncopyable.hpp
	mkdir -p $(TESTS_DIR)
	$(CXX) $(CXXFLAGS) tests/unit/1_test_noncopyable.cc -o $(TESTS_DIR)/1_test_noncopyable

# 清理
clean:
	rm -rf $(BUILD_DIR)
