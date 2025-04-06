//洛谷1996-约瑟夫问题2
#include<bits/stdc++.h>
using namespace std;

//q.push()往队列的尾部添加元素
//q.front()返回队列的头部元素
//q.back()返回队列的尾部元素
//q.pop()删除第一个元素出队 
//q.size()返回队列中元素的个数 
//q.empty()判断队列是否为空 ,返回布尔类型 

int main()
{
	int m,n;
	int t;//用来储存每次队列的顶部元素 
	int cnt=1;//定义一个计数器 
	cin>>m>>n;//输入m和n
	queue<int>q;//初始化一个队列
	for(int i=0;i<q.size();i++)
	{
		q.push(i);//顺序入队	
	} 
	
	while(q.size())//遍历这个队列 
	{
		t=q.front();//队列的头部元素赋予给t
		q.pop();//删除顶部的元素
		if(cnt==m)
		{
			cout<<t<" ";
			cnt=1;//重置计数器	
		} 
		else
		{	
			q.push(t);//把t重新压入队列尾部
			cnt++;//计数器自加 
		}
	} 
	return 0;
} 

