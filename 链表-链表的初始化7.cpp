//链表-链表的初始化7
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域 
	struct node *next;//结点的指针域 
}Node;

Node* initList()//初始化链表函数 
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

int main()
{
	Node *list=initList();//定义list指针接受初始化的链表
	return 1; 
}
