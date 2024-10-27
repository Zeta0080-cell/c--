#include<iostream>
#include<cstdio>
using namespace std;
double cash;
int main()
{
	int choice;
	double value;
	void income(double number),expand(double number);
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
				expand(value);
			}
			printf("%.2f\n",cash);
		}	
	}
	scanf("%d",&choice);
	return 0;	
}

void income(double number)
{
	cash=cash+number;
}
void expand(double number)
{
	cash=cash-number;
}
