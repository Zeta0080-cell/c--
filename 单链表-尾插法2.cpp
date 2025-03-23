//单链表-尾插法2
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next; 
}Node; 

Node* initList()
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
		printf("%d ",p->data);
		p=p->next;	
	}	
} 

Node* get_tail(Node *L)//获取尾结点函数
{
	Node *p=L;
	while(p!=NULL)
	{
		p=p->next;
	}
	return p;//找到p并且返回	
} 

Node* insertTail(Node *Tail,ElemType e)//尾插法函数,传入尾结点和插入的元素 
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;//新插入结点的数据域赋值 
	Tail->next=p;//让尾结点指向新插入的结点
	p->next=NULL;//让新插入的结点的指针域指向空
	return p; 
}

int main()
{
	Node *list=initList();
	Node *Tail=get_tail(list);
	insertTail(Tail,10);
	insertTail(Tail,20);
	listNode(list);//遍历这个链表 
	return 0;
}
