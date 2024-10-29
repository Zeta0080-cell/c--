#include <stdio.h>
int find_floor(int n, int x)
{
    int k = 1;  
    while (1)
    {
        int min_room = (k - 1) * x + 3; 
        int max_room = k * x + 2;       
        if (min_room <= n && n <= max_room) 
        {
            return k;  
        }
        k++;  
    }
}

int main() 
{
    int n, x;
    int m,i;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d %d", &n,&x);
        int floor_number = find_floor(n, x);
        printf("%d\n", floor_number);
    }
    return 0;
}




