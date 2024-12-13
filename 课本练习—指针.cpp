#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int x=5342;
	int *p=NULL;
	p=&x;//将变量x的地址储存在指针p中
	printf("%d\n",x);
	printf("%x %d",p,*p);
	return 0; 
}
