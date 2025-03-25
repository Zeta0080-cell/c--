//������-ɾ���ڵ�2 
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//����������
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
	Node *p=L;//��ָ��pָ�������׽ڵ�
	int i=0;
	while(i<pos-1)
	{
		p=p->next;
		i++;//�ҵ�ǰ��	
		if(p==NULL)
		{
			return 0;
		}
	} 
	if(p->next==NULL)
	{
		printf("ɾ����λ������");
		return 0;
	}
	Node *q=p->next;
	p->next=q->next;
	free(q);
	return 1;
}

int main()
{
	Node *list=initList();//��ʼ������
	insertNode(list,1,10);
	insertNode(list,2,20);
	insertNode(list,3,30);
	listNode(list);
	deleteNode(list,1);
	listNode(list);
	return 0; 
}
