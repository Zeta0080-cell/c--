//ջ�Ļ�������2
#include<bits/stdc++.h>
using namespace std;

//top()����ջ��Ԫ�أ����ջΪ�գ��˴������
 //push(x)��ջ�в���Ԫ��x
 //pop()ɾ��ջ��Ԫ��
 //size()��ѯ�����е�Ԫ������
 //empty()ѯ�������Ƿ�Ϊ��

int main()
{
	stack<int>s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	cout<<s1.top()<<"\n"<<endl; 
	s1.pop();//ɾ��ջ����Ԫ�أ��������ջ��Ԫ�أ�����3
	cout<<s1.top()<<"\n"<<endl;
	return 0; 
}
