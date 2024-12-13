#include <stdio.h>
#include <string.h>

int main() {
    char str[51];  // 用于存储输入的句子，最大长度为50，预留一个字符存储'\0'
	int i; 
    // 读取输入
    fgets(str, sizeof(str), stdin);
    
    // 去掉可能的换行符
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int isPalindrome = 1;  // 默认是回文，若发现不符合回文条件则修改为0

    // 判断回文
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;  // 如果左右字符不同，标记为非回文
            break;
        }
    }

    // 输出结果
    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
