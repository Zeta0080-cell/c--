//链表-链表的初始化
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;
	struct node *next;
}Node;//链表的存储结构

Node* initList()
{
	Node *head = (Node*)malloc(sizeof(Node));
	head->data = 0;
	head->next = NULL;
	return head; 
}

int main()
{
	Node *list = initList();
	return 1;
}
  
