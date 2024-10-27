//oj44题—找出最小整数 
#include <stdio.h>
int main()
 {
    int n, i;
    int min;
    scanf("%d", &n);
    scanf("%d", &min);
    for (i = 1; i < n; i++) 
	{
        int num;
        scanf("%d", &num);
        if (num < min)
		 {
            min = num; 
        }
    }
    printf("min is %d\n", min);

    return 0;
} 
