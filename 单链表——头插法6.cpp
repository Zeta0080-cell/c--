//��������ͷ�巨6
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//����������
	struct node *next;//����ָ���� 
}Node; 

Node* initList()//��ʼ������
{
	Node *head=(Node*)malloc(sizeof(Node));//��̬����ͷ����ڴ�
	head->data=0;
	head->next=NULL;
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
	Node *list=initList();//��ʼ������
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30); 
	return 0;
}
