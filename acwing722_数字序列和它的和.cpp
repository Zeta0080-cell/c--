#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int flag=1,a,b,sum=0,i,j;
	while(flag==1)
	{
		scanf("%d %d",&a,&b);
		if(a<=0||b<=0)
		{
			break;
		}
		else
		{
			for(j=a;j<=b;j++)
			{	
				sum=sum+j;
				printf("%d ",j);
				printf("Sum=%d",sum);
			}
		}
	}
	return 0;
}
