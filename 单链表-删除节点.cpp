//������-ɾ���ڵ�
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
	//Ҫɾ���ڵ��ǰ�� 
	Node *p=L;
	int i=0;
	//���������ҵ�Ҫɾ���ڵ��ǰ�� 
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
		printf("Ҫɾ����λ�ô���\n");
		return 0;
	}
	//qָ��Ҫɾ���Ľ�� 
	Node *q=p->next;
	//��Ҫɾ���ڵ��ǰ��ָ��Ҫɾ���ڵ�ĺ�� 
	p->next=q->next;
	//�ͷ�Ҫɾ���ڵ���ڴ�ռ� 
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
