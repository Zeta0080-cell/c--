//正整数分解质因数 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int Prime(int n)
{
	int flag;
	int i;
	if(n==2||n==3)
	{
		flag=1;
	}
	else if(n<=1)
	{
		flag=0;
	}
	else if(n>=2)
	{
		for(i=2;i<=sqrt(n)+1;i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
				flag=1;
		}
	}
	return flag;
 } 
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if((Prime(i)==1)&&(n%i==0))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
