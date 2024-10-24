#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int Prime(int n)
{
	int i,flag;
	if(n==2||n==3)
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
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>n;
		if(Prime(n)==1)
		{
			printf("%d is prime\n",n);
		}
		else
		{
			printf("%d is not prime\n",n);
		}
	}
	return 0;
}
