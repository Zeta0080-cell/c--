//啊哈—算法！解密qq号—队列 
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int a[20]={0,6,3,1,7,5,8,9,2,4};
	int head=1;
	int tail=10;
	while(head<tail)
	{
		printf("%d",a[head]);
		head++;
		a[tail]=a[head];
		head++;
		tail++;
	}
	return 0;
}

