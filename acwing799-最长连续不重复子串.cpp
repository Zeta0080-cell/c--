//acwing799-��������ظ��Ӵ� 
#include<bits/stdc++.h>
using namespace std;
const int N=100010;

int n;
int a[N],s[N];

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	} 
	int res=0;
	for(int i=0,j=0;i<n;i++)
	{
		s[a[i]]++;//��¼��ǰa[i]���ֵĴ��� 
		while(s[a[i]]>1)
		{
			s[a[j]]--;
			j++;
		}
		res=max(res,i-j+1);
	} 
	printf("%d",res);
	return 0;
}
