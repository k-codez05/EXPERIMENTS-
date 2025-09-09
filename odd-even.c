#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using bitwise AND and ternary operator to check even or odd
    (num & 1) ? printf("%d is odd.\n", num) : printf("%d is even.\n", num);

    return 0;
}
