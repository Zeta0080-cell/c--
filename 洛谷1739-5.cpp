//洛谷1739-5
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;//定义一个字符串类型
	stack<char>st;//定义一个栈，准备字符串入栈 
	cin>>s;//获得字符串 
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
			st.push('(');//入栈操作 
		}
		
		else if(s[i]==')')
		{
			if(st.empty())
			{
				printf("NO");
			}
		}
		st.pop();//删除栈顶的元素 
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
