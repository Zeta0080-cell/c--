//������-ͷ�巨����Ԫ�� 
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//����������
	struct node *next; 
}Node; 

Node* initList()
{
	Node *head=(Node*)malloc(sizeof(Node));//��̬�����ڴ�
	head->data=0;
	head->next=NULL;
	return head; 
}

int insertHead(Node *L,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;//��Ԫ�ز��뵽�½��������� 
	p->next=L->next;//�ֽ��²���Ľ��ָ��ͷ������һ�����
	L->next=p;//��ͷ���ָ��p�ĵ�ַ 
}

int main()
{
	Node *list=initList();//��ʼ������
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30); 
	return 1;
}
