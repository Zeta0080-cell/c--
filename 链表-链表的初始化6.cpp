//����-����ĳ�ʼ��6
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;//�ض���
typedef struct node{
	ElemType data;//�����������
	struct node *next;//�����ָ���� 
}Node;//������node���� 

Node* initList()//��ʼ������ 
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;//��ʼ��������Ϊ0 
	head->next=NULL;//��ʼ��ָ����Ϊ�� 
	return head;
}

int main()
{
	Node *list=initList();//��ָ��listȥ���ܷ��صĽ�� 
	return 1;
}
