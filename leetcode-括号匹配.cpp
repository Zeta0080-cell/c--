//leetcode-����ƥ�� 
#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;
typedef char ElemType;
typedef struct Stack{
    ElemType data[MAXSIZE];
    int top;//ջָ��
}Stack;

Stack* initStack()//��ʼ��ջ 
{
    Stack *s=(Stack*)malloc(sizeof(Stack));
    s->top=-1;
    return s;
}

int push(Stack *s, ElemType e)//��ջ 
{
    if(s->top >= MAXSIZE-1)
    {
        printf("��");
        return 0;
    }
    s->top++;
    s->data[s->top] = e;
    return 1;
} 

int pop(Stack *s, ElemType *e)//ɾ��ջ�� 
{
    if(s->top == -1)
    {
        printf("��\n");
        return 0;
    }
    *e = s->data[s->top]; //����ջ����Ԫ�� 
    s->top--;
    return 1;
}

int getTop(Stack *s, ElemType *e)
{
    if(s->top == -1)
    {
        printf("��");
        return 0;    
    }    
    *e = s->data[s->top];
    return 1;
} 

int main()
{
	Stack *s=initStack();
	char input[MAXSIZE];
	scanf("%s",input);
	ElemType topelem;
	int value=1;
	for(int i=0;input[i]!='\0';i++)
	{
		 if (input[i] == '(' || input[i] == '{' || input[i] == '[') 
		{
            push(s, input[i]);
        }//��������ջ 
        else
        {
        	if(getTop(s,&topelem)==0)
        	{
        		value=0;
        		break;//�˳�ѭ�� 
			}
			if((input[i] == ')' && topelem == '(') ||
                (input[i] == '}' && topelem == '{') ||
                (input[i] == ']' && topelem == '['))
                {
                	pop(s,&topelem);//ƥ��ɹ�������ջ�� 
				}
			else
			{
				value=0;
				break;
			}
		}
	}
	
	if(value==1&&s->top!=-1)
	{
		value=0;
	}//���ջ�Ƿ�Ϊ��
	if(value==1)
	{
		printf("true\n");	
	} 
	else
	{
		printf("false\n");
	}
	free(s);
	return 0;
}
