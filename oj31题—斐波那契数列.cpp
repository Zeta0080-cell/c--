//复盘—斐波那契数列问题 
//利用迭代的思想
#include<stdio.h>
int main()
{
	int i,n,x1,x2,x;
	scanf("%d",&n);
	if(n<1||n>46)
	{
		printf("Invalid.");
	}
	else if(n==1)
	{
		printf("%d",1);
	}
	else
	{
		x1=1;
		x2=1;
		printf("%d %d ",x1,x2);
		for(i=3;i<=n;i++)
		{
			if(i%5==0)
			{
				x=x1+x2;
				printf("%d",x);
			}
			else if(i%5!=0)
			{
				x=x1+x2;
				printf("%d ",x);
			}
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
