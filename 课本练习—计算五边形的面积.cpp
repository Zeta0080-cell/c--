#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double area(double x,double y,double z)
{
	double p;
	double result;
	p=(x+y+z)/2;
	result=sqrt(p*(p-x)*(p-y)*(p-z));
} 
int main()
{
	int a1,a2,a3,a4,a5,a6,a7;
	int sum;
	printf("请输入你的七条边的长度:\n");
	scanf("%lf %lf %lf %lf %lf %lf %lf",&a1,&a2,&a3,&a4,&a5,&a6,&a7);
	sum=area(a1,a5,a6)+area(a4,a6,a7)+area(a2,a3,a7);
	printf("%.2f",sum);
	return 0;
}
