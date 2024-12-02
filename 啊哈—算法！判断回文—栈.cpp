//啊哈！算法—解密回文—栈
#include<iostream>
#include<cstdio>
#include<cmath>
#include <string.h>
#include<algorithm>
int main()
{
	char a[101],s[101];
	int i,len,mid,next,top=0;
	gets(a);
	len=strlen(a);
	mid=len/2;
	for(i=0;i<=mid;i++)
	{
		s[top]=a[i];
		top++;	
	}	
	if(len%2==0)
	{
		next=mid+1;
	}
	else
	{
		next=mid+2;
	}
	
	for(i=next;i<=len-1;i++)
	{
		if(a[i]!=s[top])
		{
			break;
		}
		top--;
	}
	
	if(top==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
} 
