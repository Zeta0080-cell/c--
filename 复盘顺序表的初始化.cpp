//����˳���ĳ�ʼ��
#include<stdio.h>
#define MAXSIZE 100
typedef int Elemtype;
typedef struct{
	Elemtype data[MAXSIZE];
	int length;//˳���ĳ��� 
}SeqList; 

void initList(SeqList *L)//��ʼ������ 
{
	L->length=0;//��ʼ������ 
}

int main()
{
	SeqList list;//����һ��˳������� 
	initList(&list);//�����ַ
	printf("��ʼ���ɹ���Ŀǰ˳���ĳ���Ϊ��%d",list.length);
	printf("��ʼ���ɹ���Ŀǰ˳���ռ�õ��ֽ�Ϊ:%zu",sizeof(list)); 
	return 0;
}
