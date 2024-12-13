#include<stdio.h>
#include<math.h>
int main()
{
	int a[4][4]={
		{1,2,3,4,},
		{5,6,7,8},
		{3,9,10,2},
		{4,2,9,6}
	};
	int i,s=0;
	for(i=0;i<4;i++)
	{
		s+=a[i][3];
	}
	printf("%d\n",s);
	return 0;
}
