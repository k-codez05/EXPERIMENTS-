#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a four digit integer: ");
    scanf("%d", &num);

    sum += num % 10;     // units digit
    num /= 10;

    sum += num % 10;     // tens digit
    num /= 10;

    sum += num % 10;     // hundreds digit
    num /= 10;

    sum += num % 10;     // thousands digit

    printf("Sum of digits: %d\n", sum);

    return 0;
}
