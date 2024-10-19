//oj课本练习92 — 使用函数计算素数的个数并求和
#include<iostream>
#include<cstdio>
using namespace std;
#include<math.h>
int prime(int n) 
{
    if (n <= 1) return 0; 
    if (n == 2) return 1; 
    if (n % 2 == 0) return 0; 
    for (int i = 3; i <= sqrt(n); i +=1)
	 {
        if (n % i == 0)
		 {
            return 0; 
        }
    }
    return 1; 
}
int main()
 {
    int m, n, count = 0, sum = 0;
    scanf("%d %d", &m, &n);
    if (m > n) 
	{
        int temp = m;
        m = n;
        n = temp;
    }
    for (int i = m; i <= n; i++)
	 {
        if (prime(i)==1) 
		{
            count++; 
            sum=sum+i; 
        }
    }
    printf("%d %d",count,sum);
    return 0;
}

