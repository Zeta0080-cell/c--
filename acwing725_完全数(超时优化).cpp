//优化思路：若x能整除d，那么x也能整除x/d 
//这样在枚举的时候只用枚举sqrt(x)个数
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int Perfect(int n)
{
	int flag,item,sum=0,i;
	for(i=1;i*i<=n;i++) 
	{
		if(n%i==0)
		{
			if(i<n)
			{
				sum+=i;
			}
			 if(i!=n/i&&n/i<n)
			{
				sum+=n/i;
			}
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
