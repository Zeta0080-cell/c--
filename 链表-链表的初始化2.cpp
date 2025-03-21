//链表-链表的初始化2
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//链表的数据域
	struct node *next;//链表的指针域,指针next指向结点Node 
}Node; 

Node* initList()//链表初始化函数
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;//定义一个空指针 
	return head; 
} 

int main()
{
	Node *list=initList();//定义一个变量来接受头指针 
	return 1;
}
