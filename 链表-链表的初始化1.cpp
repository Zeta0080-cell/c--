//����-����ĳ�ʼ��1
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//������
	struct node *next;//ָ����ָ����һ������ṹ��ָ�� 
}Node; 
//��������Ľ�㣬����ָ����������� 

Node *initList()//������ĳ�ʼ��
{
	Node *head = (Node*)malloc(sizeof(Node));//��̬����һ��ͷ��� 
	head->data=0;//ͷ����������Ϊ0 
	head->next=NULL;//ͷ����nextָ���ʼ��Ϊ��ָ�� 
	return head;//����һ�����	
} 

int main()
{
	Node *list=initList();
	return 1;
}
