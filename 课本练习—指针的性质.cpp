#include<stdio.h>
#include<math.h>
int main()
{
	int m=1;
	int *p=&m;
	int *q;
	q=p;//因为此时p和q都指向m的地址 
	*q=2;//此处修改q所指向的地址的值，即m的值 
	printf("%d",*p);//p和q都指向m的地址，而m的值已经被修改，故p指向的地址的值也会被修改 
	return 0; 
}

