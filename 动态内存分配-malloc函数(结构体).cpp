//��̬�ڴ����-malloc����(�ṹ��) 
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int x;
	int y;
}po;//����һ����Ϊpo�Ľṹ��

int main()
{
	po *p;//����һ��ָ��ṹ��po��ָ��
	p=(po*)malloc(sizeof(po));//Ϊ�ṹ�����һ���ڴ� 
	p->x=5;
	p->y=10;
	printf("%d\n",p->x);
	printf("%d\n",p->y);
	return 0;	
} 


 
