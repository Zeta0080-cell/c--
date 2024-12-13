//课本练习—二分查找算法 
//二分查找的关键在于找到左边界和右边界，然后取这两个数字的中间变量
//mid变量为左边界和右边界的中间变量 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int low=0,high=9,mid,n=10,x;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	printf("请输入你想查找的数字：");
	scanf("%d",&x);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x==a[mid])
		{
			printf("%d",x);
			break;
		}
		else if(x<a[mid])
		{
			high=mid-1;
		}
		else if(x>a[mid])
		{
			low=mid+1;
		}
	}
	if(low<=high)
	{
		printf("Inedex is %d\n",mid);
	}
	else
	{
		printf("Not found");
	}
	return 0;
}
