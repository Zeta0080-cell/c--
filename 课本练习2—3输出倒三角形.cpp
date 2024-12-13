#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k,n,flag;
	printf("请输入你想要的倒三角的行数");
	scanf("%d",&n); 
	for(i=n;i>=1;i--)
	{
		for(j=0;j<=n-i;j++)
		{
			printf(" ");//打印每行图案前的空格 
		}
		for(k=i;k>=1;k--)
		{
			if(k!=1)
			{
				printf("* ");
			}
			else
			{
				printf("*");
			}
		} 
		printf("\n");
	}
	return 0;
} 
