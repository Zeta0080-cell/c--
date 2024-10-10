//最大公约数和最小公倍数
//在c语言中求最大公约数通常用辗转相除的方法。
//最小公倍数和最大公约数之间的关系是：两数相乘的积除以这两个数的最大公约数即是最小公倍数 
#include<stdio.h>
int main()
{
	int a,b,c,m,t;
	printf("请输入两个整数：\n");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		t=a;
		a=b;
	    b=t;		
	} 
	m=a*b;
	c=a%b;
	while(c!=0)
	{
		c=a%b;
		a=b;
		b=c;
		c=a%b;
	}
	printf("最大公约数是：%d",b);
	printf("最小公倍数是：%d",m/b);
} 
