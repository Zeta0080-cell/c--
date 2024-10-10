//特殊等式
//有这样一个等式，xyz+yzz=532;编程求x、y、z的值（其中xyz，yzz均为三位数）
//穷举思想 
#include<stdio.h>
int main()
{
	int x,y,z,m,sum;
	for(x=0;x<10;x++)
    	for(y=0;y<10;y++)
    		for(z=0;z<10;z++)
    		{
    			sum=100*x+10*y+z+100*y+10*z+z;
    			if(sum==532)
    			{
    				printf("这样的三位数所有结果是：\n"); 
    				printf("%d %d %d",x,y,z);
				}
		    }
	return 0;
}
