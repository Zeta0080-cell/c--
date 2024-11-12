//利用递归函数输出相反字符串
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	char zeta[20];
	int i=0;
	int k;
	while((zeta[i]=getchar())!='\n')//注意运算优先级的问题 
	{
		i++;	
	}	
	zeta[i]='\0';     //在末尾添加数组的结束符 
	k=i-1;
	for(k=i-1;k>=0;k--)   //此时i的值定位在数组末尾，可以直接使用 
	{
		printf("%c",zeta[k]);
	}
	return 0;
} 
