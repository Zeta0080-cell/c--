#include <stdio.h>

// 函数用于计算数字的位数
int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

// 函数用于逆序打印数字
void printReverse(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed);
}

int main() {
    int number;

    // 输入一个不多于5位的正整数
    printf("Enter a positive integer with at most 5 digits: ");
    scanf("%d", &number);

    // 计算并打印位数
    int digits = countDigits(number);
    printf("The number is a %d-digit number.\n", digits);

    // 逆序打印数字
    printReverse(number);

    return 0;
}
