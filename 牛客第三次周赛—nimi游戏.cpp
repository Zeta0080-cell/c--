#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T); 

    while (T--) 
    {
        int n, m;
        scanf("%d %d", &n, &m); 
        if (n % (m + 1) == 0)
        {
            printf("xiaowang\n"); 
        } else 
        {
            printf("xiaohuang\n"); 
        }
    }

    return 0;
}
