#include<stdio.h>
#include<math.h>
int even(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int n,sum=0;
	do
	{
		scanf("%d",&n);
		if(even(n)==0)
		{
			sum=sum+n;
		}
	}while(n>0);
	printf("%d",sum);
	return 0;
}
