//˳���-��β�����Ԫ�أ�˳�������� 
#include<stdio.h>
#define MAXSIZE 100
typedef int Elemtype;
typedef struct{
	Elemtype data[MAXSIZE];
	int length;
}SeqList;//����˳���

void initList(SeqList *L)//��ʼ��˳���,����˳���ĵ�ַ 
{
	L->length=0; 
} 

//����β����Ӻ���,����˳���ĵ�ַ����Ҫ��ӵ�Ԫ�� 
int appendElem(SeqList *L,Elemtype e)
{
	if(L->length>=MAXSIZE)
	{
		printf("��˳�������");
		return 0;
	}
	L->data[L->length]=e;
	L->length++;
	return 1;
}

void listElem(SeqList *L)//˳����������,������������� 
{
	for(int i=0;i<L->length;i++)
	{
		printf("%d ",L->data[i]);
	}	
	printf("\n");
} 
int main()
{
	SeqList list;//����˳���
	initList(&list);//��ʼ��˳���
	appendElem(&list,1);
	appendElem(&list,2);
	appendElem(&list,3);
	listElem(&list);//����˳���
	return 0; 
}
