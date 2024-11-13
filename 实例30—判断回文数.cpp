//判断回文数
 #include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10; // 获取当前最低位的数字
        reversedNum = reversedNum * 10 + digit; // 将数字添加到逆序数的末尾
        num = num / 10; // 移除当前最低位的数字
    }
    return originalNum == reversedNum; // 比较原始数和逆序数是否相等
}

int main() {
    int number;
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}
