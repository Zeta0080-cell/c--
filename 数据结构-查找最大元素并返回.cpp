//数据结构-查找最大元素并返回 
#include<bits/stdc++.h>
#define OK 1
#define OVERFLOW -2
#define MAXSIZE 100
using namespace std;
typedef int ElemType;
typedef struct{
	ElemType data[MAXSIZE];
	int length;//线性表当前的长度 
}SqList; 

SqList* initlist()//创建空表 
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
