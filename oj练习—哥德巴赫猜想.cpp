#include<stdio.h>
#include<math.h>
int Prime(int n)
{
	int i;
	int flag;
	if(n==2||n==3)
	{
		flag=1;
	}
	else if(n==1)
	{
		flag=0;
	}
	else if(n>3)
	{
		for(i=3;i<=sqrt(n)+1;i++)
		{
			if(n%i==0)
			{
				flag=0;
			}
		}
	}
	else
	{
		flag=1;
	}
	return flag;
}

void strike(int item)
{
	int i;
	for(i=3;i<=item/2;i+=2)
	{
		if(Prime(i)&&Prime(item-i))
		{
			printf("%d=%d+%d",item,i,item-i);
		}
	}
}


int main()
{
	int i,item;
	int count=0;
	for(item=6;item<=100;item+=2)
	{
		Prime(item);
		count++;
		if(count%5==0)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
	return 0;
}
