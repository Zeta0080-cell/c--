#include <stdio.h>

#define MAX 100

int main() {
    int n, i, j, num;
    int arr[MAX][MAX] = {0}; // 假设杨辉三角的最大行数为100

    printf("请输入杨辉三角的行数：");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        arr[i][0] = 1; // 每行的第一个数是1
        arr[i][i] = 1; // 每行的最后一个数是1
        for (j = 1; j < i; j++) {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j]; // 每个数是它正上方两数之和
        }
    }

    // 打印杨辉三角
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

