//双向链表-删除节点3
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct node{
	ElemType data;
	struct node *prev,*next;
}Node; 

Node* initlist()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	head->prev=NULL;
	return head; 
}

Node* insertTail(Node *tail,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;
	p->prev=tail;
	tail->next=p;
	p->next=NULL;
	return p;
}

Node* get_tail(Node *L)
{
	Node *p=L;
	while(p->next!=NULL)
	{
		p=p->next;	
	}
	return p;	
} 

void nodelist(Node *L)//链表遍历 
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}

int deleteNode(Node *L,int pos)
{
	Node *p=L;
	int i=0;
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
	Node *q=(Node*)malloc(sizeof(Node));
	q=p->next;
	p->next=q->next;//p跳过要删除节点
	q->next->prev=p;//双向指针 
	free(q);
	return 1;
}

int main()
{
	Node *list=initlist();
	Node *tail=get_tail(list);
	tail=insertTail(tail,1);
	tail=insertTail(tail,2);
	tail=insertTail(tail,3);
	nodelist(list);
	deleteNode(list,1);
	printf("\n");
	nodelist(list);
	return 0;
}
