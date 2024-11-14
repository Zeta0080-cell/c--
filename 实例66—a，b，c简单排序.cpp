#include <stdio.h>

int main() {
    int a, b, c, temp;

    // 获取用户输入的三个整数
    printf("请输入三个整数（用空格分隔）：");
    scanf("%d %d %d", &a, &b, &c);

    // 使用简单的冒泡排序逻辑对三个数进行排序
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // 输出排序后的结果
    printf("排序后的结果是：%d %d %d\n", a, b, c);

    return 0;
}
