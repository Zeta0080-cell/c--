//前缀和模版
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

int main()
{
	int a[N];
	int s[N];//前缀和数组 
	int n,m;//n个数，m次询问 
	int l,r;
	scanf("%d%d",&n,&m);//获得输入
	for(int i=0;i<n;i++)
	{
		cin>>a[i];//获得数组 
	}
	for(int i=1;i<=n;i++)
	{
		s[i]=s[i-1]+a[i];
	}
	while(n--)
	{
		cin>>l>>r;//获得边界 
		cout<<s[r]-s[l-1]<<endl;
	}
	return 0;
}
 
