//单链表应用-查找倒数第k个结点2
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

void countlist(Node *L,int k)//倒数第k个节点
{
	int cnt=0;
	int i=0;
	Node *p=L->next;
	Node *q=L->next;
	while(p!=NULL)
	{
		p=p->next;
		cnt++;	
	}	
	while(i<cnt-k)
	{
		q=q->next;
		i++;
	}
	printf("倒数第k个结点是%d",q->data);
} 

int main()
{
	Node *list=initlist();
	insertNode(list,1,1);
	insertNode(list,2,2);
	insertNode(list,3,3);
	insertNode(list,4,4);
	insertNode(list,5,5);
	countlist(list,3);
	return 0;
}
