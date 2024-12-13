//选择法排序 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{ 
	int i,index,k,n,temp;
	int a[20];
	printf("请输入你想要的数组的个数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=0;k<n-1;k++)
	{
		index=k;
		for(i=k+1;i<n;i++)
		{
			if(a[i]<a[index])
			{
				temp=a[index];
				a[index]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
