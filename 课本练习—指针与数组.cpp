#include<stdio.h>
int main()
{
	int *p,i,a[7]={1,1};
	for(i=2;i<7;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(p=a;p<a+7;p++)
	{
		printf("%d,",*p);
	}
	return 0;
}
