//单链表——头插法6
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next;//结点的指针域 
}Node; 

Node* initList()//初始化函数
{
	Node *head=(Node*)malloc(sizeof(Node));//动态分配头结点内存
	head->data=0;
	head->next=NULL;
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
	Node *list=initList();//初始化链表
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30); 
	return 0;
}
