//���������һ��̰���⡣
//���ȣ�������ȷһ�㣺����()()()����Ĵ�����С�ڹ���
//    ((()))�Ĵ��۵�
// Ҫ����۾����ܵ�С�������ž���Ҫ��������������
//Ҳ����˵����ǰ����ɨʱ������ܷ������ţ��Ͳ��������� 
//�ܴ���Ϊ�����������±��ȥ�����������±� 



//����˼·��1.���δ֪�ַ��������е�����λ������ţ�ȷ�����źϷ��ԡ�
//2.��С���ѣ���ȡ̰�Ĳ��ԣ�����������䣬ȷ�����ž������� 


//ʵ�ֲ��裺1.ͳ�����ţ�����ͳ�Ƹ�����������֪�������ź������������� 
//2.ȷ����Ҫ�������ţ�������֪������������ȷ����Ҫ���������ź������������� 
//3.������ţ������е���������������ţ���С�����ѡ� 
//4.���㻨�ѣ������������м��㻨�ѡ� 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#define MAX_N 200000
using namespace std;
int main()
{
	int T,n,i;
	char s[20];
	int cost=0;
	int left_needed=0,right_needed=0;
	int left_count=0,right_count=0;
	while(T--)    //�������ݵ����� 
	{
		cin>>n;   //�û������ܹ��ĳ���n 
		char s[i+1];
		scanf("%s",&s);
		for(i=1;i<=n;i++)
		{
			if(s[i]=='(')
			{
				left_count++;
			}
			else if(s[i] == ')')
			{
				  right_count++;     //ͳ���û������������ŵ����� 
			}
		}
		left_needed = (n / 2) - left_count;
        right_needed = (n / 2) - right_count;//������Ҫ�����������ŵ����� 
        //��䲢���㻨�� 
         int stack[MAX_N]; // �����洢�����ŵ�λ��
        int top = -1; // ջ�Ķ���ָ��
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') {
                if (left_needed > 0) {
                    s[i] = '(';
                    left_needed--;
                    stack[++top] = i; // ��¼�����ŵ�λ��
                } else {
                    s[i] = ')';
                }
            } else if (s[i] == '(') {
                stack[++top] = i; // ��¼�����ŵ�λ��
            } else if (s[i] == ')') {
                if (top >= 0) {
                    int left_index = stack[top--]; // ƥ���������λ��
                    cost += (i - left_index);
                }
            }
        }
        
        printf("%d\n", cost);
    }
        
}

