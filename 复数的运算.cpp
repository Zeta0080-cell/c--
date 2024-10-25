#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	double m,n,j,k;
	scanf("%d %d\n%d %d",&a,&b,&c,&d);
	m=a+c;
	n=b+d;
	j=a*c-b*d;
	k=a*d+b*c;
	printf("%.2f+%.2fi\n%.2f+%.2fi",m,n,j,k);
	return 0;
} 
