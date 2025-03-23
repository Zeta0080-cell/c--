//链表-尾插法
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//节点的数据域
	struct node *next;//节点的指针域 
}Node; 

Node *initList()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

void listNode(Node *L)//遍历链表函数
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next; 
	}
} 

Node* get_tail(Node *L)
{
	Node *p=L;//p指向链表的头结点 
	while(p->next!=NULL)
	{
		p=p->next;
	}
	return p;//找到尾结点 
}

int insertTail(Node *tail,ElemType e)//尾插法函数,记得要传入尾结点 
{
	Node *p=(Node*)malloc(sizeof(Node));//分配结点空间
	p->data=e;//数据域赋值 
	tail->next=p;
	p->next=NULL;//新节点指针域赋值,注意新节点在尾部	 
} 

int main()
{
	Node *list=initList();//初始化这个链表
	Node *Tail=get_tail(list);//获得这个链表的尾结点
	insertTail(list,10);
	insertTail(list,20);
	insertTail(list,30);
	insertTail(list,40);
	insertTail(list,50);
	listNode(list);	
	return 0;
}
