#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_EXP 51 
void zeta1(int cf[]) 
{
    int c, exp;
    while (1)
	 {
        scanf("%d %d", &c, &exp);
        if (c == -1 && exp == -1) break; 
        cf[exp] += c; 
    }
}
void zeta2(int cf[]) 
{
    int isFirst = 1; 
    for (int exp = MAX_EXP - 1; exp >= 0; exp--) 
	{
        int c = cf[exp];
        if (c == 0) continue; 
        if (isFirst)
		 {
            if (c < 0) printf("-");
        } 
		else 
		{
            printf(c > 0 ? "+" : "-");
        }

        if (abs(c) != 1 || exp == 0) printf("%d", abs(c)); 
        if (exp > 0) printf("x");
        if (exp > 1) printf("^%d", exp);

        isFirst = 0; 
    }

    if (isFirst)
	 { 
        printf("0");
    }
    printf("\n");
}

int main() 
{
    int a[MAX_EXP] = {0}; 
    int b[MAX_EXP] = {0}; 
    char op; 
    zeta1(a);
    scanf(" %c", &op);
    zeta1(b);
    for (int i = 0; i < MAX_EXP; i++) 
	{
        if (op == '+') 
		{
            a[i] += b[i];
        } else if (op == '-') 
		{
            a[i] -= b[i];
        }
    }

    zeta2(a);
    return 0;
}
