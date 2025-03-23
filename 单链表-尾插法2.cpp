//������-β�巨2
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

void listNode(Node *L)//����������
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;	
	}	
} 

Node* get_tail(Node *L)//��ȡβ��㺯��
{
	Node *p=L;
	while(p!=NULL)
	{
		p=p->next;
	}
	return p;//�ҵ�p���ҷ���	
} 

Node* insertTail(Node *Tail,ElemType e)//β�巨����,����β���Ͳ����Ԫ�� 
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;//�²������������ֵ 
	Tail->next=p;//��β���ָ���²���Ľ��
	p->next=NULL;//���²���Ľ���ָ����ָ���
	return p; 
}

int main()
{
	Node *list=initList();
	Node *Tail=get_tail(list);
	insertTail(Tail,10);
	insertTail(Tail,20);
	listNode(list);//����������� 
	return 0;
}
