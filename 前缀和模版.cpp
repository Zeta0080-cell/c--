//ǰ׺��ģ��
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

int main()
{
	int a[N];
	int s[N];//ǰ׺������ 
	int n,m;//n������m��ѯ�� 
	int l,r;
	scanf("%d%d",&n,&m);//�������
	for(int i=0;i<n;i++)
	{
		cin>>a[i];//������� 
	}
	for(int i=1;i<=n;i++)
	{
		s[i]=s[i-1]+a[i];
	}
	while(n--)
	{
		cin>>l>>r;//��ñ߽� 
		cout<<s[r]-s[l-1]<<endl;
	}
	return 0;
}
 
