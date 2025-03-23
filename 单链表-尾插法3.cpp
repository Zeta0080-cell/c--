//单链表-尾插法3 
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next; 
}Node;

Node* initList()//初始化链表
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;	
} 

Node* get_tail(Node *L)
{
	Node *p=L;//先将p指向L的头结点位置 
	while(p->next!=NULL)
	{
		p=p->next;
	}
	return p;
}

Node* insertTail(Node *tail,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));//新建的一个结点
	p->data=e;
	tail->next=p;
	p->next=NULL;
	return p; 
}

void listNode(Node *L)
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
	Node *list=initList();//初始化链表 
	Node *tail=get_tail(list);//获得尾结点 
	tail=insertTail(tail,10);//给尾结点赋值 
	tail=insertTail(tail,20);
	tail=insertTail(tail,30);
	listNode(list);
	return 0;
} 
