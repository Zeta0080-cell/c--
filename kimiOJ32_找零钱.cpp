#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num);

int main() 
{
    int m, n;
    int count = 0; 
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++) 
	{
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
            if (count % 10 == 0)
			 {
                printf("\n");
            }
        }
    }
    if (count % 10 != 0)
	 {
        printf("\n");
    }

    return 0;
}
bool isPrime(int num) 
{
    if (num < 2)
	 {
        return false;
    }
    for (int i = 2; i * i <= num; i++) 
	{
        if (num % i == 0)
		 {
            return false;
        }
    }
    return true;
}
