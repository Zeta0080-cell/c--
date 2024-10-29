#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
int main()
{
	int a,b,n,sum1,sum2,result,flag;
	scanf("%d %d %d",&n,&a,&b);
	if(a<b)
	{
		sum1=n/a;
		flag=(n-sum1*a);
		sum2=flag/b;
		result=sum1+sum2;
	}
	else
	{
		sum1=n/b;
		flag=(n-sum2*b);
		sum2=flag/a;
		result=sum1+sum2;
	}
	printf("%d",result);
	return 0;
}
