//�������ʼ��-10
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct node{
	ElemType data;//����������
	struct node *next;//����ָ���� 
}Node;//������ΪNode

Node *initlist()//��ʼ������ 
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;//����ͷ�ڵ� 
} 

int main()
{
	Node *list;//����һ��ָ�룬ָ��list�ṹ
	list=initlist(); 
	return 0;
}
