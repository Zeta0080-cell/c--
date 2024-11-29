#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int x;//要求的整数
	int m,n;//两个平方数
	int i,j;//过程变量
	for(i=1;i<=168/2;i++)
	{ 
		if(168%i==0)
		{
			j=168/i;
			if((i+j)%2==0&&(i-j)%2==0&&i>j)
			{
				m=(i+j)/2;
				n=(i-j)/2;
				x=n*n-100;
				printf("%d\n",x);
			}
		 } 
	}
	 return 0;
}
