//单链表-在指定位置插入元素8
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct node{
	ElemType data;
	struct node *next;
}Node;

Node* initlist()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}
void nodelist(Node *L)
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	} 
}

int insertPos(Node *L,int pos,ElemType e)
{
	int i=0;
	Node *p=L;
	while(i<pos-1)
	{
		p=p->next;
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

int mian()
{
	Node *list=initList();
	insertNode(list,1,10);
	insertNode(list,2,20);
	insertNode(list,3,30);
	listNode(list);
	return 0;
}
