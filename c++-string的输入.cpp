//c++-string的输入 
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s="hello";
	string s2="world";
	string s3=s+s2;
	getline(cin,s);//这个函数可以获得整行的输入，包括空格
	cout<< s <<endl; 
	return 0;
} 
