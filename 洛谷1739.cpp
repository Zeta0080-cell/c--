//���1739
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;//����һ���ַ���
	cin>>s;//�����ַ���
	stack<char>st;
	for(int i=0;i<s.size();i++)//��������ַ��� 
	{
		if(s[i]=='(')
		{
			st.push('(');//�������Ŷ���ջ�� 
		}
		else if(s[i]==')')
		{
			if(st.empty())
			{
				cout<<"No"<<endl;
				return 0;
			}
			st.pop();
		}
	}
	if(st.empty())
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
