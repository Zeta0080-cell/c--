//蓝桥oj2023省赛-阶乘求和 
#include <iostream>
using namespace std;
int main() 
{
    long long sum=1,ans=0;
    for(int i=1;i<=39;i++)//只用计算到39，因为已经有九位
    {
        sum*=i;
        sum%=1000000000;
        ans+=sum;
    }
    cout<<ans%1000000000;
    return 0;
}
