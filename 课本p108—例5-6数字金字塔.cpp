//数字金字塔 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int i,j;
	printf("请输入你想要输入的n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}

