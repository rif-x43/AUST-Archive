/*Write a C program to enter the base and height of a triangle and find its area.*/

#include <stdio.h>
int main(){
    float base, height;
    // input
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    
    // output
    printf("Area of the rectangle is: %.2f", 0.5 * base * height);

    return 0;
}