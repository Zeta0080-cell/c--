#include <stdio.h>
#include <string.h>

// ����Ӵ��Ƿ����ͨ��������ɻ��Ĵ�
int canBePalindrome(const char *sub_s, int len) {
    int count[10] = {0};
    // ͳ��ÿ�������ַ����ֵĴ���
    for (int i = 0; i < len; i++) {
        count[sub_s[i] - '0']++;
    }
    int odd_count = 0;
    // ͳ�Ƴ��������ε����ֵĸ���
    for (int i = 0; i < 10; i++) {
        if (count[i] % 2 == 1) {
            odd_count++;
        }
    }
    // ������������ε����ָ��������� 1 ���������ͨ��������ɻ��Ĵ�
    return odd_count <= 1;
}

int main() {
    char s[100000];
    // ��ȡ������ַ���
    scanf("%s", s);
    int n = strlen(s);
    int max_len = 0;
    // ö�����п��ܵ��Ӵ�
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sub_len = j - i + 1;
            // ��鵱ǰ�Ӵ��Ƿ����ͨ��������ɻ��Ĵ�
            if (canBePalindrome(s + i, sub_len)) {
                // �������������Ӵ��ĳ���
                if (sub_len > max_len) {
                    max_len = sub_len;
                }
            }
        }
    }
    // ������������Ӵ��ĳ���
    printf("%d\n", max_len);
    return 0;
}
