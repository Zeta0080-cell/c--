//���ݽṹ-�������Ԫ�ز����� 
#include<bits/stdc++.h>
#define OK 1
#define OVERFLOW -2
#define MAXSIZE 100
using namespace std;
typedef int ElemType;
typedef struct{
	ElemType data[MAXSIZE];
	int length;//���Ա�ǰ�ĳ��� 
}SqList; 

SqList* initlist()//�����ձ� 
{
	SqList *L=(SqList*)malloc(sizeof(SqList));
	L->length=0;
	return L;
}

int main()
{
	int n,max;
	SqList *L;
	L=initlist();
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&L->data[i]);
	}
	max=L->data[0];
	for(int i=0;i<n;i++)
	{
		if(L->data[i]>max)
		{
			swap(max,L->data[i]);
		}
	}
	printf("%d",max);
	return 0;
}
