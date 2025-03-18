//链表- 头插法 
//头插法是指往头结点的后面去插入
//意思就是让头结点的next指针指向第二个结点的data数据域 
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域 
	struct node *next;//定义一个名为next的指向node的指针域 
}Node;

Node *initList()//初始化函数
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
} 

int insertHead(Node *L,ElemType e)//定义头插函数，传入链表地址和要插入的元素
{
	Node *p=(Node*)malloc(sizeof(Node));//开辟一个新的地址用来存储新的结点 
	p->data=e;
	p->next=L->next;//给新开的结点next域赋值 
	L->next=p;	
} 

int main()
{
	Node *list=initList();
	insertHead(list,10);
	insertHead(list,20); 
	return 1;
} 
