#include <stdio.h>

int main() {
    double number, square;

    // 提示用户输入一个数字
    printf("Enter a number: ");
    scanf("%lf", &number); // 使用%lf格式说明符读取double类型的数据

    // 计算平方
    square = number * number;

    // 输出结果
    printf("The square of %lf is %lf\n", number, square);

    return 0;
}
