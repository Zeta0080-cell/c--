//���ʵ��4-����ת��(�ݹ���ݣ� 
#include<bits/stdc++.h>
using namespace std;

void dt(int n)//ת������
{
	if(n<8)
	{
		printf("%d",n);//��ֹ����	
	}	
	else
	{
		dt(n/8);
		printf("%d",n%8);
	}
} 

int main()
{
	int n;
	cin>>n;
	dt(n);
	return 0;
} 
