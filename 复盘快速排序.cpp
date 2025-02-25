#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

const int N=1e6+10; // 修正数组大小
int q[N]; // 快速排序只需要这一个数组即可 

void quick_sort(int q[], int l, int r) // 传入的参数分别是数组，左右边界
{
    if(l >= r) return; // 递归终止条件

    int i = l - 1, j = r + 1; // 两个指针先偏移再判断，所以这里需要添加偏移量 
    int x = q[(l + r) >> 1]; // x的取值可以任意，这里取中间值

    while(i < j)
    {
        do i++; while(q[i] < x); // 从左向右找到第一个大于等于x的元素
        do j--; while(q[j] > x); // 从右向左找到第一个小于等于x的元素
        if(i < j) swap(q[i], q[j]); // 交换这两个元素
    }

    quick_sort(q, l, j); // 递归处理左半部分
    quick_sort(q, j + 1, r); // 递归处理右半部分
} 

int main()
{
    int n; // n代表需要排序的元素个数
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &q[i]); // 获得这个数组的元素    
    }    
    quick_sort(q, 0, n - 1); // 调用快速排序函数来获得新的数组
    for(int i = 0; i < n; i++)
    {
        printf("%d ", q[i]);    
    } 
    return 0;
}	

