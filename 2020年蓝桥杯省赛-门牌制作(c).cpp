//2020年蓝桥杯省赛-门牌制作(c)
#include<stdio.h>
int main()
{
	int i,num,count=0;
	for(i=0;i<=2020;i++)
	{
		num=i;
		while(num)//当num的值不为0的时候一直循环
		{
			if(num%10==2)
			{
				count++;
			}
			num/=10;//迭代	
		} 
	}
	printf("%d",count);
	return 0;
}
