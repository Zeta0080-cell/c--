//������-��ʼ��10 
#include<bits/stdc++.h>
using namespace std;
#define OK 1//����OK��ʾ�����ɹ� 
#define ERROR 0//����ERROR��ʾ����ʧ�� 
using namespace std;
//����ṹ����
typedef int Status;
typedef int ElemType;
typedef struct LNode{
	ElemType data;//���������� 
	struct LNode *next;//����ָ���� 
}LNode,*Linklist;//LinklistΪָ��LNode��ָ������ 

Status initlist(Linklist &L)
{
	L=new LNode;//�ȼ���L = (LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	return OK;
}

int main()
{
	Linklist L;//���嵥����
	initlist(L);
	return 0;
}
