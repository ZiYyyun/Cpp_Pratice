# cpp_pra

C++ 学习练习仓库，主要记录指针与数组相关的示例代码。

## 项目说明

本仓库基于 Dev-C++ 5.11 (MinGW64 / g++) 构建，包含以下示例：

- `main.cpp` — 指针与数组基础用法演示
- `arr_pp_demo.cpp` — 指针算术访问数组元素
- `ptr_for_arr.cpp` / `ptr_for_arr.h` — 通过指针遍历数组的函数封装

## 构建方式

使用随附的 `Makefile.win` 构建（需 Dev-C++ 自带的 MinGW64 工具链）：

```bash
make -f Makefile.win
```

构建产物 `pro1.exe` 将生成在项目根目录。

## 目录结构

```
.
├── main.cpp            # 主程序入口
├── arr_pp_demo.cpp     # 数组指针算术演示
├── ptr_for_arr.cpp     # 数组遍历函数实现
├── ptr_for_arr.h       # 数组遍历函数声明
├── Makefile.win        # Dev-C++ 生成的 Makefile
└── pro1.dev            # Dev-C++ 工程文件
```
