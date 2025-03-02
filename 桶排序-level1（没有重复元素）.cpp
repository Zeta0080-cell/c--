//桶排序-level1(没有重复元素) 
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[11];//下标代表每个桶上的标签 
int main()
{
	int n;
	int tmp;//这个tmp非常巧妙，其代表每次暂存的数字 
	cin>>n;
	for(int i=1;i<n+1;i++)
	{
		cin>>tmp;
		a[tmp]++;
	}  
	for(int i=1;i<11;i++)//i代表桶所代表的数字
	{
		if(a[i]!=0)
		{
			printf("%d ",i);	
		}	
	} 
	return 0;
}
