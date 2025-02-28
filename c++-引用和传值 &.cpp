//c++-引用和传值 &
//引用&和取地址符没有半毛钱关系 
#include<iostream>
#include<algorithm>
using namespace std;

void c(int &a)
{
	a+=1;
}
int main()
{
	int n=3;
	c(n);//直接调用void函数，因为直接传的地址，不需要变量来接受改变后的值 
	cout<< n <<endl;
	return 0;
}
