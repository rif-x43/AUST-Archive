/*Write a C program to enter temperature in Fahrenheit and convert to Celsius.*/

#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    // input
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // process
    celsius = (fahrenheit - 32) * 5 / 9;

    // output
    printf("Temperature in Celsius: %.2f", celsius);
    
    return 0;
}