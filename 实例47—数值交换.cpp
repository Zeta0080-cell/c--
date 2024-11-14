#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int temp;

    // 打印交换前的值
    printf("交换前：a = %d, b = %d\n", a, b);

    // 使用临时变量交换
    temp = a;
    a = b;
    b = temp;

    // 打印交换后的值
    printf("交换后：a = %d, b = %d\n", a, b);

    return 0;
}
