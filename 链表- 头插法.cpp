//����- ͷ�巨 
//ͷ�巨��ָ��ͷ���ĺ���ȥ����
//��˼������ͷ����nextָ��ָ��ڶ�������data������ 
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//���������� 
	struct node *next;//����һ����Ϊnext��ָ��node��ָ���� 
}Node;

Node *initList()//��ʼ������
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
} 

int insertHead(Node *L,ElemType e)//����ͷ�庯�������������ַ��Ҫ�����Ԫ��
{
	Node *p=(Node*)malloc(sizeof(Node));//����һ���µĵ�ַ�����洢�µĽ�� 
	p->data=e;
	p->next=L->next;//���¿��Ľ��next��ֵ 
	L->next=p;	
} 

int main()
{
	Node *list=initList();
	insertHead(list,10);
	insertHead(list,20); 
	return 1;
} 
