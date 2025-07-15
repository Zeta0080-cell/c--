//acwing721-ЕндіађСа
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int flag=1,i,n;
	while(flag==1)
	{
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		else
		{
			for(i=1;i<=n;i++)
			{
				printf("%d ",i);
			}
		}
	}
	return 0;
} 
