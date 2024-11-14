//逆序输出数组
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int a[20];
	int i;
	int n;
	int temp; 
	printf("请输入数组的元素个数：\n");
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		int temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	printf("逆序后的数组为：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
	return 0;
 } 
