#include<stdio.h>
int main()
{
	int digit,letter,other,i,n;
	char zeta;
	digit=0;
	letter=0;
	other=0;
	scanf("%d",&n);
	getchar();
	for(i=1;i<=n;i++)
	{
		scanf("%c",&zeta);
		if((zeta>='a'&&zeta<='z')||(zeta>='A'&&zeta<='Z'))
		{
			digit++;
		}
		else if(zeta>='0'&&zeta<='9')
		{
			letter++;
		}
		else 
		{
			other++;
		}
	}
	printf("%d %d %d",digit,letter,other);
	return 0;
}
