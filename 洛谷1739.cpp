//洛谷1739
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;//定义一个字符串
	cin>>s;//输入字符串
	stack<char>st;
	for(int i=0;i<s.size();i++)//遍历这个字符串 
	{
		if(s[i]=='(')
		{
			st.push('(');//将左括号读入栈中 
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
