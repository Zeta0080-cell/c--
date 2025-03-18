//链表-链表的初始化3
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//链表的数据域
	struct node *next;//定义一个名为next的指针，该指针指向node结构体 
}Node; //重名名结构体node为Node

Node *initList()//定义初始化函数
{
	Node *head=(Node*)malloc(sizeof(Node));//定义一个指向头结点的指针，名字为head,动态分配一个内存
	head->data=0;
	head->next=NULL;//初始化头指针的数据域和指针域
	return head;//返回一个头指针	
} 

int main()
{
	Node *list=initList();
	return 1;
}
