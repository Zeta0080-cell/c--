//三角形的判断 
#include<stdio.h>
#include<math.h>
double area(double a,double b,double c)     //这个函数用来求三角形的面积 
{
	double s,area,item;
	s=(a+b+c)/2;
	item=s*(s-a)*(s-b)*(s-c);
	area=sqrt(item);
	return area;
}

int main()
{
	int x1,x2,x3;
	int y1,y2,y3;
	double a,b,c,result;
	a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	b=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
	c=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
	result=area(a,b,c);
	printf("%lf",result);
	return 0;
}
