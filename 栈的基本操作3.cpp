//ջ�Ļ�������3
//top()����ջ��Ԫ�أ����ջΪ�գ��˴������
 //push(x)��ջ�в���Ԫ��x
 //pop()ɾ��ջ��Ԫ��
 //size()��ѯ�����е�Ԫ������
 //empty()ѯ�������Ƿ�Ϊ��

#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<int>s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	cout<<s1.top()<<" "<<endl;
	s1.pop();//ɾ��ջ����Ԫ��
	cout<<s1.top()<<endl; 
	return 0;
} 
