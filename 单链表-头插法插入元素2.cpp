//单链表-头插法插入元素3
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next;//结点的指针域 
}Node;

Node* initList()//初始化函数 
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;//初始化结点的数据域
	head->next=NULL;//初始化结点的指针域
	return head; 
}

int insertHead(Node *L,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;
	p->next=L->next;
	L->next=p;
}

int main()
{
	Node *list=initList();
	insertHead(list,10);
	insertHead(list,20);
	return 0;
}
