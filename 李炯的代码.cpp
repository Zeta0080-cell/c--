#include<stdio.h>
#define MAX 80
void delchar(char s[],char c)
{
	int i,j,t;
	for(i=0;i<80;i++)
	{
		if(s[i]==c)
		{
			for(j=i;s[j]!='\0';j++)
			{
				s[j]=s[j+1];
			}
		}
	}
	printf("%s",s);
}

int main()
{
	char line[MAX];
	char ch;
	scanf("%c",&ch);
	getchar();
	delchar(line,ch);
	return 0;
}
