#include<stdio.h>
int main()
{
	int min,max,i;
	double result;
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	 {
	 	result=(5.0/9.0)*(i-32);
	 	printf("%d %.1lf\n",i,result);
	 }
	 return 0;
}
