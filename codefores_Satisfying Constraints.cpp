#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#include <limits.h>
int main() 
{
    int n; 
    while (scanf("%d", &n) == 1)
	 { 
        long long lower_bound = LLONG_MIN; 
        long long upper_bound = LLONG_MAX; 
        long long exclude[100]; 
        int exclude_count = 0; 
        for (int i = 0; i < n; i++)
		 {
            int a;
            long long x;
            scanf("%d %lld", &a, &x);
            if (a == 1)
			{ 
                if (x > lower_bound) 
				{
                    lower_bound = x;
                }
            } else if (a == 2)
			 { 
                if (x < upper_bound)
				 {
                    upper_bound = x;
                }
            } else if (a == 3)
			 { 
                exclude[exclude_count++] = x;
            }
        }

        if (lower_bound > upper_bound) 
		{
            printf("0\n");
            continue;
        }

        long long count = upper_bound - lower_bound + 1; 
        for (int i = 0; i < exclude_count; i++)
		 {
            if (exclude[i] >= lower_bound && exclude[i] <= upper_bound) {
                count--; 
            }
        }

        printf("%lld\n", count);
    }
    return 0;
}
