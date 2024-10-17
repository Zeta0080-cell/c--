//格里高利公式复盘 
#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	int flag=1,denominator=1;
	double eps,item=1,pi=0;
	flag=1;
	denominator=1;
	pi=0;
	item=1.0;
	printf("请输入你想要的精度：\n");
	scanf("%lf",&eps);
	while(fabs(item)>=eps)
	{
		pi=pi+item;
		flag=-flag;
		denominator=denominator+2;
		item=flag*1.0/denominator;
	}
	pi=pi*4;
	printf("pi=%.4f\n",pi);
	return 0;
}
