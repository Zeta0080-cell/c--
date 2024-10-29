//oj第26题—十六进制字符串转换成十进制非负整数
//OJ第26题—十六进制字符串转换成十进制非负整数 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#define MAXLINE 80			//定义符号常量MAXLINE 
using namespace std;
int main()
{
	int i=0,number;
	int k=0; 
	char hexad[MAXLINE],str[MAXLINE];
	while((str[i]=getchar())!='#')				//输入结束字符"#" 
	{
		i++;
	}
	str[i]='\0';				//将字符串结束符'\0'存入数组str	
	while(str[i]!='\0')
	{
		if((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='f')||(str[i]>='A'&&str[i]<='F'))
		{
			hexad[k]=str[i];			//将十六进制字符放入新字符串 
			k++;
		}
		i++;
	}
	hexad[k]='\0';
	
	for(i=0;hexad[i]!='\0';i++)
	{
		putchar(hexad[i]);	
	} 
	printf("\n");
	
	number=0;
	for(i=0;hexad[i]!='\0';i++)
	{
		if(hexad[i]>='0'&&hexad[i]<='9')
		{
			number=number*16+hexad[i]-'0';
		}
		else if(hexad[i]>='A'&&hexad[i]<='F')
		{
			number=number*16+hexad[i]-'A'+10;
		}
		else if(hexad[i]>='a'&&hexad[i]<='f')
		{
			number=number*16+hexad[i]-'a'+10;
		}
	}
	printf("%d",number);
	return 0;
} 
