//单链表-在指定位置插入结点 
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next;	
}Node; 

Node* initList()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

void listNode(Node *L)
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
	//用来保存插入位置的前驱节点 
	Node *p=L;
	int i=0;
	//遍历链表找到插入位置的前驱节点 
	while(i<pos-1)
	{
		p=p->next;
		i++;
		if(p==NULL)
		{
			return 0; 
		}	
	}
	//要插入的新结点 
	Node *q=(Node*)malloc(sizeof(Node));
	q->data=e;
	q->next=p->next;
	p->next=q;
	return 1;	
} 

int main()
{
	Node *list=initList();
	insertNode(list,1,15);
	insertNode(list,2,2);
	insertNode(list,3,10);
	listNode(list);
	return 0;	
} 
