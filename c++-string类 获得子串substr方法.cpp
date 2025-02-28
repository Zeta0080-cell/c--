//c++-string类 获得子串substr方法 
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 	string s = "hello world!";
 	string s_sub=s.substr(2,3);//表示从s的第二个字符开始，往后面取3个字符 
	cout << s_sub << endl;
	return 0;
} 
