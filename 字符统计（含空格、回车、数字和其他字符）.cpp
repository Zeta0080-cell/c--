#include<stdio.h>
#include<ctype.h>
int main()
{
	int n,i,x=0,y=0,z=0;
	char Zeta;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%c",&Zeta);
		if(isspace(Zeta))
		{
			x+=1;
		}
		else if(isdigit(Zeta))
		{
			y+=1;
		}
		else{
			z+=1;
		}
	}
	printf("%d %d %d",x,y,z);
	return 0;
} 
