//单链表-尾插法
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//节点的数据域
	struct node *next;//节点的指针域 
}Node; 

*Node initList()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

void nodeList(Node *L)//遍历链表函数
{
	Node *p=(Node*)malloc(sizeof(Node));
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next; 
	}
} 

Node* get_tail(Node *L)
{
	Node *p=L;//p指向链表的头结点 
	while(p->next!=NULL)
	{
		p=p->next;
	}
	return p;//找到尾结点 
}

int insertTail(Node *tail,ElemType e)//尾插法函数,记得要传入尾结点 
{
	Node *p=(Node*)malloc(sizeof(Node));//分配结点空间
	p->data=e;//数据域赋值 
	tail->next=p;
	p->next=NULL;//新节点指针域赋值,注意新节点在尾部 
	return p; 
} 

int main()
{
	
	return 0;
}
