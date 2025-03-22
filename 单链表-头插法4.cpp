//单链表-头插法4
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
	head->data=0;
	head->next=NULL;
	return head;	
} 

int insertHead(Node *L,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;//插入结点的数据域 
	p->next=L->next;//插入结点的指针域
	L->next=p;//让指针p指向L的指针域 
}

int main()
{
	Node *list=initList();
	insertHead(list,10);
	insertHead(list,20);
	return 0;	
} 
