//洛谷1739-2
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	stack<char>st;//定义一个字符串类型的栈
	cin>>s;//获得字符串
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
			st.push('(');//将左括号压入栈中	
		}	
		else if(s[i]==')')
		{
			if(st.empty())
			{
				printf("NO\n");
				return 0;
			}
			st.pop();//删除栈顶的左括号 
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
