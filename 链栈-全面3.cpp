//链栈-全面3
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct stack
{
	ElemType data;//链栈数据域 
	struct stack *next;//链栈指针域 
}Stack; 

Stack* initStack()//初始化链栈 
{
	Stack *s=(Stack*)malloc(sizeof(Stack));
	s->data=0;
	s->next=NULL;
	return s;
}

int isEmpty(Stack *s)//判断栈是否为空
{
	if(s->next==NULL)
	{
		printf("空");
		return 1;
	}
	else
	{
		return 0;
	}
} 


int pop(Stack *s,ElemType *e)//出栈,即删除栈顶 
{
	if(s->next==NULL)
	{
		printf("空");
		return 0;
	}
	*e=s->next->data;//指针e获取栈顶的元素 
	Stack *q=s->next;//q用来获取栈顶的元素 
	s->next=q->next;//重定栈顶 
	free(q);
	return 1;
}

int main()
{
	Stack *s=initStack();
	return 0;
} 
