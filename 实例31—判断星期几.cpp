#include <stdio.h>
#include <string.h>

int main() {
    char day[10];

    // 提示用户输入星期几的第一个字母
    printf("请输入星期几的第一个字母：");
    scanf("%s", day);

    // 判断星期几
    if (day[0] == 'M' || day[0] == 'm') {
        // 如果第一个字母是'M'，则判断第二个字母
        if (day[1] == 'o' || day[1] == 'O') {
            printf("星期一\n");
        } else {
            printf("星期三\n");
        }
    } else if (day[0] == 'T' || day[0] == 't') {
        // 如果第一个字母是'T'，则判断第二个字母
        if (day[1] == 'u' || day[1] == 'U') {
            printf("星期二\n");
        } else {
            printf("星期四\n");
        }
    } else if (day[0] == 'W' || day[0] == 'w') {
        printf("星期三\n");
    } else if (day[0] == 'F' || day[0] == 'f') {
        printf("星期五\n");
    } else if (day[0] == 'S' || day[0] == 's') {
        // 如果第一个字母是'S'，则判断第二个字母
        if (day[1] == 'a' || day[1] == 'A') {
            printf("星期六\n");
        } else {
            printf("星期天\n");
        }
    } else {
        printf("输入无效，请输入一个有效的星期几的第一个字母。\n");
    }

    return 0;
}
