//单链表-尾插法6
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next;	
}Node; 

Node* initList()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

Node* get_tail(Node *L)
{
	Node *p=L;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	return p;
}

Node* insertTail(Node *tail,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;
	tail->next=p;
	p->next=NULL;
	return p;
}

void nodeList(Node *L)
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}

int main()
{
	Node *list=initList();
	Node *tail=get_tail(list);
	tail=insertTail(tail,10);
	tail=insertTail(tail,20);
	tail=insertTail(tail,30);
	nodeList(list);
	return 0;
}
