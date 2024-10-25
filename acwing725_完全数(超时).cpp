#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int Perfect(int n)
{
	int flag,item,sum=0,i;
	for(i=1;i<n;i++) 
	{
		if(n%i==0)
		{
		item=i;
		sum=sum+item;
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
	int n,i,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		if(Perfect(m)==1)
		{
			printf("%d is perfect\n",m);		
		}
		else if(Perfect(m)==0)
		{
			printf("%d is not perfect\n",m);	
		}	
	}
	return 0;
}
