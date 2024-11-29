#include<iostream>
using namespace std;
int mian()
{
	char ch[20];
	int count=1;
	int i;
	for(i=0;i<20;i++)
	{
		cin>>ch[i];
		if(ch[i]="")
		{
			count+=1;
		}
	}
	 printf("%d",count);
	 return 0;
}
