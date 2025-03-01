//c++-键值对map 
#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
	map <string,int> m;//定义键值对，并命名变量
	m["hello"]=2;
	m["world"]=3;
	cout << "hello:"<<m["hello"]<<endl;
	return 0;
}
