//求阶乘的和
 #include <stdio.h>

// 计算阶乘的函数
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    long long sum = 0;

    // 累加从1到20的阶乘
    for (int i = 1; i <= 20; i++) {
        sum += factorial(i);  // 加上当前阶乘
    }

    // 输出结果
    printf("1 + 2! + 3! + ... + 20! 的和是: %lld\n", sum);

    return 0;
}
