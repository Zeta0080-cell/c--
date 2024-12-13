#include<stdio.h>
int main()
{
	int a=1,flag=1,i,n;
	double b=1,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+b;
		flag=-flag;
		a=a+2;
		b=flag*1.0/a;
	}
	printf("%f",sum);
	return 0;
}
