//栈的基本操作2
#include<bits/stdc++.h>
using namespace std;

//top()访问栈顶元素（如果栈为空，此处会出错）
 //push(x)向栈中插入元素x
 //pop()删除栈顶元素
 //size()查询容器中的元素数量
 //empty()询问容器是否为空

int main()
{
	stack<int>s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	cout<<s1.top()<<"\n"<<endl; 
	s1.pop();//删除栈顶的元素，即最后入栈的元素，就是3
	cout<<s1.top()<<"\n"<<endl;
	return 0; 
}
