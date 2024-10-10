#include<stdio.h>
int main()
{
	int n,i,result=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	printf("%d",result);
	return 0;
}
