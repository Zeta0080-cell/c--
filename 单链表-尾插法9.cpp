//µ¥Á´±í-Î²²å·¨9
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

Node* get_tail(Node *L)
{
	Node *p=L;
	while(p->next!=NULL)
	{
		p->next=p;
	}
	return p;
}

Node* insertTail(Node *tail,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;
	tail->next=p;
	p->next=NULL;
	return p;
}

int main()
{
	Node *list=initlist();
	Node *tail=get_tail(list);
	tail=insertTail(tail,1);
	tail=insertTail(tail,2);
	tail=insertTail(tail,3);
	nodelist(list);
	return 0;
}
