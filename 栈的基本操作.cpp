//ջ�Ļ������� 
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10,M=1e3+10;

int a[N],pre[N];

 //top()����ջ��Ԫ�أ����ջΪ�գ��˴������
 //push(x)��ջ�в���Ԫ��x
 //pop()ɾ��ջ��Ԫ��
 //size()��ѯ�����е�Ԫ������
 //empty()ѯ�������Ƿ�Ϊ��
 
int main()
{
	stack<int>s1;
	s1.push(2);
	s1.push(1);
	stack<int>s2(s1);
	s1.pop();
	cout<<s1.size()<<" "<<s2.size()<<endl;
	cout<<s1.top()<<" "<<s2.top()<<endl;
	s1.pop();
	cout<<s1.empty()<<" "<<s2.empty()<<endl;
	return 0; 	
} 
