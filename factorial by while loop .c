//Write a C program to find the factorial of a number using a while loop.//
//Example: Input 5, Output 120//

#include <stdio.h>
int main () {
    int num, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

   while ( num > 1) {
        factorial = factorial * num;
        num--;
    }

    printf("Factorial is: %d", factorial);


    return 0 ;
}










