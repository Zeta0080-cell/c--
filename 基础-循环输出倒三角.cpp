//����-ѭ�����������
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;//�����Ե�����
	cin>>n;
	for(int i=0;i<n;i++)//�������� 
	{
		for(int j=n-i;j>=1;j--)
		{
			printf("* ");	
		}	
		for(int k=0;k<i;k++)
		{
			printf(" ");
		}
		printf("\n");
	} 
	return 0;
}
