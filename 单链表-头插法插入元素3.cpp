//������-ͷ�巨����Ԫ��3
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
	head->data=0;//��ʼ������������
	head->next=NULL;//��ʼ������ָ����
	return head; 
}

int insertHead(Node *L,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;
	p->next=L->next;
	L->next=p;
}

int main()
{
	Node *list=initList();
	insertHead(list,10);
	insertHead(list,20);
	return 0;
}
