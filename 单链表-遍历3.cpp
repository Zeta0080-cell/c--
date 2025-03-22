//单链表-遍历3
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next; 
}Node;

Node* initList()//初始化链表 
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

void listNode(Node *L)//链表遍历函数 
{
	Node *p=L->next;//定义一个指向结点的指针p
	while(p!=NULL)//当p不是尾节点时遍历 
	{
		printf("%d\n",p->data);
		p=p->next;
	} 
}

int main()
{
	Node *list=initList();
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30);
	listNode(list);
	return 0;
} 
