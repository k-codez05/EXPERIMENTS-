#include <stdio.h>

int main() {
    int x = 5;

    printf("Initial value of x: %d\n", x);

    // Pre-increment: increments x first, then returns new value
    printf("Value after pre-increment (++x): %d\n", ++x);
    printf("Value of x now: %d\n", x);

    // Reset x for demonstration
    x = 5;
    printf("\nReset x to: %d\n", x);

    // Post-increment: returns current value of x, then increments
    printf("Value after post-increment (x++): %d\n", x++);
    printf("Value of x now: %d\n", x);

    return 0;
}
