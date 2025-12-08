/*Write a C program to calculate the area of an equilateral triangle.*/

#include <stdio.h>
#include <math.h>
int main(){
    float side, area;
    // input
    printf("Enter the side of the equilateral triangle: ");
    scanf("%f", &side);
    
    // output
    printf("Area of the equilateral triangle : %.2f", side * side * sqrt(3) / 4);
    
    return 0;
}