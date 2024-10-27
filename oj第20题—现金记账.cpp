#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
double cash;
void income(double number)
{
	cash=cash+number;
	printf("%.2f\n",cash);
}
void expend(double number)
{
	cash=cash-number;
	printf("%.2f\n",cash);
}
int main()
{
	int choice;
	double value;
	cash=0;
	scanf("%d",&choice);
	while(choice!=0)
	{
		if(choice==1||choice==2)
		{
			scanf("%lf",&value);
			if(choice==1)
			{
				income(value);
			}
			else
			{
				expend(value);
			}
		}
		scanf("%d",&choice);
	}
	return 0;
}
