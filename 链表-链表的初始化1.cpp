//链表-链表的初始化1
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//数据域
	struct node *next;//指针域，指向下一个链表结构的指针 
}Node; 
//定义链表的结点，包括指针域和数据域 

Node *initList()//单链表的初始化
{
	Node *head = (Node*)malloc(sizeof(Node));//动态分配一个头结点 
	head->data=0;//头结点的数据域为0 
	head->next=NULL;//头结点的next指针初始化为空指针 
	return head;//返回一个结点	
} 

int main()
{
	Node *list=initList();
	return 1;
}
