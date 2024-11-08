// 练习实例13-打印水仙花数
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int shui(int n)
{
	int item;
	int sum=0;
	int flag;
	while(n!=0)
	{
		item=n%10;
		sum=sum+pow(item,3); 
		n=n/10;
	}
	if(sum==n)
	{
		flag=1;
	}
	return  flag;
}
int main()
{
	long long int i;
	for(i=100;i<=999;i++)
	{
		if(shui(i)==1)
		{
			printf("%lld",i);
		}
	}
	return 0;
} 
