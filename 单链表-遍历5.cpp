//单链表-遍历5
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//链表的数据域
	struct node *next; 
}Node;

Node* initList()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
} 

int insertHead(Node *L,ElemType e)//头插法函数
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;
	p->next=L->next;
	L->next=p;	
} 

void listNode(Node *L)
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}

int main()
{
	Node *list=initList();
	insertHead(list,1);
	insertHead(list,2);
	insertHead(list,3);
	insertHead(list,4);
	listNode(list);
	return 0;
}
