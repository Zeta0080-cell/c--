//oj课本练习—使用函数计算两点间的距离 
//需求：给定平面内任意两点坐标（x1，y1），（x2，y2），求这两点之间的距离 
#include<stdio.h>
#include<math.h>
double dist(double x1,double y1,double x2,double y2)
{
	double result;
	result= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return result;	
}

int main()
{
	double x1,x2,y1,y2,sum;
	printf("请输入第一个点的坐标：\n");
	scanf("%lf %lf",&x1,&y1);
	printf("请输入第二个点的坐标：\n");
	scanf("%lf %lf",&x2,&y2);
	sum=dist(x1,y1,x2,y2);	
	printf("%.2f",sum);
	return 0;	
} 
