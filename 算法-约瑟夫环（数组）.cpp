//�㷨-Լɪ�򻷣����飩 
#include<bits/stdc++.h>
using namespace std;
int a[110]={0};

int main()
{
	int n,m;
	int cnt=0,i=0,k=0;//cnt��ʾĿǰ���ֵ����� 
	cin>>n>>m;//��ʾ�ܹ���n�ˣ���������mʱ���� 
	while(cnt!=n)
	{
		i++;
		if(i>n)
		{
			i=1;
		}
		if(a[i]==0)//�������������Ǹ�λ�û�û����̭ 
		{
			k++;//k�������� 
			if(k==m)//�Ѿ���������m�� 
			{
				a[i]=1;//1�����Ѿ����� 
				cnt++;//���ֵ���������
				cout<<i<<" ";
				k=0;//�ֲ����������Ϊ0 
			}
		}
	}
	return 0;
} 
