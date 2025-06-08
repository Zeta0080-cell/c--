//链表-在指定位置插入结点5
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

void listNode(Node *L)//链表的遍历
{
	Node *p=L;
	while(p->next!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;	
	}	
} 

Node* get_tail(Node *L)//获得链表尾结点
{
	Node *p=L;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	return p;	
} 

Node* insertTail(Node *tail,ElemType e)//定义尾插函数 
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;//插入数据域
	p=tail->next;
	p->next=NULL;
	return p; 
}

int main()
{
	Node *list=initList();//初始化list 
	Node *tail=get_tail(list);
	tail=insertTail(tail,10);
	tail=insertTail(tail,20);
	tail=insertTail(tail,30);
	listNode(list);
	return 0;
}
