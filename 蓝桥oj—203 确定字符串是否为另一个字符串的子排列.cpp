//蓝桥oj—203 确定字符串是否为另一个字符串的子排列
//通过检测字符出现的频率就可以知道是否为子排列
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    int count[256] = {0}; // 假设只处理ASCII字符，创建一个大小为256的数组来统计字符频率

    // 读取两个字符串
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // 去掉换行符
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;

    // 如果两个字符串长度不同，直接返回NO
    if (strlen(s1) != strlen(s2)) {
        printf("NO\n");
        return 0;
    }

    // 统计s1中的字符频率
    for (int i = 0; i < strlen(s1); i++) {
        count[(unsigned char)s1[i]]++; // 对应字符频率加1
    }

    // 对s2中的字符进行检查
    for (int i = 0; i < strlen(s2); i++) {
        count[(unsigned char)s2[i]]--; // 如果存在的字符频率减1
        if (count[(unsigned char)s2[i]] < 0) {
            // 如果某字符的频率变为负数，说明s2中出现了s1没有的字符
            printf("NO\n");
            return 0;
        }
    }

    // 如果一切正常，说明s2是s1的排列
    printf("YES\n");
    return 0;
} 
