//利用递归求5的阶乘
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int digui(int n)
{
	 if (n == 1)  // 递归终止条件
    {
        return 1;
    }
    return n * digui(n - 1);  // 递归调用
}
int main()
{
	int result;
	result=digui(5);
	printf("%d",result);
	return 0;
}

