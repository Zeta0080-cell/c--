#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
void insert (int a[],int size,int j)
{
	int i;
	for(i=size-1;(i>=0)&&(j<=a[i]);i--)
	{
		a[i+1]=a[i];
	}
	a[i+1]=j;
}

int main()
{
	int size=4;
	int a[20]={1,4,6,9};
	int j;
	int i;
	printf("请输入要插入的元素：");
	scanf("%d",&j);
	insert(a,size,j);
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
