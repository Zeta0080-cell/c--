//���1739-3
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	stack<char>st;//����һ���ַ������͵�ջ
	cin>>s;//����ַ���
	for(int i=0;i<s.size();i++)//��������ַ���
	{
		if(s[i]=='(')
		{
			st.push('(');//��������ջ 
		}
		else if(s[i]==')')
		{
			if(st.empty())
			{
				printf("NO\n");
			}
		}
		st.pop();//ɾ��ջ���������ţ��������� 
	} 
	if(st.empty())
	{
		printf("YES\n");//������������������ȫ��ƥ�䣬��ô���yes 
	}
	else
	{
		printf("NO\n");
	}
	return 0;
} 
