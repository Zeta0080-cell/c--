//���1996-Լɪ������2
#include<bits/stdc++.h>
using namespace std;

//q.push()�����е�β�����Ԫ��
//q.front()���ض��е�ͷ��Ԫ��
//q.back()���ض��е�β��Ԫ��
//q.pop()ɾ����һ��Ԫ�س��� 
//q.size()���ض�����Ԫ�صĸ��� 
//q.empty()�ж϶����Ƿ�Ϊ�� ,���ز������� 

int main()
{
	int m,n;
	int t;//��������ÿ�ζ��еĶ���Ԫ�� 
	int cnt=1;//����һ�������� 
	cin>>m>>n;//����m��n
	queue<int>q;//��ʼ��һ������
	for(int i=0;i<q.size();i++)
	{
		q.push(i);//˳�����	
	} 
	
	while(q.size())//����������� 
	{
		t=q.front();//���е�ͷ��Ԫ�ظ����t
		q.pop();//ɾ��������Ԫ��
		if(cnt==m)
		{
			cout<<t<" ";
			cnt=1;//���ü�����	
		} 
		else
		{	
			q.push(t);//��t����ѹ�����β��
			cnt++;//�������Լ� 
		}
	} 
	return 0;
} 

