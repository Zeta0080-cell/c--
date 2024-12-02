//这道题属于一道贪心题。
//首先，我们明确一点：构成()()()所需的代价是小于构成
//    ((()))的代价的
// 要想代价尽可能的小，右括号就需要尽量靠近左括号
//也就是说，从前往后扫时，如果能放右括号，就不放左括号 
//总代价为所有右括号下标减去所有左括号下标 



//解题思路：1.填充未知字符：在序列的奇数位填充括号，确保括号合法性。
//2.最小花费：采取贪心策略，从内向外填充，确保括号尽量靠近 


//实现步骤：1.统计括号：首先统计给定序列中已知的左括号和右括号数量。 
//2.确定需要填充的括号：根据已知的括号数量，确定需要填充的左括号和右括号数量。 
//3.填充括号：从序列的中心向外填充括号，最小化花费。 
//4.计算花费：根据括号序列计算花费。 
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
	while(T--)    //测试数据的组数 
	{
		cin>>n;   //用户输入总共的长度n 
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
				  right_count++;     //统计用户输入左右括号的数量 
			}
		}
		left_needed = (n / 2) - left_count;
        right_needed = (n / 2) - right_count;//计算需要填充的左右括号的数量 
        //填充并计算花费 
         int stack[MAX_N]; // 用来存储左括号的位置
        int top = -1; // 栈的顶部指针
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') {
                if (left_needed > 0) {
                    s[i] = '(';
                    left_needed--;
                    stack[++top] = i; // 记录左括号的位置
                } else {
                    s[i] = ')';
                }
            } else if (s[i] == '(') {
                stack[++top] = i; // 记录左括号的位置
            } else if (s[i] == ')') {
                if (top >= 0) {
                    int left_index = stack[top--]; // 匹配的左括号位置
                    cost += (i - left_index);
                }
            }
        }
        
        printf("%d\n", cost);
    }
        
}

