//数据结构-寻找最小元素(Node)
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct Node{
	ElemType data;//数据域 
	struct Node *next;//指针域 
}Node; 

Node* initlist()//初始化
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;	
} 

void createList(Node *L,int n)
{
	Node *p=L;
	for(int i=0;i<n;i++)
	{
		Node *q=(Node*)malloc(sizeof(Node));
		cin>>q->data;
		p->next=q;
		p=q;
	}
	p->next=NULL;//尾节点为空 
}

ElemType findMin(Node *L)//查找最小元素函数 
{
	ElemType min=100000;
	Node *p=L->next;
	while(p!=NULL)
	{
		int i=0;
		if(min>p->data)
		{
			min=p->data;
		}
		p=p->next;
		i++;
	}
	return min;
}

int main()
{
	int n;
	ElemType result;
	cin>>n;
	Node *list=initlist();
	createList(list,n); 
	result=findMin(list);
	printf("%d\n",result);
	return 0;
}
