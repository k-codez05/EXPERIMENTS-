//Write a program to count how many digits a number has using a while loop.
//Example: Input 5029, Output 4//

#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) count = 1;
    else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }
    printf("Number of digits = %d\n", count);
    return 0;
}

