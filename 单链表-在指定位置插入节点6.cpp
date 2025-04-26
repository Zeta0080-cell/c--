//单链表-在指定位置插入节点6
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

void nodelist(Node *L)//遍历函数 
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
	Node *list=initlist();
	insertPos(list,1,10);
	insertPos(list,2,20);
	insertPos(list,3,30);
	nodelist(list);
	return 0;
}
