//单链表-删除中间节点 
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
		printf("%d",p->data);
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
}

int delMiddleNode(Node *head)
{
	Node *fast=head->next;
	Node *slow=head;
	while(fast!=NULL&&fast->next!=NULL)//第二个是确保fast可以走两步 
	{
		fast=fast->next->next;//快指针每次走一步 
		slow=slow->next;//慢指针每次走两步 
	}
	Node *q=slow->next;
	slow->next=q->next;
	free(q);
	return 1;
}

int main()
{
	Node *list=initlist();
	insertNode(list,1,1);
	insertNode(list,2,2);
	insertNode(list,3,3);
	insertNode(list,4,4);
	insertNode(list,5,5);
	nodelist(list);
	delMiddleNode(list);
	nodelist(list);
	return 0;
}
