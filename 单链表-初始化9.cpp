//单链表-初始化9 
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next;//结点的指针域	
}Node;

Node* initList()//初始化函数 
{
	Node *head=(Node*)malloc(sizeof(Node));//动态分配结点内存
	head->data=0;
	head->next=NULL;
	return head;//返回头结点 
}

int main()
{
	Node *list=initList();
	return 0;
}
