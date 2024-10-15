//acwing660-¡„ ≥
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	float price,result,m,n,i;
	scanf("%f %f",&m,&n);
	if(m==1)
	{
		price=4.00;
	}
	else if(m==2)
	{
		price=4.50;
	}
	else if(m==3)
	{
		price=5.00;
	}
	else if(m==4)
	
	{
		price=2.00;
	}
	else
	{
		price=1.50;
	}
	result=price*n;
	printf("Total: R$ %.2f",result);
	return 0;
} 
