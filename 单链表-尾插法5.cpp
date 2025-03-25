//单链表-尾插法5
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

Node* get_tail(Node *L)//获取尾结点函数
{
	Node *p=L;//让指针p指向L的头结点
	while(p->next!=NULL)
	{
		p=p->next;	
	}	//获得尾结点
	return p; 
} 

Node* insertTail(Node *tail,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));//动态分配一个结点
	p->data=e;//数据域赋值
	tail->next=p;//让尾结点指向新插入的结点 
	p->next=NULL;
	return p; 
}

void nodeList(Node *L)//遍历函数
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);//打印
		p=p->next; 
	}	
} 

int main()
{
	Node *list=initList();
	Node *tail=get_tail(list);//获得list链表的尾结点
	tail=insertTail(tail,10);
	tail=insertTail(tail,20);
	tail=insertTail(tail,30);
	nodeList(list);
	return 0; 
}
