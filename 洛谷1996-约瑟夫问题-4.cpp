//���1996-Լɪ������-4
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	int t;//t��������ջ����Ԫ�� 
	int cnt=1;//��ʼ�������� 
	queue<int>q;//��ʼ��һ������
	cin>>m>>n;//�û����� 
	for(int i=0;i<q.size();i++)
	{
		q.push(i);//��Ԫ��ѹ�����	
	} 
	while(q.size())
	{
		t=q.front();//��������Ԫ�ظ�ֵ��t
		q.pop();//ɾ�����е���Ԫ��
		if(cnt==m)//���� 
		{
			cout<<t<<" ";
			cnt=1;//���ü�����	
		} 
		else
		{
			q.push(t);//��tѹ�����β�� 
			cnt++;	
		}
	}
	return 0;
}
