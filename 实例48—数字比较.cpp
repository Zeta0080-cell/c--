#include <stdio.h>

int main() {
    int a, b;

    // 获取用户输入的两个整数
    printf("请输入两个整数（用空格分隔）：");
    scanf("%d %d", &a, &b);

    // 使用关系运算符进行比较
    if (a > b) {
        printf("%d 大于 %d\n", a, b);
    } else if (a < b) {
        printf("%d 小于 %d\n", a, b);
    } else {
        printf("%d 等于 %d\n", a, b);
    }

    return 0;
}
