#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int abs(int x)
{
    if(x>0||x==0)
    {
        return x;
    }
    else if(x<0)
    {
        return -x;
    }
}

int main()
{
    int x,result;
    scanf("%d",&x);
    result=abs(x);
    printf("%d",result);
    return 0;
}
