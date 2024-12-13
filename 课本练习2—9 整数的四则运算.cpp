#include<stdio.h>
#include<math.h>
int main()
{
	int m,n;
	double a,b,c,d;
	printf("请输入你想要参加运算的数字。");
	scanf("%d%d",&m,&n);
	a=m+n;
	b=m-n;
	c=m*n;
	d=m/n;
	printf("%d + %d = %.0lf\n",m,n,a);
	printf("%d - %d = %.0lf\n",m,n,b);
	printf("%d * %d = %.0lf\n",m,n,c);
	printf("%d / %d = %.0lf\n",m,n,d);
	return 0;
}
