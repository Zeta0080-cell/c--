//基础-循环输出倒三角
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;//三角性的行数
	cin>>n;
	for(int i=0;i<n;i++)//控制行数 
	{
		for(int j=n-i;j>=1;j--)
		{
			printf("* ");	
		}	
		for(int k=0;k<i;k++)
		{
			printf(" ");
		}
		printf("\n");
	} 
	return 0;
}
