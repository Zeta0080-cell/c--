//（重）数据结构- 删除最大元素(Node)
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

ElemType findMax(Node *L)//查找最小元素函数 
{
	ElemType max=L->next->data;
	Node *p=L->next;
	while(p!=NULL)
	{
		if(max<p->data)
		{
			max=p->data;
		}
		p=p->next;
	}
	return max;
}

void deleteNode(Node *L,ElemType e)
{
	Node *prev=L;
	Node *p=L->next;
	while(p!=NULL)
	{
		if(p->data==e)
		{
			Node *q=p;
			prev->next=p->next;
			free(q);
		}
		prev=p;//prev为p的前驱结点 
		p=p->next;
	}
}

void listNode(Node *L)//遍历链表
{
	Node *p=L->next;//让p指向L的指针域
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;//迭代指针域 
	}
} 

int main()
{
	int n;
	ElemType max;
	cin>>n;
	Node *list=initlist();
	createList(list,n); 
	max=findMax(list);
	deleteNode(list,max);
	listNode(list);
	return 0;
} 
