//Write a C program for a simple calculator that repeatedly asks the user for two numbers and an operation (+, -, *, /) until the user chooses to exit. Must use a do while loop to repeat until exit.//


#include <stdio.h>
int main (){
    char operator;
    float num1, num2, result;
 
    printf("Simple Calculator\n");

    printf("Enter two numbers : \n");
    scanf("%f %f", &num1, &num2);

    printf("Enter the operator [+,-,*,/] \n");
    scanf("%s", &operator);
    
    switch(operator)
    {
        case '+': result = num1 + num2; // add two numbers
            break;
        case '-': result = num1 - num2; // subtract two numbers
            break;
            
        case '*': result = num1 * num2; // multiply two numbers
            break;
        case '/': result = num1 / num2; // divide two numbers
            break;
        default : printf("Error in operation");
            break;
    }
    printf("\n %.2f %c %.2f = %.2f\n", num1, operator, num2, result);



    return 0 ;
}













   

