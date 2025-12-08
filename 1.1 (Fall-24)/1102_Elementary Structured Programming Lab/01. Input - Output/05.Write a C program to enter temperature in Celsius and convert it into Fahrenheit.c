/*Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
Input :
Enter the temperature in Celcius : 29
Output:
Temperature in Fahrenheit : 84.2*/

#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    // input
    printf("Enter the temperature in Celcius : ");
    scanf("%f", &celsius);

    // process
    fahrenheit = (celsius * 9 / 5) + 32;

    // output
    printf("Temperature in Fahrenheit : %.2f", fahrenheit);

    return 0;
}
