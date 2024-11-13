//判断101-200之间有多少个素数，并输出所有素数。
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int Prime(int n)
{
	int flag;
	int i;
	if(n<=1)
	{
		flag=0;
	}
	else if(n==2||n==3)
	{
		flag=1;
	}
	else
	{
		for(i=2;i<=sqrt(n)+1;i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
			else
			{
				flag=1;
			}
		 } 
	}
	return flag;
}
int main()
{
	int i;
	int count=0;
	for(i=101;i<=200;i++)
	{
		if(Prime(i)==1)
		{
			count=count+1;
			printf("%d\n",i);
		}
	}
	printf("%d",count);
	return 0;
}
