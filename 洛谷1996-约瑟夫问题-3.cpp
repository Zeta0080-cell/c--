//���1996-Լɪ������-3
#include<bits/stdc++.h>
using namespace std;

//q.push()����е�β�����Ԫ��
//q.pop()ɾ�����е��ײ�Ԫ��
//q.front()��ö��е��ײ�Ԫ��
//q.back()��ö��е�β��Ԫ��
//q.size()���ض�����Ԫ�صĸ���
//q.empty()//�ж϶����е�Ԫ���Ƿ�Ϊ�գ����ز������� 

int main()
{
	int m,n;
	int t;//t��������ÿ�ζ��е��ײ�Ԫ�� 
	int cnt=1;//��������ʼ��1 
	cin>>m>>n;//����û�����
	queue<int>q;//��ʼ������
	for(int i=0;i<n;i++)
	{
		q.push(i);//ѹ�����	
	}	
	while(q.size())
	{
		t=q.front();//���е��ײ�Ԫ�ظ�ֵ��t
		q.pop();
		if(cnt==m)
		{
			cout<<t<<" ";
		}
		else 
		{
			q.push(t);
			cnt++;
		}
	}
	return 0;
} 
