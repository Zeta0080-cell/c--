//DFSģ��-ȫ����2 
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int a[N];//����ԭ���� 
int p[N];//����·��
bool used[N];//�������� 
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
			p[x]=a[i];//��ԭ���鴢�����·��
			used[i]=true;//����
			dfs(x+1);//���� 
			used[i]=false;//����	
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
