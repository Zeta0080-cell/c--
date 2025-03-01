//2017蓝桥杯省赛-年龄问题（暴力解题） 
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//调用这个函数来检查数字
bool isUnique(long long int n1,long long int n2)
{
	string s=to_string(n1)+to_string(n2);//字符串拼接
	if(s.length()!=10)
	{
		return false;//长度不是10直接返回 
	}
	sort(s.begin(),s.end());//调用排序函数
	for(int i=0;i<10;i++)
	{
		if(s[i]!= '0' + i)
		{
			return false;
		}	
	} 
	return true;
}


int main()
{
	long long int cube,fourth;
	for(int i=10;i<30;i++)
	{
		cube = i*i*i;
		fourth = i*i*i*i;
		if(cube>=1000&&cube<10000&&fourth>=100000&&fourth<1000000)
		{
			if(isUnique(cube,fourth))
			{
				cout<<i<<" "<<cube<<" "<<fourth<<endl;
			}
		}
	}
	return 0;
}
