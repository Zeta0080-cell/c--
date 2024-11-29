#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	double eps,result,item=1.0;
	int flag=1,mum=1;
	printf("请输入你想要的精度:\n");
	scanf("%lf",&eps);
	while(fabs(item)>=eps)
	{
		result=result+item;
		flag=-flag;
		mum=mum+3;
		item=flag*1.0/mum;
	}
	printf("%lf",result);
	return 0;
}
