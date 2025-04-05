//洛谷1739-3
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	stack<char>st;//定义一个字符串类型的栈
	cin>>s;//获得字符串
	for(int i=0;i<s.size();i++)//遍历这个字符串
	{
		if(s[i]=='(')
		{
			st.push('(');//左括号入栈 
		}
		else if(s[i]==')')
		{
			if(st.empty())
			{
				printf("NO\n");
			}
		}
		st.pop();//删除栈顶的左括号，继续遍历 
	} 
	if(st.empty())
	{
		printf("YES\n");//遍历结束后，左右括号全都匹配，那么输出yes 
	}
	else
	{
		printf("NO\n");
	}
	return 0;
} 
