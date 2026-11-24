# cpp_pra

C++ 数据结构练习仓库，按知识点章节 / 数据结构类别组织。

## 目录结构

```
.
├── 01_pointer_array/              # 第 1 章 指针与数组
│   ├── arr_pp_demo.cpp            # 指针算术访问数组元素
│   ├── ptr_for_arr.cpp            # 通过指针遍历数组
│   └── ptr_for_arr.h
├── 02_linear_list/                # 第 2 章 线性表
│   ├── sequential_list/           # 顺序表
│   │   ├── Dynamic_arr.cpp
│   │   └── Dynamic_arr.hpp
│   └── linked_list/               # 单链表
│       ├── List.cpp
│       └── List.hpp
├── 03_stack_queue/                # 第 3 章 栈与队列
│   ├── Stack.cpp / Stack.h
│   ├── Queue.cpp / Queue.h
│   └── Circular_Queue.cpp / Circular_Queue.h   # 循环队列（暂未加入构建）
├── main.cpp                       # 总入口，串起各章示例
├── CMakeLists.txt                 # CMake / Visual Studio（打开文件夹）构建配置
├── Makefile.win                   # Dev-C++ 构建
└── pro1.dev                       # Dev-C++ 工程文件
```

## 构建方式

### Visual Studio（推荐，VS 2019 及以上）

需要安装「使用 C++ 的桌面开发」工作负载（含 MSVC 编译器与 CMake）。

1. 打开 Visual Studio → **文件 → 打开 → 文件夹**，选择本仓库目录；
2. VS 会读取仓库根目录的 `CMakeLists.txt` 完成配置；
3. 在工具栏的启动项下拉框中选择 `pro1.exe`，按 **F5**（调试）或 **Ctrl+F5**（运行）。

也可以用命令行：

```bash
cmake -S . -B out/build && cmake --build out/build --config Debug
```

### Dev-C++ 5.11

直接用 Dev-C++ 打开 `pro1.dev` 构建；或使用 `Makefile.win`（需 Dev-C++ 自带的 MinGW64 工具链）：

```bash
make -f Makefile.win
```

构建产物 `pro1.exe` 将生成在项目根目录。

## 说明

- `main.cpp` 中的 `#include "ptr_for_arr.h"` 等写法依赖 CMake 的 `target_include_directories`（Dev-C++ 则由 `Makefile.win` 中的 `-I` 提供），因此无需写长相对路径。
- `Circular_Queue.cpp` 的实现与头文件声明暂不一致（构造/入队/出队函数名），因此未加入 CMake 与 Dev-C++ 的默认构建，仅作练习留存。
