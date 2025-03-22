//单链表-遍历4
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next;
}Node;

Node* initList()//初始化函数
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;//初始化结点
	return head; 
} 

int insertHead(Node *L,ElemType e)//头插法
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;//新结点的数据域插入 
	p->next=L->next;//让新节点指向头结点的下一元素 
	L->next=p;//让头节点指向结点p 
} 

void listNode(Node *L)//遍历链表
{
	Node *p=L->next;//让p指向L的指针域
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;//迭代指针域 
	}
	printf("\n");
} 

int main()
{
	Node *list=initList();
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30);
	insertHead(list,40);
	listNode(list);
	return 0;	
} 
