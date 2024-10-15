#include<stdio.h>
int main()
{
	int n,m,result;
	scanf("%d %d",&n,&m);
    if(n<m&&n>0)
    {
        printf("We need one bus.");
    }
    else if(n>m)
    {
	   if(n%m==0)
	   {
		  result=n/m;	
	   }	
	   else
	   {
		  result=n/m+1;
	   }
	   printf("We need %d buses.",result);
    }
    else if(n==0)
    {
        result=0;
         printf("We need %d buses.",result);
    }
	   return 0;
} 
