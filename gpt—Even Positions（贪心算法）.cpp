#include <stdio.h>
#include <string.h>

#define MAX_N 200000

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        char s[MAX_N + 1];
        scanf("%s", s);
        int n = strlen(s);
        
        int left_needed = 0, right_needed = 0;
        int left_count = 0, right_count = 0;
        
        // 统计已知的左括号和右括号
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                left_count++;
            } else if (s[i] == ')') {
                right_count++;
            }
        }
        
        // 计算需要填充的左括号和右括号数量
        left_needed = (n / 2) - left_count;
        right_needed = (n / 2) - right_count;
        
        // 填充括号并计算花费
        int cost = 0;
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
    
    return 0;
}
