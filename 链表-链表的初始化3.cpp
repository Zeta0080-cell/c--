//����-����ĳ�ʼ��3
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//�����������
	struct node *next;//����һ����Ϊnext��ָ�룬��ָ��ָ��node�ṹ�� 
}Node; //�������ṹ��nodeΪNode

Node *initList()//�����ʼ������
{
	Node *head=(Node*)malloc(sizeof(Node));//����һ��ָ��ͷ����ָ�룬����Ϊhead,��̬����һ���ڴ�
	head->data=0;
	head->next=NULL;//��ʼ��ͷָ����������ָ����
	return head;//����һ��ͷָ��	
} 

int main()
{
	Node *list=initList();
	return 1;
}
