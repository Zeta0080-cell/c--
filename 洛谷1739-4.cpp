//���1739-4
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	stack<char>st;//����һ���ַ������͵�ջ
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
			st.push('(');//������ѹ��ջ�� 
		}
		else if(s[i]==')')
		{
			if(st.empty())
			{
				printf("NO\n");	
			}	
		}	
		st.pop();//ɾ��ջ����Ԫ�� 
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
