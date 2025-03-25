//单链表-删除节点
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
	printf("\n");
} 

int insertNode(Node *L,int pos,ElemType e)
{
	Node* p=L;
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
int deleteNode(Node *L,int pos)
{
	//要删除节点的前驱 
	Node *p=L;
	int i=0;
	//遍历链表，找到要删除节点的前驱 
	while(i<pos-1)
	{
		p=p->next;
		i++;
		if(p==NULL)
		{
			return 0;
		}
	}
	if(p->next==NULL)
	{
		printf("要删除的位置错误\n");
		return 0;
	}
	//q指向要删除的结点 
	Node *q=p->next;
	//让要删除节点的前驱指向要删除节点的后继 
	p->next=q->next;
	//释放要删除节点的内存空间 
	free(q);
	return 1;
}

int main()
{
	Node *list=initList();
	insertNode(list,1,10);
	insertNode(list,2,20);
	insertNode(list,3,30);
	listNode(list);
	deleteNode(list,2);
	listNode(list);
	return 0;
} 
