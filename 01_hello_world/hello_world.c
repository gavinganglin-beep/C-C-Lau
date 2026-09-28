/*
 * 01_hello_world.c —— C 语言入门第一课
 *
 * 每个 C 程序都从 main() 函数开始执行。
 * 下面是最经典的 "Hello, World!" 程序。
 *
 * 编译（在命令行执行）：
 *   gcc hello_world.c -o hello_world
 * 运行：
 *   ./hello_world     (Linux / macOS)
 *   hello_world.exe   (Windows)
 */

#include <stdio.h>   // 标准输入输出库，提供 printf 函数

// main 函数：程序入口，操作系统从这里开始执行
int main(void) {
    // printf 用于向屏幕输出内容，\n 表示换行
    printf("Hello, World!\n");

    // return 0 表示程序正常结束
    return 0;
}
