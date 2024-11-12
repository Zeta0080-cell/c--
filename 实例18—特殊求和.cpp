// 求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加由键盘控制。
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n;             
	int a;             
	int sum=0;
	int i;
	int item;           //临时变量储存a的值 
	scanf("%d",&n);     //键盘输入要相加数的个数
	scanf("%d",&a);               
	for(i=1;i<=n;i++)
	{
		sum=sum+item;
		item=item*10+a;
	} 
	printf("%d",sum);
	return 0;
}
