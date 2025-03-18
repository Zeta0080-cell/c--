//链表-链表的初始化4
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next;//结点的指针域 
}Node;//定义一个node结构体代表结点，并将其重命名为Node

Node* initList()//定义初始化函数
{
	Node *head=(Node*)malloc(sizeof(Node));//动态分配内存给头结点
	head->data=0;
	head->next=NULL;
	return head;	
} 

int main()
{
	Node *list=initList();//定义一个指向Node结构体的指针变量list,并将函数的返回值传给这个变量 
	return 1; 
} 
