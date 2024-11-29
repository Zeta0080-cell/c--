#include<stdio.h>
#include<math.h>
int Prime(int n)
{
	int i,flag;
	if(n<=1)
	{
		flag=0;
	}
	else if(n==2||n==3)
	{
		flag=1;
	}
	else
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
	int i;
	for(i=100;i<=200;i++)
	{
		if(Prime(i)==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
