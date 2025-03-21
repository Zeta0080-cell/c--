//单链表-头插法插入元素 
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next; 
}Node; 

Node* initList()
{
	Node *head=(Node*)malloc(sizeof(Node));//动态分配内存
	head->data=0;
	head->next=NULL;
	return head; 
}

int insertHead(Node *L,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;//将元素插入到新结点的数据域 
	p->next=L->next;//现将新插入的结点指向头结点的下一个结点
	L->next=p;//将头结点指向p的地址 
}

int main()
{
	Node *list=initList();//初始化链表
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30); 
	return 1;
}
