/*
 * 02_variables.c —— 变量与数据类型
 */

#include <stdio.h>

#define PI 3.1415926   // 宏常量：编译前由预处理器替换

int main(void) {
    // ---------- 1. 基本数据类型 ----------
    int age = 25;                 // 整数
    unsigned int count = 300;     // 无符号整数（只能是非负数）
    short small = 12345;          // 短整型
    long big = 1234567890L;       // 长整型
    float height = 1.75f;         // 单精度浮点数（注意末尾的 f）
    double weight = 65.5;         // 双精度浮点数
    char letter = 'A';            // 单个字符

    printf("整型 age        = %d\n", age);
    printf("无符号 count    = %u\n", count);
    printf("短整型 small    = %d\n", small);
    printf("长整型 big      = %ld\n", big);
    printf("浮点 height     = %.2f\n", height);
    printf("双精度 weight   = %.1f\n", weight);
    printf("字符 letter     = %c\n", letter);

    // ---------- 2. 同时声明多个变量 ----------
    int a = 1, b = 2, c = 3;
    printf("\na=%d, b=%d, c=%d\n", a, b, c);

    // ---------- 3. sizeof 运算符：查看类型占用内存大小 ----------
    printf("\n各类型占用字节数：\n");
    printf("  int            : %d 字节\n", (int)sizeof(int));
    printf("  unsigned int   : %d 字节\n", (int)sizeof(unsigned int));
    printf("  short          : %d 字节\n", (int)sizeof(short));
    printf("  long           : %d 字节\n", (int)sizeof(long));
    printf("  float          : %d 字节\n", (int)sizeof(float));
    printf("  double         : %d 字节\n", (int)sizeof(double));
    printf("  char           : %d 字节\n", (int)sizeof(char));

    // ---------- 4. 常量 ----------
    const int DAYS_IN_WEEK = 7;   // const 常量：运行期不可修改
    printf("\n一周有 %d 天（const 常量）\n", DAYS_IN_WEEK);
    printf("圆周率 PI = %f（宏常量）\n", PI);

    // ---------- 5. 变量赋值与重新赋值 ----------
    int x = 10;
    x = x + 5;                    // 重新赋值
    printf("\nx 先等于 10，加 5 后 = %d\n", x);

    return 0;
}
