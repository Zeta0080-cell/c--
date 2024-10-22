#include <stdio.h>

int solution(int xPosition, int yPosition) {
    int d = yPosition - xPosition; // distance we need to cover
    int steps = 0;
    int sum = 0;

    // Keep taking steps until we can match the distance
    while (sum < d || (sum - d) % 2 != 0) {
        steps++;
        sum += steps; // increasing sum by the number of steps taken
    }

    return steps + 1; // +1 for the last step of length 1
}

int main() {
    // Test cases
    printf("%d\n", solution(12, 6) == 4);  // Output: 4
    printf("%d\n", solution(34, 45) == 6); // Output: 6
    printf("%d\n", solution(50, 30) == 8); // Output: 8
    return 0;
}
