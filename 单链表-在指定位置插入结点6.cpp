//单链表-在指定位置插入结点6
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

void listNode(Node *L)
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
} 

int insertNode(Node *L,int pos,ElemType e)
{
	Node* p=L;
	int i=0;
	while(i<pos-1)
	{
		p=p->next;
		i++;
		if(p==NULL)
		{
			return 0;
		}	
	}	
	Node *q=(Node*)malloc(sizeof(Node));
	q->data=e;
	q->next=p->next;
	p->next=q;
} 

int main()
{
	Node *list=initList();
	insertNode(list,1,10);
	insertNode(list,2,20);
	insertNode(list,3,30);
	listNode(list);
	return 0;
}
