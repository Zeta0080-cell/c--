//洛谷1739-4
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	stack<char>st;//定义一个字符串类型的栈
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
			st.push('(');//左括号压入栈中 
		}
		else if(s[i]==')')
		{
			if(st.empty())
			{
				printf("NO\n");	
			}	
		}	
		st.pop();//删除栈顶的元素 
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
