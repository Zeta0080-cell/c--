//���1996-Լɪ������ 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	queue<int>q;
	for(int i=0;i<n;i++)
	{
		q.push(i);//��Ӳ��� 
	}
	
	int cnt=1;
	while(q.size())//ѭ������ 
	{
		int t=q.front;
		q.pop();
		if(cnt==m)
		{
			cout<<t<<" ";
			cnt=1;
		}
		else
		{
			q.push(t);	
			cnt++;
		}
	return 0;
} 
