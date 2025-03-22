//������-����3
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//����������
	struct node *next; 
}Node;

Node* initList()//��ʼ������ 
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

int insertHead(Node *L,ElemType e)//ͷ�巨���� 
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;
	p->next=L->next;
	L->next=p;
}

void listNode(Node *L)//����������� 
{
	Node *p=L->next;//����һ��ָ�����ָ��p
	while(p!=NULL)//��p����β�ڵ�ʱ���� 
	{
		printf("%d\n",p->data);
		p=p->next;
	} 
}

int main()
{
	Node *list=initList();
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30);
	listNode(list);
	return 0;
} 
