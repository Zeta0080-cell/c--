#include<stdio.h>
#include<math.h>
int main()
{
	int n=0;
	int i=0;
	scanf("%d",&n);
	while(i<=n)
	{
		printf("pow(3,%d) = %.1f\n",i,pow(3,i));
		i++;
	}
	return 0;
}
