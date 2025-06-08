//����-��ָ��λ�ò�����5
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//���������� 
	struct node *next;//����ָ���� 
}Node;

Node* initList()//��ʼ������ 
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

void listNode(Node *L)//����ı���
{
	Node *p=L;
	while(p->next!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;	
	}	
} 

Node* get_tail(Node *L)//�������β���
{
	Node *p=L;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	return p;	
} 

Node* insertTail(Node *tail,ElemType e)//����β�庯�� 
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;//����������
	p=tail->next;
	p->next=NULL;
	return p; 
}

int main()
{
	Node *list=initList();//��ʼ��list 
	Node *tail=get_tail(list);
	tail=insertTail(tail,10);
	tail=insertTail(tail,20);
	tail=insertTail(tail,30);
	listNode(list);
	return 0;
}
