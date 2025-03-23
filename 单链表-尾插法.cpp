//����-β�巨
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//�ڵ��������
	struct node *next;//�ڵ��ָ���� 
}Node; 

Node *initList()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

void listNode(Node *L)//����������
{
	Node *p=L->next;
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
} 

int main()
{
	Node *list=initList();//��ʼ���������
	Node *Tail=get_tail(list);//�����������β���
	insertTail(list,10);
	insertTail(list,20);
	insertTail(list,30);
	insertTail(list,40);
	insertTail(list,50);
	listNode(list);	
	return 0;
}
