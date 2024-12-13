//格里高利公式 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int denominator,flag,i;
	double eps,item,pi;
	printf("请输入你想要的精度：\n");
	scanf("%lf",&eps);
	i=1;
	flag=1;
	denominator=1;
	item=1.0;
	pi=0;
	while(fabs(item)>=eps)
	{
		pi=pi+item;
		i++;
		flag=-flag;
		denominator=denominator+2;
		item=flag*1.0/denominator;	
	} 
	pi=pi+item;
	pi=pi*4;
	printf("pi=%.4f\n",pi);
	return 0;
}
