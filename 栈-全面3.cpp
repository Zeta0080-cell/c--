//ջ-ȫ��3 
#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;
typedef int ElemType;
typedef struct{
	ElemType data[MAXSIZE];//ջ�Ĵ洢 
	int top;//ջ��ָ�� 
}Stack; 

Stack* initStack()
{
	Stack *s=(Stack*)malloc(sizeof(Stack));
	s->top=-1;
	return s;
}

int push(Stack *s,ElemType e)//��ջ 
{
	if(s->top>=MAXSIZE-1)
	{
		printf("��");
		return 0;	
	}	
	s->top++;
	s->data[s->top]=e;
} 

int pop(Stack* s,ElemType *e)
{
	if(s->top==-1)
	{
		printf("��");
		return 0;
	}
	*e=s->data[s->top];//��ָ�봢��ջ����Ԫ�� 
	s->top--;
	return 1;
}

int getTop(Stack *s,ElemType *e)
{
	if(s->top==-1)
	{
		printf("��");
		return 0;
	}
	*e=s->data[s->top];
	return 1;
}

int main()
{
	Stack *s = initStack();//����һ��ջ����ָ�� 
    push(s, 10);
    push(s, 20);
    push(s, 30);
    ElemType e;
    pop(s, &e);
    printf("%d\n", e);
    getTop(s, &e);
    printf("%d\n", e);
    free(s); // �ǵ��ͷ��ڴ� 
	return 0;
}
