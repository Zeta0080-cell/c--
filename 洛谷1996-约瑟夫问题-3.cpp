//洛谷1996-约瑟夫问题-3
#include<bits/stdc++.h>
using namespace std;

//q.push()向队列的尾部添加元素
//q.pop()删除队列的首部元素
//q.front()获得队列的首部元素
//q.back()获得队列的尾部元素
//q.size()返回队列中元素的个数
//q.empty()//判断队列中的元素是否为空，返回布尔类型 

int main()
{
	int m,n;
	int t;//t用来储存每次队列的首部元素 
	int cnt=1;//计数器初始化1 
	cin>>m>>n;//获得用户输入
	queue<int>q;//初始化队列
	for(int i=0;i<n;i++)
	{
		q.push(i);//压入队列	
	}	
	while(q.size())
	{
		t=q.front();//队列的首部元素赋值给t
		q.pop();
		if(cnt==m)
		{
			cout<<t<<" ";
		}
		else 
		{
			q.push(t);
			cnt++;
		}
	}
	return 0;
} 
