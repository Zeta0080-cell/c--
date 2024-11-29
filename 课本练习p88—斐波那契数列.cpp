//ì³²¨ÄÇÆõÊýÁÐ 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int i,x1,x2,x,n;
	scanf("%d",&n);
	if(n<1||n>46)
	{
		printf("Invalid.\n");
	}
	else if(n==1)
	{
		printf("%10d",1);
	}
	else
	{
		x1=1;
		x2=1;
		printf("%10d%10d",x1,x2);
		for(i=3;i<=n;i++)
		{
			x=x1+x2;
			printf("%10d",x);
			if(i%5==0)
			{
				printf("\n");
			 } 
			 x1=x2;
			 x2=x;
		}
	}
	return 0;
}
