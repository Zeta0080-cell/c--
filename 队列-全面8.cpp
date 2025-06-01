//队列-全面8
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
	q->rear=0;//初始化队列
	return q; 
}

int dqueue(Queue *q)//队头出队
{
	if(q->front==q->rear)
	{
		printf("队空");
		return 0;
	}//队头和队尾相同的时候，队列为空
	q->front++;
	return 1;	
} 

int equeue(Queue *Q,ElemType e)//入队操作，队尾增加 
{
	Q->data[Q->rear]=e;//队尾增加
	Q->rear++;
	return 1; 
}

int getHead(Queue *Q,ElemType *e)
{
	if(Q->front==Q->rear)
	{
		printf("空");
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
