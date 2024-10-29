#include <stdio.h>

int main() {
    int n; 
    int a1, a2, a3; 
    int b1, b2, b3; 

    scanf("%d", &n);
    scanf("%d %d %d", &a1, &a2, &a3);
    scanf("%d %d %d", &b1, &b2, &b3);

    int wins = 0;
    wins += (a1 < b2) ? a1 : b2; 
    wins += (a2 < b3) ? a2 : b3; 
    wins += (a3 < b1) ? a3 : b1; 
    printf("%d\n", wins);

    return 0;
}
