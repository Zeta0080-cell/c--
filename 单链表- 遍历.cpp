//单链表- 遍历
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next;//结点的指针域 
}Node; 

Node* initList()//初始化函数
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;	
} 

int insertHead(Node *L,ElemType e)//定义头插法函数 
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;
	p->next=L->next;
	L->next=p;
}

void listNode(Node *L)
{
	Node *p=L->next;//将指针p指向链表的头结点
	while(p!=NULL)//当p没有到尾结点的时候一直遍历
	{
		printf("%d\n",p->data);
		p=p->next;//迭代，将p所指向的下一节点重新赋予p 
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
	insertHead(list,40);
	listNode(list);
	return 0;
}
