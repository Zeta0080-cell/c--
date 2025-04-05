//栈的基本操作 
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10,M=1e3+10;

int a[N],pre[N];

 //top()访问栈顶元素（如果栈为空，此处会出错）
 //push(x)向栈中插入元素x
 //pop()删除栈顶元素
 //size()查询容器中的元素数量
 //empty()询问容器是否为空
 
int main()
{
	stack<int>s1;
	s1.push(2);
	s1.push(1);
	stack<int>s2(s1);
	s1.pop();
	cout<<s1.size()<<" "<<s2.size()<<endl;
	cout<<s1.top()<<" "<<s2.top()<<endl;
	s1.pop();
	cout<<s1.empty()<<" "<<s2.empty()<<endl;
	return 0; 	
} 
