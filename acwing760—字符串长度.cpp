#include<iostream>
#include<cstdio>
#include<ctype.h>
#include<algorithm>
using namespace std;
int main()
{
	int count=0;
	char zeta;
	while((zeta=getchar())!=EOF)
	{
		count++;
	}
	printf("%d",count);
	return 0;
}
