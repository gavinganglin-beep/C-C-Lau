/*
 * 03_input_output.c —— 输入与输出
 */

#include <stdio.h>

int main(void) {
    // ---------- 1. printf 格式化输出 ----------
    int num = 42;
    float f = 3.14159f;
    char ch = 'X';
    char name[] = "Alice";

    printf("整数：%d\n", num);           // %d 十进制整数
    printf("浮点数：%f\n", f);           // %f 浮点数
    printf("保留两位小数：%.2f\n", f);    // %.2f 保留 2 位小数
    printf("字符：%c\n", ch);            // %c 单个字符
    printf("字符串：%s\n", name);        // %s 字符串
    printf("宽度控制：[%5d]\n", num);    // %5d 至少占 5 个字符宽度，右对齐
    printf("左对齐：[%-5d]\n", num);     // %-5d 左对齐

    // ---------- 2. scanf 从键盘读取输入 ----------
    int age;
    printf("\n请输入你的年龄：");
    scanf("%d", &age);                   // 注意 & 取地址
    printf("你输入了：%d 岁\n", age);

    // ---------- 3. 一次读取多个值 ----------
    int x, y;
    printf("\n请输入两个整数（用空格隔开）：");
    scanf("%d %d", &x, &y);
    printf("它们的和 = %d\n", x + y);

    // ---------- 4. getchar / putchar 单个字符 ----------
    printf("\n请输入一个字符：");
    getchar();                           // 吃掉上一行 scanf 遗留的换行符
    char c = getchar();
    printf("你输入的字符是：");
    putchar(c);
    printf("\n");

    return 0;
}
