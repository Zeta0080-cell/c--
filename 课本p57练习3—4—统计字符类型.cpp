//¿Î±¾Á·Ï°¡ªÍ³¼Æ×Ö·û¸´ÅÌÁ·Ï° 
#include<stdio.h>
#include<ctype.h>
int main()
{
	char zeta;
	int i;
	int letters,digits,spaces,others;
	while((zeta=getchar())!='\n')
	{
		if(isalpha(zeta))
		{
			letters++;
		}
		else if(isdigit(zeta))
		{
			digits++;
		}
		else if(isspace(zeta))
		{
			spaces++;
		}
		else
		{
			others++;
		}
	}
	printf("%d %d %d %d",letters,digits,spaces,others);
	return 0;
}
