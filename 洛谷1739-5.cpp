//���1739-5
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;//����һ���ַ�������
	stack<char>st;//����һ��ջ��׼���ַ�����ջ 
	cin>>s;//����ַ��� 
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
			st.push('(');//��ջ���� 
		}
		
		else if(s[i]==')')
		{
			if(st.empty())
			{
				printf("NO");
			}
		}
		st.pop();//ɾ��ջ����Ԫ�� 
	}
	if(st.empty())
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
