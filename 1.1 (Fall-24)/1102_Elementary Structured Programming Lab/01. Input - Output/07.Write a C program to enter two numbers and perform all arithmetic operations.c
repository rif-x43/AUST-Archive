/*Write a C program to enter two numbers and perform all arithmetic operations.*/

#include <stdio.h>
int main(){
    float number_1, number_2;
    // input
    printf("Enter the 1st number : ");
    scanf("%f", &number_1);
    printf("Enter the 2nd number : ");
    scanf("%f", &number_2);

    // output
    printf("Addition: %.2f\n", number_1 + number_2);
    printf("Subtraction: %.2f\n", number_1 - number_2);
    printf("Multiplication: %.2f\n", number_1 * number_2);
    printf("Division: %.2f\n", number_1 / number_2);

    return 0;
}