//双向链表-头插法 
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct node{
	ElemType data;
	struct node *prev,*next;//结点的前后指针 
}Node;

Node* initlist()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	head->prev=NULL;
	return head;
}

int insertHead(Node *L,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;
	p->prev=L;
	p->next=L->next;
	if(L->next!=NULL)
	{
		L->next->prev=p;
	}
	L->next=p;
	return 1;
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

int main()
{
	Node *list=initlist();
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30);
	nodelist(list);
	return 0;
}
