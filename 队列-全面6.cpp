//����-ȫ��6
#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;
typedef int ElemType;
typedef struct Queue{
	ElemType data[MAXSIZE];
	int front;
	int rear;
}Queue;

void initQueue(Queue *Q)
{
	Q->front=0;
	Q->rear=0;
}


int isEmpty(Queue *Q)
{
	if(Q->front==Q->rear)
	{
		printf("��");
		return 1;	
	} 
	else
	{
		return 0;
	}
}

ElemType dqueue(Queue *Q)//���Ӳ�������ͷɾ�� 
{
	if(Q->front==Q->rear)
	{
		printf("�ӿ�");
	}
	ElemType e=Q->data[Q->front];
	Q->front++;
	return e;
}

int equeue(Queue *Q,ElemType e)//��Ӳ�������β���� 
{
	Q->data[Q->rear]=e;
	Q->rear++;
	return 1;
}

int getHead(Queue *Q,ElemType *e)
{
	if(Q->front==Q->rear)
	{
		return 0;
	}
}

int main()
{
	return 0;
}
