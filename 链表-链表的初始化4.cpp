//����-����ĳ�ʼ��4
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int ElemType;
typedef struct node{
	ElemType data;//����������
	struct node *next;//����ָ���� 
}Node;//����һ��node�ṹ������㣬������������ΪNode

Node* initList()//�����ʼ������
{
	Node *head=(Node*)malloc(sizeof(Node));//��̬�����ڴ��ͷ���
	head->data=0;
	head->next=NULL;
	return head;	
} 

int main()
{
	Node *list=initList();//����һ��ָ��Node�ṹ���ָ�����list,���������ķ���ֵ����������� 
	return 1; 
} 
