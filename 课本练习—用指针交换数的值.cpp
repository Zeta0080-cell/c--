#include <stdio.h>

void swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a = 5, b = 8;
    swap(&a, &b);
    printf("a=%d, b=%d", a, b);
    return 0;
}

