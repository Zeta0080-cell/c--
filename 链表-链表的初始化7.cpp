//����-����ĳ�ʼ��7
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//���������� 
	struct node *next;//����ָ���� 
}Node;

Node* initList()//��ʼ�������� 
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

int main()
{
	Node *list=initList();//����listָ����ܳ�ʼ��������
	return 1; 
}
