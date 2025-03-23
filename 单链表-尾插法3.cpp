//������-β�巨3 
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

Node* get_tail(Node *L)
{
	Node *p=L;//�Ƚ�pָ��L��ͷ���λ�� 
	while(p->next!=NULL)
	{
		p=p->next;
	}
	return p;
}

Node* insertTail(Node *tail,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));//�½���һ�����
	p->data=e;
	tail->next=p;
	p->next=NULL;
	return p; 
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

int main()
{
	Node *list=initList();//��ʼ������ 
	Node *tail=get_tail(list);//���β��� 
	tail=insertTail(tail,10);//��β��㸳ֵ 
	tail=insertTail(tail,20);
	tail=insertTail(tail,30);
	listNode(list);
	return 0;
} 
