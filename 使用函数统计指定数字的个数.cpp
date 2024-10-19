//oj练习第105题
//使用函数统计指定数字的个数
#include<iostream>
#include<cstdio>
using namespace std;
int countdigit(int num,int digit)
{
	int count=0;
	while(num>0)
	{
		if(num%10==digit)
		{
			count++;
		}
		num/=10;
	}
	return count;		
}


int main()
{
	int num,digit;
	printf("请输入你想要判断的数字和位数：\n");
	scanf("%d %d",&num,&digit);	
	printf("%d",countdigit(num,digit));
	return 0;
} 
