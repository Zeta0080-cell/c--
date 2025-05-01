//单链表应用-双指针查找倒数第k个元素
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
	q->data=e;//插入数据域 
	q->next=p->next;
	p->next=q; 
	return 1;
}
 
int findNode(Node *L,int k)
{
	Node *fast=L->next;
	Node *slow=L->next;
	for(int i=0;i<k;i++)
	{
		fast=fast->next;	
	}	
	while(fast!=NULL)
	{
		fast=fast->next;
		slow=slow->next;
	}
	printf("倒数第k个结点为%d",slow->data);
} 

int main()
{
	Node *list=initlist();
	insertNode(list,1,1);
	insertNode(list,2,2);
	insertNode(list,3,3);
	insertNode(list,4,4);
	insertNode(list,5,5);
	findNode(list,3);
	return 0;
}
