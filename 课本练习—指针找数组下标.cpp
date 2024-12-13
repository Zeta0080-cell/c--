#include<iostream>
#include<stdio.h>
#include<math.h>
void find(int *a,int n,int *maxsub,int *minsub)
{
	int i;
	*maxsub=*minsub=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>a[*maxsub])
		{
			*maxsub=i;
		}
		if(a[i]<a[*minsub])
		{
			*minsub=i;
		}
	}
}

int main()
{
	int maxsub,minsub,a[]={5,3,7,9,2,0,4,1,6,8};
	find(a,10,&maxsub,&minsub);
	printf("maxsub=%d, minsub=%d\n",maxsub,minsub);
	return 0;
}
