//单链表-头插法3
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

int insertHead(Node *L,ElemType e)//头插法函数 
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;//数据域赋值 
	p->next=L->next;//指针域赋值
	L->next=p; 
}

int main()
{
	Node *list=initList();
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30);
	insertHead(list,40);
	return 0;	
} 
