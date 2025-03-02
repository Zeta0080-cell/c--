//桶排序-level2 (有重复元素) 
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[101];
int main()
{
	int n,tmp;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp;
		a[tmp]++;
	}
	for(int i=1;i<=101;i++)
	{
		if(a[i]!=0)
		{
			for(int j=1;j<=a[i];j++)
			{
				printf("%d ",i);
			}//再嵌套一个循环，用来输出重复的数字 
		}
	}
	return 0;
}


