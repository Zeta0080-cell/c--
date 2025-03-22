//单链表-遍历2
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next; 
}Node;

Node* initList()
{
	Node *head=(Node*)malloc(sizeof(Node));//动态分配头结点
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

void listNode(Node *L)
{
	Node *p=L->next;//指针做好遍历准备
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;	
	} 
	printf("\n");
}

int main()
{
	Node *list=initList();//初始化链表 
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30);
	insertHead(list,40);
	listNode(list);
	return 0;
} 
