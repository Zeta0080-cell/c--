#include <stdio.h>
int main() 
{
    int n;

    // 获取数组的大小
    printf("请输入数组元素的个数：");
    scanf("%d", &n);

    int a[n];  // 创建数组来存储元素

    // 输入数组元素
    printf("请输入数组的元素：\n");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }

    // 假设第一个元素是最大值，最后一个元素是最小值
    int max_idx = 0, min_idx = 0;

    // 查找最大值和最小值的索引
    for (int i = 1; i < n; i++) 
	{
        if (a[i] > a[max_idx]) 
		{
            max_idx = i;
        }
        if (a[i] < a[min_idx]) 
		{
            min_idx = i;
        }
    }

    // 交换最大值和第一个元素
    if (max_idx != 0) 
	{
        int temp = a[max_idx];
        a[max_idx] = a[0];
        a[0] = temp;
    }

    // 交换最小值和最后一个元素
    if (min_idx != n - 1) 
	{
        int temp = a[min_idx];
        a[min_idx] = a[n - 1];
        a[n - 1] = temp;
    }

    // 输出修改后的数组
    printf("修改后的数组：\n");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
