#include <stdio.h>

int age(int n) {
    if (n == 1) {
        return 10; // 第一个人的年龄是10岁
    } else {
        return age(n - 1) + 2; // 其他人的年龄是前一个人的年龄加2
    }
}

int main() {
    int n = 5; // 我们要计算第五个人的年龄
    printf("The age of the %dth person is %d.\n", n, age(n));
    return 0;
}
