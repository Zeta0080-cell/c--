//oj练习第96题—使用函数求余弦函数的近似值 
#include<stdio.h>
#include<math.h>
double function(double e,double x)
{
	double sum=1.0;
	double term=1.0;
	double n=2.0;
	double lastTerm;
	do
	{
		lastTerm=term;
		term*=-x*x/(n*(n-1));
		sum+=term;
		n+=2;
	}while(fabs(term)>=e);
	return sum;
}
int main()
{
	double e,x;
	scanf("%lf %lf",&e,&x);
	double result=function(e,x);
	printf("cos(%.2f)的近似值是%.6f\n",x,result);
	return 0;
}
