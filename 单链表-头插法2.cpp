//������-ͷ�巨2
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

int insertHead(Node *L,ElemType e)//���������������ֱ���ָ��ͷ���ʹ�ֵ������ 
{
	Node *p=(Node*)malloc(sizeof(Node));//��̬�����½��p
	p->data=e;//���������� 
	p->next=L->next;//��ͷָ���ָ����ֵ��p��ָ����
	L->next=p;//��ͷָ��ָ���²���Ľ��
}

int main()
{
	Node *list=initList();
	insertHead(list,20);
	insertHead(list,30);
	return 0;
}
