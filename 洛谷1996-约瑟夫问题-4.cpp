//洛谷1996-约瑟夫问题-4
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	int t;//t用来储存栈顶的元素 
	int cnt=1;//初始化计数器 
	queue<int>q;//初始化一个队列
	cin>>m>>n;//用户输入 
	for(int i=0;i<q.size();i++)
	{
		q.push(i);//将元素压入队列	
	} 
	while(q.size())
	{
		t=q.front();//将队列首元素赋值给t
		q.pop();//删除队列的首元素
		if(cnt==m)//报数 
		{
			cout<<t<<" ";
			cnt=1;//重置计数器	
		} 
		else
		{
			q.push(t);//将t压入队列尾部 
			cnt++;	
		}
	}
	return 0;
}
