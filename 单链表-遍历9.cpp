//单链表-遍历9 
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

void inserthead(Node *L,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));//创建新节点 
	p->data=e;
	p->next=L->next;
	L->next=p;
}

void listnode(Node *L)
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}

int main()
{
	Node *list=initlist();
	inserthead(list,1);
	inserthead(list,2);
	inserthead(list,3);
	listnode(list);
	return 0;
}
