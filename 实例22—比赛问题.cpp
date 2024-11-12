//比赛问题
 #include <stdio.h>

int main() {
    // 甲队成员
    char teamA[3] = {'a', 'b', 'c'};
    // 乙队成员
    char teamB[3] = {'x', 'y', 'z'};

    // 打印比赛对阵情况
    printf("%c vs %c\n", teamA[0], teamB[2]); // a vs z
    printf("%c vs %c\n", teamA[1], teamB[0]); // b vs x
    printf("%c vs %c\n", teamA[2], teamB[1]); // c vs y

    return 0;
}
