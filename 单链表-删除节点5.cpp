//单链表-删除节点5
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
	printf("\n");
}

int insertNode(Node *L,int pos,ElemType e)
{
	Node *p=L;
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
	return 1;
}

int deleteNode(Node *L,int pos)
{
	Node *p=L;
	int i=0;
	while(i<pos-1)
	{
		p=p->next;
		if(p==NULL)
		{
			return 0;
		}	
	}	
	Node *q=p->next;
	p->next=q->next;
	free(q);
	return 1;
} 

int main()
{
	Node *list=initlist();//初始化函数
	insertNode(list,1,10);
	insertNode(list,2,20);
	insertNode(list,3,30);
	nodelist(list);
	deleteNode(list,1);
	nodelist(list);
	return 0;
}
