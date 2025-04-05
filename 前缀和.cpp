//前缀和
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	vector<int>prefix(n);//创建一个动态数组用来存储前缀和
	vector<int>arr(n);	
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		prefix[i]=sum;//这个数组所代表的元素就是0到i的和 
	} 
	return 0;
} 
