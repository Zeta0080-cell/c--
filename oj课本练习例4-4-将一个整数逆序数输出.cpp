//oj课本练习例4-4-将一个整数逆序数输出 
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,num,i;
	printf("请输入一个你想要的数字：\n");
	scanf("%d",&n);
	do
	{
		num=n%10;
		n=n/10;
		printf("%d",num);
	}
	while(n!=0);
	return 0;
}
