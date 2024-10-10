//一元钱的兑换方式
//输入描述：列举出所有将一元钱兑换成1角、2角或5角的可能
//思路：使用循环嵌套的穷举法，列出让结果成立的条件，让程序来求解 
#include<stdio.h>
int main()
{
	printf("以下为所有的解决方案：\n");
	int one,two,five,i;
	for(one=0;one<=10;one++)
	   for(two=0;two<=5;two++)
	      for(five=0;five<=2;five++)
	        {
	        	if(one*1+two*2+five*5==10)
	        	{
	        		printf("%d %d %d\n",one,two,five);
				}
			}
	return 0;
 } 
