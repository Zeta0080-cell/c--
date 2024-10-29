#include <stdio.h>
#include <math.h>
int main() 
{
    int n, i, j, k, sum, temp;
    scanf("%d", &n);
    for (i = pow(10, n-1); i < pow(10, n); i++) 
	{
        sum = 0; 
        temp = i; 
        while (temp > 0) 
		{
            k = temp % 10; 
            sum += pow(k, n); 
            temp /= 10;        
		}
        if (sum == i)
		 {
            printf("%d\n", i);
        }
    }

    return 0;
}
