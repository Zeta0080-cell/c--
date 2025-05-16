//牛客周赛100—A三角形问题 
#include <iostream>
using namespace std;

int isS(long long int a, long long int b, long long int c) 
{
    int flag = 0;
    if ((a + b > c) && (b + c > a) && (a + c > b)) 
	{
        flag = 1;
    }
    return flag;
}

int main() 
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (isS(2 * a, b, c) == 1 || isS(a, 2 * b, c) == 1 || isS(a, b, 2 * c) == 1) {
        printf("Yes");   
    } else {
        printf("No");   
    }
    return 0;
}
