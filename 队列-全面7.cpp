//����-ȫ��7
#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;
typedef int ElemType;
typedef struct Queue{
	ElemType data[MAXSIZE];
	int front;
	int rear;
}Queue; 

Queue* initQueue()
{
	Queue *q=(Queue*)malloc(sizeof(Queue));
	q->front=0;
	q->rear=0;
	return q;
}

int dqueue(Queue *q)//���ӣ���ͷ����
{
	if(q->front==q->rear)
	{
		printf("�ӿ�");
		return 0;
	}
	q->front++;
	return 1;
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
		printf("��");
		return 0;
	}
	*e=Q->data[Q->front];
	return 1;
}

int main()
{
	Queue *q=initQueue();
	equeue(q,10);
	equeue(q,20);
	equeue(q,30);
	equeue(q,40);
	equeue(q,50);
	ElemType e;
	getHead(q,&e);
	printf("%d\n",e);
	dqueue(q);
	getHead(q,&e);
	printf("%d\n",e);
	dqueue(q);
	getHead(q,&e);
	printf("%d\n",e);
	free(q);
	return 0;
}
