//2020年蓝桥杯省赛-门牌制作(c++)
//to_string函数 
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int count;
	for(int i=1;i<=2020;i++)
	{
		string s = to_string(i);
		for(int j=0;j<s.size();j++)
		{
			if(s[j]=='2')
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
