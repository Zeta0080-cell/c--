//������-����4
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
	head->next=NULL;//��ʼ�����
	return head; 
} 

int insertHead(Node *L,ElemType e)//ͷ�巨
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;//�½������������ 
	p->next=L->next;//���½ڵ�ָ��ͷ������һԪ�� 
	L->next=p;//��ͷ�ڵ�ָ����p 
} 

void listNode(Node *L)//��������
{
	Node *p=L->next;//��pָ��L��ָ����
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;//����ָ���� 
	}
	printf("\n");
} 

int main()
{
	Node *list=initList();
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30);
	insertHead(list,40);
	listNode(list);
	return 0;	
} 
