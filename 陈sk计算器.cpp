#include <stdio.h>
int main ()
{
	double a,b;
	char op;
	printf("«Î ‰»ÎÀ„ Ω");
	scanf("%lf%c%lf",&a,&op,&b);
	if(op=='+')
	{
		printf("%.2f\n",a+b);
	}
	else if(op=='-')
	{
		printf("%.2f\n",a-b);
	}
	else if(op=='*')
	{
		printf("%.2f\n",a*b);
	}
	else if(op=='/')
	{
		printf("%.2f\n",a/b);
	}
	return 0;
}
