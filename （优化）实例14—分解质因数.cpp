//优化算法—分解质因数 
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("请输入一个正整数: ");
    scanf("%d", &n);
    printf("%d=", n);

    int first = 1;  // 控制是否输出乘号
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            if (!first) {
                printf("*");
            }
            printf("%d", i);
            n /= i;
            first = 0;
        }
    }

    // 如果最后剩下的 n 是一个质数，也需要输出它
    if (n > 1) {
        if (!first) {
            printf("*");
        }
        printf("%d", n);
    }

    printf("\n");
    return 0;
}
