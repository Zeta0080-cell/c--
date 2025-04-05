//栈的基本操作5
#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<int>s1;
	s1.push(1);
	s1.push(2);
	s1.push(3); 
	cout<<s1.top()<<endl;
	s1.pop();//删除栈顶的元素
	cout<<s1.top()<<endl; 
	return 0;
} 
