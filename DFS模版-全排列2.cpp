//DFS模版-全排列2 
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int a[N];//储存原数组 
int p[N];//储存路径
bool used[N];//回溯数组 
int n;

void dfs(int x)
{
	if(x==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<p[i]<<' ';
		}
		puts("");
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(!used[i])
		{
			p[x]=a[i];//将原数组储存进入路径
			used[i]=true;//开锁
			dfs(x+1);//回溯 
			used[i]=false;//关锁	
		}
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	dfs(0);
	return 0;
} 
