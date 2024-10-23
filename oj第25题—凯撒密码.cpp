#include<stdio.h>
#define MAXLINE 80
#define M 26
int main()
{
	int i=0,offset;
	char str[MAXLINE];
	while(str[i]=getchar()!='\n')
	{
		i++;
	}
	str[i]='\0';
	scanf("%d",&offset);
	if(offset>=M)
	{
		offset=offset%M;
	}
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]-'A'+offset)<M)
		{
			str[i]=str[i]+offset;	
		}	
		else
		{
			str[i]=str[i]-(M-offset);
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
		putchar(str[i]);
	}
	printf("\n");
	return 0;
}
