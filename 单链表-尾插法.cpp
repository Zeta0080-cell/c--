//������-β�巨
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//�ڵ��������
	struct node *next;//�ڵ��ָ���� 
}Node; 

*Node initList()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

void nodeList(Node *L)//����������
{
	Node *p=(Node*)malloc(sizeof(Node));
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next; 
	}
} 

Node* get_tail(Node *L)
{
	Node *p=L;//pָ�������ͷ��� 
	while(p->next!=NULL)
	{
		p=p->next;
	}
	return p;//�ҵ�β��� 
}

int insertTail(Node *tail,ElemType e)//β�巨����,�ǵ�Ҫ����β��� 
{
	Node *p=(Node*)malloc(sizeof(Node));//������ռ�
	p->data=e;//������ֵ 
	tail->next=p;
	p->next=NULL;//�½ڵ�ָ����ֵ,ע���½ڵ���β�� 
	return p; 
} 

int main()
{
	
	return 0;
}
