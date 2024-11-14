#include <stdio.h>
#include <string.h> // 包含 strlen() 函数的头文件

int main() {
    char str[] = "Hello, World!";
    size_t length = strlen(str); // 使用 strlen() 函数计算字符串长度
    printf("字符串长度为: %zu\n", length);
    return 0;
}
