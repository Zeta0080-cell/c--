//检查字符类型，要求用户输入一个字符，通过ASCii码来判断
#include<stdio.h>
int main()
{
	char c;
	printf("请输入一个字母：");
	scanf("%c",&c);
	if(c>=65&&c<=90)
	{
		printf("输入的是一个大写字母\n");
	}
	else if(c>=97&&c<=122)
	{
		printf("输入的是一个小写字母\n");
	}
	else if(c>=48&&c<=57)
	{
		printf("输入的是一个数字");
	}
	return 0;
 } 
