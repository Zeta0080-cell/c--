//°á×©ÎÊÌâ
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int children,cnt,men,n,women;
	printf("ÇëÊäÈën");
	scanf("%d",&n);
	cnt=0;
	for(men=0;men<=n;men++)
	{
		for(women=0;women<=n;women++)
		{
			for(children=0;children<=n;children++)
			{
				if((men+women+children==n)&&(men*3+women*2+children*0.5==n))
				{
					printf("men=%d ,women=%d ,children=%d",men,women,children);
					cnt++;
				}
			}
		}
	}
	return 0;
 } 
