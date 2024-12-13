//课本练习—求出矩阵最大值所在的位置 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#define MAXM 6
#define MAXN 6
using namespace std;
int main()
{
	int col,i,j,m,n,row;
	int a[MAXM][MAXN];
	printf("请输入你想要的数组的行数和列数");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);//从用户手中拿到数组的各个元素 
		}
	}
	row=col=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>a[row][col])
			{
				row=i;
				col=j;
			}
		}
	}
	printf("max=a[%d][%d]=%d\n",row,col,a[row][col]);
	return 0;
}
