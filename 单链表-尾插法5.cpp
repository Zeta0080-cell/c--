//������-β�巨5
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

Node* get_tail(Node *L)//��ȡβ��㺯��
{
	Node *p=L;//��ָ��pָ��L��ͷ���
	while(p->next!=NULL)
	{
		p=p->next;	
	}	//���β���
	return p; 
} 

Node* insertTail(Node *tail,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));//��̬����һ�����
	p->data=e;//������ֵ
	tail->next=p;//��β���ָ���²���Ľ�� 
	p->next=NULL;
	return p; 
}

void nodeList(Node *L)//��������
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);//��ӡ
		p=p->next; 
	}	
} 

int main()
{
	Node *list=initList();
	Node *tail=get_tail(list);//���list�����β���
	tail=insertTail(tail,10);
	tail=insertTail(tail,20);
	tail=insertTail(tail,30);
	nodeList(list);
	return 0; 
}
