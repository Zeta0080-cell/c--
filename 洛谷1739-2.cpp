//���1739-2
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	stack<char>st;//����һ���ַ������͵�ջ
	cin>>s;//����ַ���
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
			st.push('(');//��������ѹ��ջ��	
		}	
		else if(s[i]==')')
		{
			if(st.empty())
			{
				printf("NO\n");
				return 0;
			}
			st.pop();//ɾ��ջ���������� 
		}
	} 
	if(st.empty())
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
} 
