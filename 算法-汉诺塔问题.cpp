//�㷨-��ŵ������ 
#include<bits/stdc++.h>
using namespace std;

void hanoi(int n,char from,char to,char aux)
{
	if(n==1)
	{
		printf("�����Ӵ�%d��%c�ƶ���%c\n",n,from,to);
		return;
	}
	//��n-1�����Ӵ���ʼ���ƶ��������� 
	hanoi(n-1,from,aux,to);
	//�ƶ�n�����ӵ�Ŀ���� 
	printf("������%d��%c�ƶ���%c\n",n,from,to);
	//��n-1�����ӴӸ������ƶ���Ŀ���� 
	hanoi(n-1,aux,to,from);
} 

int main()
{
	int n;
	printf("�����뺺ŵ�����ӵ�����");
	scanf("%d",&n);
	printf("�ƶ���������:\n");
	hanoi(n,'A','C','B');//A����ʼ����C��Ŀ������B�Ǹ����� 
	return 0;
}
