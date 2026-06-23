# MSearch
MSearch 是一个基于 C++14/Linux 从零实现的轻量级企业站内搜索引擎。

项目目标：

- 支持 RSS/XML/HTML/TXT/Markdown 文档导入
- 支持中文分词
- 支持倒排索引和正排索引
- 支持 BM25 相关性排序
- 支持关键词推荐
- 支持摘要生成和命中高亮
- 在线服务采用 Main Reactor + Sub Reactor + Worker ThreadPool
- 使用自定义二进制协议 + JSON body
- 支持配置、日志、metrics、压测
