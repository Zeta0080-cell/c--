//单链表-头插法2
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

int insertHead(Node *L,ElemType e)//传入两个参数，分别是指针头结点和传值的数字 
{
	Node *p=(Node*)malloc(sizeof(Node));//动态分配新结点p
	p->data=e;//插入数据域 
	p->next=L->next;//将头指针的指针域赋值给p的指针域
	L->next=p;//将头指针指向新插入的结点
}

int main()
{
	Node *list=initList();
	insertHead(list,20);
	insertHead(list,30);
	return 0;
}
