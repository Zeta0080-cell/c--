//Ñ°ÕÒ¡°ÍêÊı¡± 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int Perfect(int n)
{
	int flag;
	int i;
	int sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		flag=1;
	}
	else
	{
		flag=0;
	}
	return flag;
}

int main()
{
	int i;
	for(i=1;i<=1000;i++)
	{
		if(Perfect(i)==1)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
