//ǰ׺��
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	vector<int>prefix(n);//����һ����̬���������洢ǰ׺��
	vector<int>arr(n);	
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		prefix[i]=sum;//��������������Ԫ�ؾ���0��i�ĺ� 
	} 
	return 0;
} 
