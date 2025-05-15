//队列-全面4
#include<bits/stdc++.h>
#define MAXSIZE 100
typedef int ElemType;
typedef struct
{
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
		printf("空");
		return 1;	
	} 
	else
	{
		return 0;
	}
}

ElemType dequeue(Queue *Q)
{
	if(Q->front==Q->rear)
	{
		printf("空");
		return 0;
	}
	ElemType e=Q->data[Q->front];
	Q->front++;
	return e;
}

int equeue(Queue *Q,ElemType e)
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
