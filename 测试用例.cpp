#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int x;  // 需要求的整数
    int i, j;  // 用于分解因子的两个数
    int m, n;  // 两个完全平方数的平方根

    // 遍历 i，确保 i 和 j 是 168 的两个因子
    for (i = 1; i <= 168 / 2; i++) {
        if (168 % i == 0) {  // 检查 i 是否是 168 的因子
            j = 168 / i;  // 计算对应的另一个因子

            // 检查 i 和 j 是否满足条件
            if ((i + j) % 2 == 0 && (j - i) % 2 == 0) {
                m = (i + j) / 2;  // 计算 m
                n = (j - i) / 2;  // 计算 n

                // 计算 x 的值
                x = n * n - 100;

                // 输出结果
                printf("满足条件的整数 x 是：%d\n", x);
            }
        }
    }

    return 0;
}
