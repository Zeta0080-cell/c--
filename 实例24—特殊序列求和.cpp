#include <stdio.h>

int main() {
    // 设定斐波那契数列的最大项
    int n = 20;
    long long fib[n + 1];  // 存储斐波那契数列

    // 初始化斐波那契数列
    fib[0] = 0;
    fib[1] = 1;

    // 生成斐波那契数列
    for (int i = 2; i <= n + 1; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // 计算分数序列的和
    double sum = 0.0;
    for (int i = 2; i <= n + 1; i++) {
        sum += (double)fib[i] / fib[i - 1];
    }

    // 输出结果
    printf("前20项分数序列的和是: %.4f\n", sum);

    return 0;
}
