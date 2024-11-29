//统计一个数的位数 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int count=0,n;
	printf("请输入你想统计的数字:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;	
	}	
	printf("%d",count);
	return 0;
}
