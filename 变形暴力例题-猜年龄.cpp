//变形暴力例题-猜年龄 
#include<iostream>
#include<algorithm>
#include<string>
#include <cstdlib>  // 对于整数类型
#include <cmath>    // 对于浮点数类型
using namespace std;

int main()
{
	int i,j;//分别代表两个妹妹的年龄
	int flag;
	flag=fabs(i-j);
	for(int i=1;i<30;i++)
	{
		for(int j=1;j<30;j++)
		{
			if(i<j&&i*j==(i+j)*6&&(j-i)<=8)
			{
				cout<<i<<" "<<j<<endl;
			}
		}
	}
	return 0;
} 
