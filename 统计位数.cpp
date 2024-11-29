#include <stdio.h>
int main()
{
	int m,count=0;
	scanf("%d",&m);
	if(m==0)
	{
		printf("1\n");
	}
	else if(m<0)
	{
		m=-m;
	}
	while(m!=0)
	{
		m/=10;
		count+=1;
	}

printf("%d\n",count);
return 0;
}

