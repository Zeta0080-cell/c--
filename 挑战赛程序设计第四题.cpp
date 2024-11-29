#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getCardValue(char card) {
    if (card == 'A') return 1;
    if (card == 'J' || card == 'Q' || card == 'K') return 10;
    if (card >= '2' && card <= '9') return card - '0';
    return 0;
}

int isBull(int cards[5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum % 10 == 0) { 
                    int remainingSum = 0;
                    for (int m = 0; m < 5; m++) {
                        if (m != i && m != j && m != k) {
                            remainingSum += cards[m];
                        }
                    }
                    return remainingSum % 10;
                }
            }
        }
    }
    return -1;  
}

int main() {
    char input[6];
    while (scanf("%s", input) != EOF) {
        int cards[5];
        for (int i = 0; i < 5; i++) {
            cards[i] = getCardValue(input[i * 2]); 
        }

        int result = isBull(cards);  
        if (result == -1) {
            printf("NOBI\n"); 
        } else if (result == 0) {
            printf("DOUBLE BULL\n"); 
        } else {
            printf("BULL%d\n", result); 
        }
    }
    return 0;
}
