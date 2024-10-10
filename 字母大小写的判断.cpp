#include<stdio.h>
#include<math.h>
int main()
{
	char c;
	printf("请输入一个字母：");
	scanf("%c",&c);
	if(c>=65&&c<=90)
	{
		printf("这是一个大写字母");
	}
	else
	{
		printf("这是一个小写字母");
	}
	return 0;
}
