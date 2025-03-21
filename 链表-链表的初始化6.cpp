//链表-链表的初始化6
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;//重定义
typedef struct node{
	ElemType data;//链表的数据域
	struct node *next;//链表的指针域 
}Node;//重命名node名字 

Node* initList()//初始化函数 
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;//初始化数据域为0 
	head->next=NULL;//初始化指针域为空 
	return head;
}

int main()
{
	Node *list=initList();//用指针list去接受返回的结点 
	return 1;
}
