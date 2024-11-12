//猴子吃桃问题—逆向思维 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int result=1;
	int i;
	int item=1;
	for(i=1;i<=9;i++)
	{
		item=(item+1)*2;
	}
	printf("%d",item);
	return 0;
} 
