#include <stdio.h>
#include <string.h>

// 检查子串是否可以通过交换变成回文串
int canBePalindrome(const char *sub_s, int len) {
    int count[10] = {0};
    // 统计每个数字字符出现的次数
    for (int i = 0; i < len; i++) {
        count[sub_s[i] - '0']++;
    }
    int odd_count = 0;
    // 统计出现奇数次的数字的个数
    for (int i = 0; i < 10; i++) {
        if (count[i] % 2 == 1) {
            odd_count++;
        }
    }
    // 如果出现奇数次的数字个数不超过 1 个，则可以通过交换变成回文串
    return odd_count <= 1;
}

int main() {
    char s[100000];
    // 读取输入的字符串
    scanf("%s", s);
    int n = strlen(s);
    int max_len = 0;
    // 枚举所有可能的子串
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sub_len = j - i + 1;
            // 检查当前子串是否可以通过交换变成回文串
            if (canBePalindrome(s + i, sub_len)) {
                // 更新最长特殊回文子串的长度
                if (sub_len > max_len) {
                    max_len = sub_len;
                }
            }
        }
    }
    // 输出最长特殊回文子串的长度
    printf("%d\n", max_len);
    return 0;
}
