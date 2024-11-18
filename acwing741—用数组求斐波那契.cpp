#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int fib(int n)
{
	int i;
	long long result;
	long long a[100]={0,1,1};
	for(i=3;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	result=a[n];
	return result;
}
int main()
{
	long long n,item;
	int i,t;
	scanf("%d",&t);
	while(t--)
	{
		cin>>n;
		item=fib(n);
		printf("Fib(%lld) = %lld\n",n,item);
	}
	return 0;
}
